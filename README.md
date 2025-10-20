# learn_templete

A C++ project demonstrating template usage with a simple max function implementation.

## Project Structure

```
learn_templete/
├── main.cpp          # Main source file with template implementation
├── CMakeLists.txt    # CMake configuration file
├── build.sh          # Build script (Linux/macOS)
├── .gitignore        # Git ignore file
└── README.md         # This file
```

## Building the Project

### Method 1: Using the Build Script (Recommended)

```bash
./build.sh
```

### Method 2: Manual Build

```bash
# Create build directory
mkdir -p build
cd build

# Configure with CMake
cmake ..

# Build the project
cmake --build .
```

### Method 3: Debug Build

```bash
mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build .
```

### Method 4: Release Build

```bash
mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```

## Running the Program

After building, run the executable from the build directory:

```bash
cd build
./learn_templete
```

Expected output:
```
max(a,b): 2
max(t1,t2): 20
max(t1,t2): 20
```

## Code Overview

The project demonstrates:

1. **Function Templates**: A generic `max()` function that works with any comparable type
2. **Custom Types**: A `Test` struct with overloaded `operator>` for custom comparison
3. **Template Instantiation**: Both implicit and explicit template instantiation

### Key Features

- **C++17 Standard**: Uses modern C++ features
- **Template Metaprogramming**: Demonstrates generic programming concepts
- **Operator Overloading**: Shows how to make custom types work with templates
- **Type Deduction**: Illustrates both automatic and explicit template argument specification

## Dependencies

- CMake 3.10 or higher
- C++17 compatible compiler (GCC 7+, Clang 5+, MSVC 2017+)

## Clean Build

To clean the build directory:

```bash
rm -rf build
```

Or use the build script again (it will recreate the build directory).