# GTest include code for fetch content over the internet 
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main gmock_main)
# End GTest include code

add_library(actividades actividades.cc actividades.h)
target_link_libraries(actividades PUBLIC actividad)
target_include_directories(actividades PUBLIC ${CMAKE_CURRENT_LIST_DIR})
add_executable(actividades-main actividades-main.cc)
target_link_libraries(actividades-main PUBLIC actividades)
