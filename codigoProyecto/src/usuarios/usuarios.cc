
#include "usuarios.h"
#include <filesystem>

bool Usuarios::comprobarPersona(std::string usuario){

    bool existe = false;

    for(auto o: personas_){
        if(o.GetUsuario() == usuario) existe = true;
    }

    return existe;
}

void Usuarios::actualizarVectorPersonas() {
    std::vector<Persona> usuarios;

    std::ifstream archivo("fichusuario.txt");
    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo." << std::endl;
       
        std::filesystem::path currentPath = std::filesystem::current_path();
        std::cout << "Directorio actual: " << currentPath << std::endl;

        return;
    }

    std::string usuario, nombreCompleto;
    int prioridad;

    while (archivo >> usuario >> std::ws && std::getline(archivo, nombreCompleto) >> prioridad >> std::ws) {
        Persona info(usuario, nombreCompleto, prioridad);
        usuarios.push_back(info);
    }

    personas_ = usuarios; // Vector actualizado
}


int Usuarios::prioridadUsuario(std::string usuario){

    for(auto o: personas_){
        if(o.GetUsuario() == usuario){
            std::cout<<o.GetPrioridad()<<std::endl;
            return o.GetPrioridad();
        }
    }
    return 0;
}
