#include "actividad.h"

Actividad::Actividad(
        std::string id,
        std::string titulo, 
        int aforo,
        std::string descripcion ,
        std::vector<std::string> idPonentes,                                                                                                                                            
        std::vector<std::string> idAsistentes ){

        id_ = id;
        aforo_ = aforo; 
        titulo_ = titulo;
        descripcion_ = descripcion;
        idPonentes_ = idPonentes;
        idAsistentes_ = idAsistentes;

        }