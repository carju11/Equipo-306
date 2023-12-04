#include "actividades.h"



bool Actividades::CrearActividad(Actividad a){

    for(auto o: vectorActividades_){
        if(o.GetId() == a.GetId()){
            return false;//ya existe una actividad con ese id
        }
    }
    vectorActividades_.push_back(a);
    total_++;
    return true;
  
}


bool Actividades::EliminarActividad(Actividad a) {
    auto o = vectorActividades_.begin();
    bool existe = false;

    while (o != vectorActividades_.end()) {
        if (o->GetId() == a.GetId()) {
            existe = true;
            o = vectorActividades_.erase(o);  // La función erase devuelve el iterador siguiente al eliminado
            total_--;
        } else {
            ++o;  // Mover al siguiente elemento solo si no se eliminó
        }
    }

    return existe;
}
void Actividades::leerActividadesDesdeArchivo(const std::string& nombreArchivo) {
    std::vector<Actividad> actividades;
    std::ifstream archivo(nombreArchivo);

    if (!archivo) {
        std::cerr << "Error al abrir el archivo " << nombreArchivo << std::endl;
        // Puedes manejar el error de la manera que prefieras
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::istringstream iss(linea);
        std::string id, titulo, descripcion;
        int aforo;
        std::vector<std::string> idPonentes, idAsistentes;

        std::getline(iss, id, ',');
        std::getline(iss, titulo, ',');
        iss >> aforo;
        iss.ignore();  // Ignorar la coma después del entero
        std::getline(iss, descripcion, ',');

        std::string ponente;
        while (std::getline(iss, ponente, ',')) {
            idPonentes.push_back(ponente);
        }

        std::string asistente;
        while (std::getline(iss, asistente, ',')) {
            idAsistentes.push_back(asistente);
        }

        // Crear una instancia de la clase Actividad y agregarla al vector
        actividades.emplace_back(id, titulo, aforo, descripcion, idPonentes, idAsistentes);
    }

    vectorActividades_ = actividades;
}

void Actividades::escribirActividadesEnArchivo(const std::string& nombreArchivo) {
    std::ofstream archivo(nombreArchivo);
    if (!archivo) {
        std::cerr << "Error al abrir el archivo " << nombreArchivo << " para escritura" << std::endl;
        // Puedes manejar el error de la manera que prefieras
        return;
    }

    for (auto actividad : vectorActividades_) {
        archivo << actividad.GetId() << ',' << actividad.GetTitulo() << ',' << actividad.GetAforo() << ',' << actividad.GetDescripcion();

        for (auto ponente : actividad.GetIdPonentes()) {
            archivo << ',' << ponente;
        }

        for (auto asistentes : actividad.GetIdAsistentes()) {
            archivo << ',' << asistentes;
        }

        archivo << '\n';
    }
}


