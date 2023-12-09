#include <iostream>
#include "actividad.h"
#include "actividades.h"

int main() {
    Actividades actividades;

    int opcion;
    do {
        // Mostrar el menú
        std::cout << "Menu:\n";
        std::cout << "1. Crear actividad\n";
        std::cout << "2. Eliminar actividad\n";
        std::cout << "3. Editar actividad\n";
        std::cout << "4. Mostrar actividades\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opción (1-5): ";
        // Leer la opción del usuario
        std::cin >> opcion;
        std::string id;
        Actividad a = Actividad("0");
        // Realizar la acción correspondiente
        switch (opcion) {
            case 1:{
                
                std::cout << "Opción 1 seleccionada (Crear actividad)\n";

                std::cout<<"Introduce el ID de la actividad: ";
                std::cin >> id;
                
                a = Actividad(id);
            
                if(actividades.CrearActividad(a) == true){
                    actividades.escribirActividadesEnArchivo();
                }else{
                    std::cout<<"Ya existe un actividad con ese id\n"<<std::endl;
                }


            }
                break;
            case 2:
            std::cout << "Opción 2 seleccionada (Eliminar actividad)\n";
            std::cout << "Introduzca el id de la actividad que desea eliminar:\n"<<std::endl;
            std::cin >> id;

            a = Actividad(id);
                if(actividades.EliminarActividad(a) == true){
                    actividades.actualizarActividadesEnArchivo();
                }else{
                    std::cout<<"El id de la actividad no existe\n"<<std::endl;
                }
    
                break;
            case 3:
                
                std::cout << "Opción 3 seleccionada (Editar actividad)\n";
                int aforo;
                std::string descripcion;
                
                std::cout << "Introduce el ID de la actividad\n";
                std::cin >> id;
                a = Actividad(id);
                if(actividades.EditarActividad(a) == true){
                    std::cout << "Se ha encontrado la actividad id: "<< id <<"\n";
                    std::cout <<"Introduce el aforo de la actividad:\n";
                    std::cin >> ""
                }else{
                    std::cout<< "No existe un actividad con ese ID\n";
                }
                
                break;
            case 4:
                
                std::cout << "Opción 4 seleccionada (Mostrar actividades)\n";
                actividades.leerActividadesDesdeArchivo(); 
                break;
            case 5:
                std::cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opción no válida. Inténtelo de nuevo.\n";
                break;
        }
    } while (opcion != 5);

    return 0;
}
