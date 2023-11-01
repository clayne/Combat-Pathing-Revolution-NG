# Combat-Pathing-Revolution-NG
SKSE plugin that introduced modern action game combat pathing AI into skyrim.

- [SSE](https://www.nexusmods.com/skyrimspecialedition/mods/86950)
- [VR](https://www.nexusmods.com/skyrimspecialedition/mods/87895)
- [NG]()

## Requirements

- [Git](https://git-scm.com/)
  - Download latest version from [Here](https://git-scm.com/downloads)
- [CMake](https://cmake.org/)
  - Download latest version from [Here](https://cmake.org/download/) and add to your `path` during installation
- [PowerShell](https://github.com/PowerShell/PowerShell/releases/latest)
- [Vcpkg](https://github.com/microsoft/vcpkg)
  - Add the environment variable `VCPKG_ROOT` with the value as the path to the folder containing vcpkg
- [Visual Studio Community 2022](https://visualstudio.microsoft.com/)
  - Desktop development with C++
- [CommonLibNG](https://github.com/max-su-2019/CommonLibSSE/tree/NG)
  - see `Building` and `Building Through Cmake (cmake-gui)` section below
- [DKUtil](https://github.com/gottyduke/DKUtil)
  - see `Building` and `Building Through Cmake (cmake-gui)` section below

## User Requirements

- [Address Library for SKSE](https://www.nexusmods.com/skyrimspecialedition/mods/32444)
  - Needed for SSE/AE
- [VR Address Library for SKSEVR](https://www.nexusmods.com/skyrimspecialedition/mods/58101)
  - Needed for VR

## Building 
At the location of your choice, open terminal (or) cmd (or)Powershell and enter
```
git clone https://github.com/max-su-2019/CombatPathingRevolution
```
```
cd CombatPathingRevolution
```
```
git submodule add https://github.com/gottyduke/DKUtil.git extern/DKUtil
```
```
git submodule update -f --init
```
## Using Cmake (cmake-gui)
Now open Cmake (cmake-gui) application.
- In `where is the source code : ` , open the project directory (or) in this case the `CombatPathingRevolution` directory
- In `Where to build the binaries : ` , open the project directory and create a new folder called `build` directory. Select the `build` directory
- Select either `Debug` or `Release` in the `Preset : ` tab
- Click `Configure` and select either `Ninja` or `Ninja Multi-Config` as Generator
- Click `Finish` and wait for the following Error
```
CMake Error at CMakeLists.txt:6 (project):
  The CMAKE_CXX_COMPILER:

    cl.exe

  is not a full path and was not found in the PATH.

  Tell CMake where to find the compiler by setting either the environment
  variable "CXX" or the CMake cache entry CMAKE_CXX_COMPILER to the full path
  to the compiler, or to the compiler name if it is in the PATH.
```
- Now go to `File` menu option and click `Delete Cache`
- Then Click `Configure` and select the latest Visual Studio Generator
- Click `Finish`
- After configuration is done and you get the message `Configuring done`, don't forget to click `Generate`n
- optionally, to open the project, click `Open Project`

## NG

```
cmake --preset Release
cmake --build build --config Release
```

## License

[MIT](LICENSE)

## Credits

- [Maxsu](https://www.nexusmods.com/skyrimspecialedition/users/47103898)([GitHub](https://github.com/max-su-2019)) for original mod
- Fenix for original RE work and source codes from his combat AI.
- Dropkicker for helped writing the assembly hook codes.
- [Dtry](https://www.nexusmods.com/skyrimspecialedition/users/77140323)([GitHub](https://github.com/D7ry)) for sharing the source codes from payload interpreter.
- Duffb, chaos for helped me test the plugin during early development.
- [alandtse](https://github.com/alandtse) VR port
- [Skyrim Scripting](https://github.com/SkyrimScriptinghttps://github.com/SkyrimScripting)for the Youtube Tutorials and the SKSE Templates

# Animation Developers

[**Developer Guidelines**](https://github.com/max-su-2019/CombatPathingRevolution/blob/master/doc/en/Developers%20Guidelines%20of%20CPR.md)
