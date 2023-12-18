# En src/menu/CMakeLists.txt
add_library(menu menu-main.cc)
target_link_libraries(menu PUBLIC actividad actividades)
target_include_directories(menu PUBLIC ${CMAKE_CURRENT_LIST_DIR})

# Agrega el ejecutable menu-main
add_executable(menu-main menu-main.cc)
target_link_libraries(menu-main PUBLIC menu)

# Copia fichmenu.txt al directorio de construcción
configure_file(fichmenu.txt ${CMAKE_CURRENT_BINARY_DIR}/fichmenu.txt COPYONLY)
