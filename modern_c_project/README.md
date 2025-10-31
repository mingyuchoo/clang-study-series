# Modern C Project

## Prerequsite

## Ubuntu Linux

```bash
$ sudo apt update
$ sudo apt install -y build-essential pkg-config
$ sudo apt install -y clang clang-format clang-tidy clang-tools lldb llvm llvm-dev
$ sudo apt install -y cmake
$ sudo apt install -y libcriterion-dev
$ sudo apt install -y ninja-build bear valgrind cppcheck
```

### Fedora Linux

```bash
$ sudo dnf groupinstall "Development Tools" "Development Libraries"
$ sudo dnf install clang llvm llvm-devel lldb clang-tools-extra
$ sudo dnf install cmake
$ sudo dnf install criterion criterion-devel
$ sudo dnf install bear ninja valgrind
```

## Code Format

```bash
$ clang-format -i src/*.c include/*.h test/*.c
```

## Static Analysis

```bash
$ clang-tidy src/*.c -- Iinclude -std=c23
```

## Build

```bash
$ cd modern_c_project
$ mkdir build && cd build
$ cmake ..
$ make
$ ./modern_c
$ ./run_tests
```

or

```bash
scan-build cmake --build .
```

## Run

```bash
$ ./modern_c
Add: 7
String equal: 1
```

## Test

```bash
$ ./run_tests
[====] Running 4 tests
[====] Synthesis: Tested: 4 | Passing: 4 | Failing: 0 | Crashed: 0
```
