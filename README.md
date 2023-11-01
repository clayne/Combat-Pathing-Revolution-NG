# Combat-Pathing-Revolution-NG
SKSE plugin that introduced modern action game combat pathing AI into skyrim.

- [SSE](https://www.nexusmods.com/skyrimspecialedition/mods/86950)
- [VR](https://www.nexusmods.com/skyrimspecialedition/mods/87895)
- [NG]()

## Requirements

- [CMake](https://cmake.org/)
  - Download latest version from [Here](https://cmake.org/download/) and add to your 'path' during installation
- [PowerShell](https://github.com/PowerShell/PowerShell/releases/latest)
- [Vcpkg](https://github.com/microsoft/vcpkg)
  - Add the environment variable `VCPKG_ROOT` with the value as the path to the folder containing vcpkg
- [Visual Studio Community 2022](https://visualstudio.microsoft.com/)
  - Desktop development with C++
- [CommonLibNG](https://github.com/max-su-2019/CommonLibSSE/tree/NG)
  - see Building Through Cmake (cmake-gui) section below
- [DKUtil](https://github.com/gottyduke/DKUtil)
  - see Building Through Cmake (cmake-gui) section below

## User Requirements

- [Address Library for SKSE](https://www.nexusmods.com/skyrimspecialedition/mods/32444)
  - Needed for SSE/AE
- [VR Address Library for SKSEVR](https://www.nexusmods.com/skyrimspecialedition/mods/58101)
  - Needed for VR

## Building Through Cmake (cmake-gui)
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
# to update submodules to checked in build
git submodule update


### NG

```
cmake --preset ALL
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

# Animation Developers

[**Developer Guidelines**](https://github.com/max-su-2019/CombatPathingRevolution/blob/master/doc/en/Developers%20Guidelines%20of%20CPR.md)
