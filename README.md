# KBM

<p align="center">
    <img src="https://raw.githubusercontent.com/Katalam/KBM/master/logo.png" width="480">
</p>

<p align="center">
    <a href="https://github.com/Katalam/KBM/releases/latest">
        <img src="https://img.shields.io/badge/Version-1.1.5-blue.svg?style=flat-square" alt="KBM Version">
    </a>
    <a href="https://github.com/Katalam/KBM/issues">
        <img src="https://img.shields.io/github/issues-raw/Katalam/KBM.svg?style=flat-square&label=Issues" alt="KBM Issues">
    </a>
    <a href="https://github.com/Katalam/KBM/releases">
        <img src="https://img.shields.io/github/downloads/Katalam/KBM/total.svg?style=flat-square&label=Downloads" alt="KBM Downloads">
    </a>
    <a href="CONTRIBUTING.md">
        <img src="https://img.shields.io/badge/Contributor%20Covenant-v1.4%20adopted-ff69b4.svg" alt="Contributor Covenant">
    </a>
</p>

<p align="center">
    <sup><strong>Requires the latest version of <a href="https://github.com/CBATeam/CBA_A3/releases">CBA A3</a>.<br/>
    Visit me on <a href="https://discord.gg/HbA93HK">Discord</a></strong></sup>
</p>

Sometimes you wanna have small enhancements or change another mod. If you build missions for Arma you will realize that having things in a mod config is way better then using templates for missions.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.


## Deployment

The build process is base on the [HEMTT build process](https://synixebrett.github.io/HEMTT/#/), so you can follow the steps there. Basically the following is needed:
+ correctly setup project drive (P: drive)
+ download/clone KBM GitHub repo
+ right-click in the root folder and open power shell
+ you can build by executing ```.\hemtt build``` from the tools folder
+ you have to setup the data link with admin cmd: mklink /J "A:\SteamLibrary\steamapps\common\Arma 3\z\KBM" "P:\KBM"
+ for testing include your mod by adding ```-mod=z\KBM``` as start parameter

## Built With

[CBA_A3](https://github.com/CBATeam/CBA_A3) - Community Based Addons for Arma 3 needs to be installed for MACRO usage<br/>
HEMTT is a CLI tool that must be called from the root of your project. HEMTT needs to be placed in the project root and called with `./hemtt` on Linux or `hemtt.exe` on Windows. You can install HEMTT system wide on Windows by using `setup.exe` in the download.

Below is just a showcase, read the [documentation](https://synixebrett.github.io/HEMTT) to learn about more features and reasonings.

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Issues

Please, use my [Issue Tracker](https://github.com/Katalam/templates/issues) to report a bug, propose a feature, or suggest changes to the existing ones.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags).

## Authors

- **Katalam** - *Initial work*

<!---
See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.
-->

## License

This project is licensed under the GPLv3 License - see the [LICENSE](LICENSE) file for details
