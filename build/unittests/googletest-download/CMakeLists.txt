cmake_minimum_required(VERSION 2.8.2)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           master
  SOURCE_DIR        "D:/ALL CODING PROGRAMS/ALL C++ Programs in VS Code/katas/build/unittests/googletest-src"
  BINARY_DIR        "D:/ALL CODING PROGRAMS/ALL C++ Programs in VS Code/katas/build/unittests/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
