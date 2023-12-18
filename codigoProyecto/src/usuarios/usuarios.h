#ifndef USUARIOS_H
#define USUARIOS_H
#include "persona.h"
#include "actividades.h"
#include <iostream>
#include <string>
#include <vector>

class Usuarios{
    private:
        std::vector <Persona> personas_;
    public:
        
        //funciones
        bool comprobarPersona(std::string usuario); //Comprobara si existe el usuario dentro del vector de personas
        void actualizarVectorPersonas();//Recorrera el fichero colocando la prioridad de tal y el nombre completo asi como el nomrbe de usuario
        int prioridadUsuario(std::string usuario);

};
#endif