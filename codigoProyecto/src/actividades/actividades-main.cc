#include "actividades.h"
#include "actividad.h"
#include <cassert>

void testCrearCorrectamente1(){

    bool prueba = true;

    Actividad a1 = Actividad("1");

    Actividades A;

    if(A.CrearActividad(a1) == false) prueba = false;
    if(A.CrearActividad(a1) == true) prueba = false;
    
    assert(prueba == true);
}

void testCrearCorrectamente2(){

    bool prueba = true;

    Actividad a1 = Actividad("1");

    Actividades A;

    if(A.CrearActividad(a1) == false) prueba = false;
    
    assert(prueba == true);
}

void testEliminarCorrectamente1(){

    bool prueba = true;

    Actividad a1 = Actividad("1");

    Actividades A;

    A.CrearActividad(a1);
    if(A.EliminarActividad(a1) == false) prueba = false;
    

    assert(prueba == true);
}

void testEliminarCorrectamente2(){

    bool prueba = true;

    Actividad a1 = Actividad("1");

    Actividades A;

    A.CrearActividad(a1);
    if(A.EliminarActividad(a1) == false) prueba = false;
    if(A.EliminarActividad(a1) == true) prueba = false;
    
    assert(prueba == true);

}



int main(){
    testCrearCorrectamente1();
    testCrearCorrectamente2();
    testEliminarCorrectamente1();
    testEliminarCorrectamente2();
    return 0;

}