#[macro_use]
extern crate lazy_static;

extern crate libc;
use libc::c_char;
use libc::strncpy;

use std::ffi::CStr;
use std::ffi::CString;
use std::sync::Mutex;
use std::time::SystemTime;

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
pub unsafe extern "C" fn RVExtensionArgs(output: *mut c_char, output_size: usize, function: *mut c_char, args: *mut *mut c_char, arg_count: usize) {
    let size = output_size - 1;
    let r_function = CStr::from_ptr(function).to_str().unwrap();
    match r_function {
        _ => {
            let o = get_c("unknown func");
            strncpy(output, o, size);
        }
    }
}
