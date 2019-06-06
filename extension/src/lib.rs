use discord_rpc_client::Client as DiscordRPC;
use enigo::{Enigo, KeyboardControllable, Key};
use webbrowser;

#[macro_use]
extern crate lazy_static;

extern crate libc;
use libc::c_char;
use libc::strncpy;

use std::ffi::CStr;
use std::ffi::CString;
use std::sync::Mutex;
use std::time::SystemTime;

lazy_static! {
  static ref RPCM: Mutex<DiscordRPC> = Mutex::new(DiscordRPC::new(411594868293500938).unwrap());
}

static mut STARTED: bool = false;
static mut TIMESTAMP: u64 = 0;

fn get_c<T: Into<Vec<u8>>>(t: T) -> *mut c_char {
  CString::new(t).unwrap().into_raw()
}

#[no_mangle]
pub unsafe extern "C" fn RvExtensionVersion(output: *mut c_char, output_size: usize) {
  let v = get_c("0.3");
  strncpy(output, v, output_size);
}

#[no_mangle]
pub unsafe extern "C" fn RVExtension(output: *mut c_char, output_size: usize, function: *mut c_char ) {
  let size = output_size - 1;
  let r_function = CStr::from_ptr(function).to_str().unwrap();
  match r_function {
    "screenshot" => {
      // Take Steam Screenshot
      let mut enigo = Enigo::new();
      enigo.key_click(Key::F12);
    },
    "setup" => {
      // Setup Discord RPC
      STARTED = true;
      RPCM.lock().unwrap().start();
      // Save timestamp
      TIMESTAMP = SystemTime::now().duration_since(SystemTime::UNIX_EPOCH).unwrap().as_secs();
      let o = get_c("DiscordRPC started");
      strncpy(output, o, size);
    },
    _ => {
      let o = get_c("unknown func");
      strncpy(output, o, size);
    }
  }
}

#[no_mangle]
pub unsafe extern "C" fn RVExtensionArgs(output: *mut c_char, output_size: usize, function: *mut c_char, args: *mut *mut c_char, arg_count: usize) {
  let size = output_size - 1;
  let r_function = CStr::from_ptr(function).to_str().unwrap();
  match r_function {
    "update" => {
      // Update Discord RPC
      if arg_count != 4 {
        let o = get_c(format!("Unexpected arg count: {}", arg_count));
        strncpy(output, o, size);
      } else {
        let argv: &[*mut c_char; 4] = std::mem::transmute(args);
        let details: String = CStr::from_ptr(argv[0]).to_str().unwrap().replace("\"","");
        let state  : String = CStr::from_ptr(argv[1]).to_str().unwrap().replace("\"","");
        let image  : String = CStr::from_ptr(argv[2]).to_str().unwrap().replace("\"","");
        let text   : String = CStr::from_ptr(argv[3]).to_str().unwrap().replace("\"","");
        if STARTED {
          RPCM.lock().unwrap().set_activity(|a| a
            .details(details)
            .state(state)
            .assets(|ass| ass
              .large_image(image)
              .large_text(text)
            )
            .timestamps(|time| time
              .start(TIMESTAMP)
            )
          );
          let o = get_c("Updated");
          strncpy(output, o, size);
        } else {
          let o = get_c("DiscordRPC not started");
          strncpy(output, o, size);
        }
      }
    },
    "browser" => {
      // Open a URL in the browser
      if arg_count != 1 {
        let o = get_c(format!("Unexpected arg count: {}", arg_count));
        strncpy(output, o, size);
      } else {
        let argv: &[*mut c_char; 1] = std::mem::transmute(args);
        let url: String = CStr::from_ptr(argv[0]).to_str().unwrap().replace("\"","");
        webbrowser::open(&url);
      }
    },
    _ => {
      let o = get_c("unknown func");
      strncpy(output, o, size);
    }
  }
}
