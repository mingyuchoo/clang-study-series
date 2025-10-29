cmake_minimum_required(VERSION 3.20)
project(ModernCProject C)

# Clang 설정
set(CMAKE_C_COMPILER clang)
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic -Werror -O2")

# include 디렉토리 추가
include_directories(${PROJECT_SOURCE_DIR}/include)

# 소스 파일 자동 검색
file(GLOB SRC_FILES src/*.c)

# 실행 파일
add_executable(modern_c ${SRC_FILES})

# Criterion (unit test) 설치 확인
find_package(PkgConfig REQUIRED)
pkg_check_modules(CRITERION REQUIRED criterion)

# 테스트 빌드
file(GLOB TEST_SRC tests/*.c)
add_executable(run_tests ${TEST_SRC} ${SRC_FILES})
target_include_directories(run_tests PRIVATE ${CRITERION_INCLUDE_DIRS})
target_link_libraries(run_tests ${CRITERION_LIBRARIES})
