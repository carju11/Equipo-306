#include <iostream>
#include "actividad.h"
#include "actividades.h"
#include "usuarios.h"

int main() {
    Usuarios usuarios;

    usuarios.actualizarVectorPersonas();
    std::string usuario;
    std::cout << "****************Inicio de sesion****************\n" ;
    std::cout << "Usuario: "<<std::endl;
    std::cin >> usuario;

    if(usuarios.comprobarPersona(usuario) == false){
        std::cout << "¡Error! No existe ese usuario\n" <<std::endl;
        return 0;
    }else{
        Actividades actividades;
        if(usuarios.prioridadUsuario(usuario) == 1){ 
        //entonces es el director o el organizador

        int opcion;
            do {
            // Mostrar el menú
            std::cout << "Menu:\n";
            std::cout << "1. Crear actividad\n";
            std::cout << "2. Eliminar actividad\n";
            std::cout << "3. Editar actividad\n";
            std::cout << "4. Mostrar actividades\n";
            std::cout << "5. Salir\n";
            std::cout << "Seleccione una opción (1-5): ";
            // Leer la opción del usuario
            std::cin >> opcion;
            std::string id;
            std::string titulo;
            int aforo;
            std::string descripcion;
            Actividad a = Actividad("0");
            // Realizar la acción correspondiente
            switch (opcion) {
            case 1:
                
                std::cout << "Opción 1 seleccionada (Crear actividad)\n";

                std::cout<<"Introduce el ID de la actividad: ";
                std::cin >> id;
                
                a = Actividad(id);
            
                if(actividades.CrearActividad(a) == true){
                    actividades.escribirActividadesEnArchivo();
                    std::cout << "¡Actividad creada con exito!\n" <<std::endl;
                }else{
                    std::cout<<"¡Error! (Ya existe un actividad con ese id)\n"<<std::endl;
                }


            
                break;
            case 2:
                std::cout << "Opción 2 seleccionada (Eliminar actividad)\n";
                std::cout << "Introduzca el id de la actividad que desea eliminar:\n"<<std::endl;
                std::cin >> id;

                a = Actividad(id);
                if(actividades.EliminarActividad(a) == true){
                    actividades.actualizarActividadesEnArchivo();
                    std::cout<<"¡Actividad eliminada con exito!\n"<<std::endl;
                }else{
                    std::cout<<"¡Error! (El ID de la actividad no existe)\n"<<std::endl;
                }
    
                break;
            case 3:
                
                std::cout << "Opción 3 seleccionada (Editar actividad)\n";
                
                std::cout << "Introduce el ID de la actividad";
                std::cin >> id;
                a = Actividad(id);
                if(actividades.CrearActividad(a) == false){
                    std::cout << "Se ha encontrado la actividad id: "<< id <<"\n";
                    std::cout <<"Introduce el titulo: ";
                    std::cin.ignore(); // Limpiar el buffer antes de getline
                    std::getline(std::cin, titulo);
                    std::cout << "Introduce el aforo de la actividad: ";
                    std::cin >> aforo;
                    std::cout << "Introduce la descripcion de la actividad: ";
                    std::cin.ignore();
                    std::getline(std::cin,descripcion);
                    a = Actividad(id,titulo,aforo,descripcion);
                    
                    actividades.EditarActividad(a);
                    actividades.actualizarActividadesEnArchivo();

                    std::cout<<"¡Actividad editada con exito!\n"<<std::endl;
                
                }else{
                    std::cout<< "¡Error! (No existe un actividad con ese ID)\n";
                
                }
                
                break;
            case 4:
                actividades.ficheroAVector();
                std::cout << "Opción 4 seleccionada (Mostrar actividades)\n";
                actividades.visualizarActividades(); 
                std::cout << "\n" << std::endl;
                break;
            case 5:
                std::cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "¡Error! (Opción no válida). Inténtelo de nuevo.\n";
                break;
                }
            } while (opcion != 5);
        }else{
            std::string id;
            int opcion;
            do{
            std::cout << "Menu:\n";
            std::cout << "1. Mostrar actividades\n";
            std::cout << "2. Preincribirse en actividad\n";
            std::cout << "3. Mostrar actividades preincritas\n";
            std::cout << "4. Salir\n";
            std::cout << "Seleccione una opción (1-4): ";
            // Leer la opción del usuario
            std::cin >> opcion;

            switch (opcion)
            {
            case 1:
                std::cout << "Opcion 1 seleccionada (Mostrar actividades)\n";

                actividades.ficheroAVector();
                actividades.visualizarActividades(); 
                std::cout << "\n" << std::endl;
                break;
            case 2:
                actividades.ficheroAVector();
                std::cout <<"Opcion 2 seleccionada (Preinscribirse a una actividad))\n";
                std::cout << "Introduce el ID de la actividad a la que quieres inscribirte:"<<std::endl;
                std::cin >> id;
                if(actividades.existeActividad(id) == true){
                    actividades.anadirPreinscrito(usuario,id);
                    actividades.actualizarActividadesEnArchivo();
                }else{
                    std::cout << "¡Error! No existe una actividad con ese id\n";
                }
                break;
            case 3:
                std::cout <<"Opcion 3 seleccionada (Mostrar actividades inscritas)\n";
                actividades.actividadesUsuario(usuario);
                break;
            case 4:
                std::cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                break;
            }
            }while(opcion != 4);
        }
    }
    

    return 0;
}
