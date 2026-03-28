# Modern C Project

C23 표준과 Clang 컴파일러를 사용하는 모던 C 프로젝트 템플릿입니다.

## 프로젝트 구조

```
modern_c_project/
├── CMakeLists.txt          # CMake 빌드 설정
├── .clang-format           # 코드 포맷 설정 (LLVM 기반)
├── .clang-tidy             # 정적 분석 설정
├── include/
│   ├── math_utils.h        # 수학 유틸리티 헤더
│   └── string_utils.h      # 문자열 유틸리티 헤더
├── src/
│   ├── main.c              # 메인 엔트리포인트
│   ├── math_utils.c        # add, sub, mul 함수
│   └── string_utils.c      # str_len, str_eq 함수
└── tests/
    ├── test_math.c          # 수학 유틸리티 테스트 (Criterion)
    └── test_string.c        # 문자열 유틸리티 테스트 (Criterion)
```

## 사전 요구사항

### Ubuntu Linux

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

## 빌드

```bash
$ mkdir build && cd build
$ cmake ..
$ make
```

`scan-build`를 사용한 정적 분석 빌드:

```bash
$ cd build
$ scan-build cmake --build .
```

## 실행

```bash
$ ./build/modern_c
Add: 7
String equal: 1
```

## 테스트

[Criterion](https://github.com/Snaipe/Criterion) 프레임워크를 사용합니다.

```bash
$ ./build/run_tests
[====] Running 4 tests
[====] Synthesis: Tested: 4 | Passing: 4 | Failing: 0 | Crashed: 0
```

## 코드 포맷

```bash
$ clang-format -i src/*.c include/*.h tests/*.c
```

## 정적 분석

```bash
$ clang-tidy src/*.c -- -Iinclude -std=c23
```
