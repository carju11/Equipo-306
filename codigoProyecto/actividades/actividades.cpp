#include <iostream>
#include "actividades.h"

void crearActividad(std::vector<Actividad> &actividades, const std::string &archivoActividades) {
    std::string nombre, descripcion;

    std::cout << "\nCreación de actividad." << std::endl;
    std::cout << "Nombre de la actividad: ";
    std::cin >> nombre;
    std::cout << "Descripción de la actividad: ";
    std::cin >> descripcion;

    actividades.push_back(Actividad(nombre, descripcion));

    // Guardar la actividad en el archivo
    std::ofstream archivo(archivoActividades, std::ios::app);
    if (archivo.is_open()) {
        archivo << nombre << "," << descripcion << ",0\n";
        archivo.close();
        std::cout << "Actividad creada y guardada exitosamente." << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo de actividades." << std::endl;
    }
}

void preinscripcion(const std::string &archivoPreinscripciones) {
    std::cout << "\nPreinscripción (funcionalidad no disponible actualmente)." << std::endl;
}

void visualizarActividades(const std::string &archivoActividades) {
    std::cout << "\nVisualización de actividades." << std::endl;
    
    std::ifstream archivo(archivoActividades);
    if (archivo.is_open()) {
        std::string linea;
        while (std::getline(archivo, linea)) {
            std::istringstream ss(linea);
            std::string nombre, descripcion, activa_str;
            std::getline(ss, nombre, ',');
            std::getline(ss, descripcion, ',');
            std::getline(ss, activa_str, ',');

            bool activa = (activa_str == "1");
            std::cout << "Nombre: " << nombre << std::endl;
            std::cout << "Descripción: " << descripcion << std::endl;
            std::cout << "Estado: " << (activa ? "Activa" : "Inactiva") << std::endl;
            std::cout << "-------------------------" << std::endl;
        }

        archivo.close();
    } else {
        std::cerr << "Error al abrir el archivo de actividades." << std::endl;
    }
}

void aportarDatosActividad(std::vector<Actividad> &actividades, const std::string &archivoActividades) {
    std::cout << "\nAportar datos a la actividad y activarlos (funcionalidad no disponible actualmente)." << std::endl;
}

void enviarMail() {
    std::cout << "\nMailing (funcionalidad no disponible actualmente)." << std::endl;
}
