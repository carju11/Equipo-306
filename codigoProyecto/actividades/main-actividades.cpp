#include <iostream>
#include <fstream>
#include <vector>

#include "actividades.h"


// Funciones prototipo


int main() {
    std::vector<Actividad> actividades;

    const std::string archivoActividades = "actividades.txt";
    const std::string archivoPreinscripciones = "preinscripciones.txt";

    int opcion;

    do {
        // Menú principal
        std::cout << "\n*** Menú ***" << std::endl;
        std::cout << "1. Creación de actividad." << std::endl;
        std::cout << "2. Preinscripción." << std::endl;
        std::cout << "3. Visualización de actividades." << std::endl;
        std::cout << "4. Aportar datos a la actividad y activarlos." << std::endl;
        std::cout << "5. Mailing." << std::endl;
        std::cout << "0. Salir." << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                Actividad::crearActividad(actividades, archivoActividades);
                break;
            case 2:
                Actividad::preinscripcion(archivoPreinscripciones);
                break;
            case 3:
                Actividad::visualizarActividades(archivoActividades);
                break;
            case 4:
                Actividad::aportarDatosActividad(actividades, archivoActividades);
                break;
            case 5:
                Actividad::enviarMail();
                break;
            case 0:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }

    } while (opcion != 0);

    return 0;
}

