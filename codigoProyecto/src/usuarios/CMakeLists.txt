add_library(usuarios usuarios.cc usuarios.h)
target_link_libraries(usuarios PUBLIC persona actividades)
target_include_directories(usuarios PUBLIC ${CMAKE_CURRENT_LIST_DIR})