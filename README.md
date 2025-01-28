# C++ Unit Test Template

This repository is a template for setting up a C++ project with unit tests using Google Test framework, configured to run in GitHub Codespaces.

## Getting Started

1. Click the "Use this template" button to create a new repository from this template.
2. Open the new repository in a Codespace.
3. The development environment will be set up automatically.

## Running the Program

To run the main program:
```sh
cmake -S . -B build
cmake --build build
./build/main
```

To run the tests:
```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build
```