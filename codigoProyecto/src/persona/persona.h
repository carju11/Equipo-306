#ifndef PERSONAS_H
#define PERSONAS_H
#include <stdlib.h>
#include <iostream>
#include <string>

class Persona{
    private:

        std::string usuario_; // es el identificador 
        std::string nombreCompleto_;
        int prioridad_; //1 para director y organizador ó 0 para preinscritos
    public:

    //Getters
        std::string GetNombreCompleto(){return nombreCompleto_;}
        std::string GetUsuario(){return usuario_;}
        int GetPrioridad(){return prioridad_;}
    //Setters
        void SetNombreCompleto(std::string nombreCompleto){nombreCompleto_ = nombreCompleto;}
        void SetUsuario(std::string usuario){usuario_ = usuario;}
        bool SetPriorioridad(int prioridad);
    //Constructor
        Persona(std::string usuario, std::string nombreCompleto = "empty", int prioridad = 0);
};  
#endif