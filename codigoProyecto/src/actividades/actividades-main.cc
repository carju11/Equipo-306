#include "actividades.h"
#include "actividad.h"
//#include "gtest/gtest.h"
#include <cassert>
void testCrearCorrectamente1() { //Commprueba que se crea correctamente una acitvidad, 
                                 //y que no se pueden crear dos con el mismo ID
    Actividad a1 = Actividad("1");
    Actividades A;

    bool prueba = A.CrearActividad(a1);
    assert(prueba == true);

    prueba = A.CrearActividad(a1);
    assert(prueba == false);
}

void testCrearCorrectamente2() { //Comprueba que se cree correctamente una actividad
    Actividad a1 = Actividad("1");
    Actividades A;

    bool prueba = A.CrearActividad(a1);
    assert(prueba == true);
}

void testEliminarCorrectamente1() { //Comprueba que elimina correctamente
    Actividad a1 = Actividad("1");
    Actividades A;

    A.CrearActividad(a1);
    bool prueba = A.EliminarActividad(a1);
    assert(prueba == true);
}

void testEliminarCorrectamente2() { //Comprueba que no puede eliminar una acitivdad que no existe
    Actividad a1 = Actividad("1");
    Actividades A;

    A.CrearActividad(a1);
    bool prueba = A.EliminarActividad(a1);
    assert(prueba == true);

    prueba = A.EliminarActividad(a1);
    assert(prueba == false);
}

void testEditar1(){//Comprueba qué devuelve en funcion de si existe la actividad o no
    Actividad a1 = Actividad("1");
    Actividades A;

    A.CrearActividad(a1);
    bool prueba = A.EditarActividad(a1);
    assert(prueba == true);

    A.EliminarActividad(a1);
    prueba = A.EditarActividad(a1);
    assert(prueba == false);
}

void testEditar2(){//Comprueba si edita correctamente los campos
    Actividades A;
    std::string id = "1";
    int aforo = 50;
    std::string titulo = "Titulo1";
    std::string descripcion = "Descripcion1";
    Actividad a1(id,titulo,aforo,descripcion);

    A.CrearActividad(a1);

    A.EditarActividad(a1);

    assert(a1.GetId() == id);
    assert(a1.GetAforo() == aforo);
    assert(a1.GetTitulo() == titulo);
    assert(a1.GetDescripcion() == descripcion);

}

// TEST(Actividades, CrearActividad) {
//     Actividades a;
//     Actividad a1("11XX"), a2("22XX"), a3("33XX");
//     a.CrearActividad(a1);
//     a.CrearActividad(a2);
//     a.CrearActividad(a3);
//     Actividad a4("44XX"), a5("55XX");
//     a.CrearActividad(a4);
//     a.CrearActividad(a5);
//     EXPECT_EQ(5, a.GetSize());  // Corregido el nombre de la variable
// }

int main(int argc, char** argv) {
    // testing::InitGoogleTest(&argc, argv);
    void testCrearCorrectamente1();
    void testCrearCorrectamente2();
    void testEliminarCorrectamente1();
    void testEliminarCorrectamente2();
    void testEditar1();
    return 0;
}
