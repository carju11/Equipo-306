#ifndef ACTIVIDADES_H
#define ACTIVIDADES_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "actividad.h"

class Actividades{
    private:
        std::vector<Actividad> vectorActividades_;
        int total_; // NUMERO TOTAL DE ACTIVIDADES
    public:
        Actividades(){
           total_ = 0;
        }

        //SETTERS
        void SetTotal(int total){total_ = total;}
        void SetVectorActividades(std::vector<Actividad> vectorActividades){vectorActividades_ = vectorActividades;}
        //GETTERS
        int GetTotal(){ return total_;}
        std::vector<Actividad> SetVectorActividades(){return vectorActividades_;}

        //FUNCIONES

        bool CrearActividad(Actividad a);
        bool EliminarActividad(Actividad a);
        bool EditarActividad(Actividad a);
        //bool EditarActividad(Actividad a); es crearActividad pero obligando a rellenar todos los campos de actividad
        void leerActividadesDesdeArchivo();
        void escribirActividadesEnArchivo();
        void escribirActividadesEnConsola();
        void actualizarActividadesEnArchivo();
        
};

#endif