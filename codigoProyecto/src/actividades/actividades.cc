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
bool Actividades::EditarActividad(Actividad a){
    
    std::vector <Actividad>::iterator o;
    bool existe = false;
    for(o = vectorActividades_.begin() ; o != vectorActividades_.end(); o++){
        if((*o).GetId() == a.GetId()){
            (*o).SetAforo(a.GetAforo());
            (*o).SetDescripcion(a.GetDescripcion());
            (*o).SetIdAsistentes(a.GetIdAsistentes());
            (*o).SetIdPonentes(a.GetIdPonentes());

            existe = true;
            break;
        }
    }
    return existe;
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
void Actividades::leerActividadesDesdeArchivo() {
    std::vector<Actividad> actividades;
    std::ifstream archivo("fichmenu.txt");

    if (!archivo) {
        std::cerr << "Error al abrir el archivo " << "fichmenu.txt" << std::endl;
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

    for(auto o: vectorActividades_){
          std::cout << "Datos de la Actividad:" << std::endl;
        std::cout << "----------------------" << std::endl;
        std::cout << "ID: " << o.GetId() << std::endl;
        std::cout << "Título: " << o.GetTitulo() << std::endl;
        std::cout << "Aforo: " << o.GetAforo() << std::endl;
        std::cout << "Descripción: " << o.GetDescripcion() << std::endl;

        std::cout << "ID Ponentes: ";
        for (auto idPonente : o.GetIdPonentes()) {
            std::cout << idPonente << " ";
        }
        std::cout << std::endl;

        std::cout << "ID Asistentes: ";
        for (auto idAsistente : o.GetIdAsistentes()) {
            std::cout << idAsistente << " ";
        }
        std::cout << std::endl;

        std::cout << "----------------------" << std::endl;
    }
}

void Actividades::escribirActividadesEnArchivo() {
    std::ofstream archivo("fichmenu.txt");
    if (!archivo) {
        std::cerr << "Error al abrir el archivo " << "fichmenu.txt" << " para escritura" << std::endl;
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


void Actividades::actualizarActividadesEnArchivo(){
    std::ofstream archivo("fichmenu.txt", std::ios::out | std::ios::trunc);

    if (!archivo) {
        std::cerr << "Error al abrir el archivo " << "fichmenu.txt" << " para escritura" << std::endl;
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