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
        // Realizar la acción correspondiente
        switch (opcion) {
            case 1:{
                
                std::cout << "Opción 1 seleccionada (Crear actividad)\n";

                std::string id;
                std::cout<<"Introduce el ID de la actividad: ";
                std::cin >> id;
                
                Actividad a = Actividad(id);
                
                if(actividades.CrearActividad(a) == true){
                    actividades.escribirActividadesEnArchivo("fichmenu.txt");
                }else{
                    printf("La actividad ya existe\n");
                }


            }
                break;
            case 2:
                // Lógica para eliminar actividad
                // Puedes llamar a la función EliminarActividad de tu clase Actividades
                // actividades.EliminarActividad(...);
                std::cout << "Opción 2 seleccionada (Eliminar actividad)\n";
                break;
            case 3:
                // Lógica para editar actividad
                // Puedes llamar a la función EditarActividad de tu clase Actividades
                // actividades.EditarActividad(...);
                std::cout << "Opción 3 seleccionada (Editar actividad)\n";
                break;
            case 4:
                
                std::cout << "Opción 4 seleccionada (Mostrar actividades)\n";
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
