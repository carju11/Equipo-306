#ifndef ACTIVIDADES_H
#define ACTIVIDADES_H

#include <iostream>
#include <vector>
#include <list>

// Definición de la clase Actividad
class Actividad {
public:
    // Miembros públicos
    std::string nombre;
    std::string descripcion;
    bool activa;

    // Constructor
    Actividad(std::string n, std::string desc) : nombre(n), descripcion(desc), activa(false) {}

    // Funciones públicas
    void activar() {
        activa = true;
    }

    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Descripción: " << descripcion << std::endl;
        std::cout << "Estado: " << (activa ? "Activa" : "Inactiva") << std::endl;
    }
    void crearActividad(std::vector<Actividad> &actividades, const std::string &archivoActividades);
    void preinscripcion(const std::string &archivoPreinscripciones);
    void visualizarActividades(const std::string &archivoActividades);
    void aportarDatosActividad(std::vector<Actividad> &actividades, const std::string &archivoActividades);
    void enviarMail();

private:
    // Miembros privados (sección privada)
    // Puedes agregar miembros privados aquí si es necesario
};

#endif
