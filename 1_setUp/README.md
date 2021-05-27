# Steps to run C++ on Windows

1. Install [Visual Studio Code](https://code.visualstudio.com/download).
2. Install [C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) and [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner).
3. Install [Mingw-W64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download) and select architecture as x86_64 in the installer.
4. Add mingw-64 bin folder path to Windows PATH environment variable. For detailed steps refer this [link](https://code.visualstudio.com/docs/cpp/config-mingw).
5. Run `addTwo.cpp` in the current GitHub folder using Code Runner play button in VS Code. All the inputs will be taken from `input.txt` file and the output will be stored in `output.txt` file from the root directory of this repository.
6. If there are no errors the set up is completed successfully.
