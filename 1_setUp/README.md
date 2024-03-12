# Steps to run C++ on Windows

1. Install [Visual Studio Code](https://code.visualstudio.com/download).
2. Install [C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) and [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner).
3. Install mingw-64 and add the bin folder path to Windows PATH environment variable. For detailed steps refer this [link](https://code.visualstudio.com/docs/cpp/config-mingw).
4. Run `addTwo.cpp` in the current GitHub folder using Code Runner play button in VS Code. All the inputs will be taken from `input.txt` file and the output will be stored in `output.txt` file from the root directory of this repository. `output.txt` file will be compared with `expected_output.txt` file so that whether the code has passed will be displayed.
5. If there are no errors the set up is completed successfully.
