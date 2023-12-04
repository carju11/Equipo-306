
#ifndef ACTIVIDAD_H
#define ACTIVIDAD_H
#include <iostream>
#include <string>
#include <vector>
class Actividad {
private:
    std::string id_;
    std::string titulo_;
    int aforo_;
    std::string descripcion_;
    std::vector<std::string> idPonentes_;
    std::vector<std::string> idAsistentes_;

public:
    Actividad(
        std::string id,
        std::string titulo = "empty",
        int aforo = 0,
        std::string descripcion = "empty",
        std::vector<std::string> idPonentes = {"empty"},
        std::vector<std::string> idAsistentes = {"empty"}
    );

    // Getters
    std::string GetId() { return id_; }
    std::string GetTitulo() { return titulo_; }
    int GetAforo() { return aforo_; }
    std::string GetDescripcion() { return descripcion_; }
    std::vector<std::string> GetIdPonentes() { return idPonentes_; }
    std::vector<std::string> GetIdAsistentes() { return idAsistentes_; }

    // Setters
    void SetId(std::string id) { id_ = id; }
    void SetTitulo(std::string titulo) { titulo_ = titulo; }
    void SetAforo(int aforo) { aforo_ = aforo; }
    void SetDescripcion(std::string descripcion) { descripcion_ = descripcion; }
    void SetIdPonentes(std::vector<std::string> idPonentes) { idPonentes_ = idPonentes; }
    void SetIdAsistentes(std::vector<std::string> idAsistentes) { idAsistentes_ = idAsistentes; }
};

#endif