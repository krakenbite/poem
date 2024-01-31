# Poem

This is an exemplary project setup for a C++ project. It shows how to use package management under C++, how to test
under C++ with GTest, how to use clang-tidy for formatting, linting and static code analysis and how to use CMake to
organize and automate the whole build.
As it is currently only a skeleton for a project, no real functionality is implemented. Code will follow soon.

In the long run, this project shall be a Python Package Manager.

## Development

### Required Tools

Command line tools:
- cmake
- vcpkg
- ctest
- clang
- clang-tidy

VSCode Plugins:
- C/C++ extension
- CMake/CMake Tools extension
- vcpkg
- CodeLLDB

### Build

#### Requirement

To be able to successfully build the project, vcpkg **must** be configured properly in order to be able to download
all necessary dependencies. Also, a special variable called `VCPKG_ROOT` **must** be present to be able to run cmake
successfully. `VCPKG_ROOT` should point to the root location of the vcpkg installation. Normally, it should reside
under `~/vcpkg`.

Furthermore, clang-tidy **must** be present to successfully build the project. clang-tidy is a static code analysis
tool for linting and formatting C++ code.

When everything is in place, run `cmake .` in the project root directory to build the project.
It tells cmake to configure your environment in order to be able to build the project in the next step.
Next, run `cmake --build build` to build the project or use the cmake plugin of vscode to run the build. CLion users
can run the build like as usual.

CMake builds two executables. One for the project itself and another one for testing the project.
After building the project, one can go to the `build` directory and type `ctest` into the command line to execute the
tests. CLion users can execute the `All CTest` target, which automatically opens the testing view.