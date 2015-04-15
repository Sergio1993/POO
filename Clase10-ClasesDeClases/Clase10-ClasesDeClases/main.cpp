//
//  main.cpp
//  Clase10-ClasesDeClases
//
//  Created by Sergio Pita on 28/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include "Coordinate.h"
#include "PuntoPantalla.h"
#include "Profesor.h"
#include "JefeDeDepartamento.h"
using namespace std;

int main(int argc, const char * argv[]) {
    PuntoPantalla punto(2,3,"rojo");
    
    PuntoPantalla punto2;
    punto2.setEjex(2);
    punto2.setEjey(3);
    punto2.setColor("Azul");
    
    cout << punto.getEjex() << punto.getEjey() << punto.getColor() << endl;
    cout << punto2.getEjex() << punto2.getEjey() << punto2.getColor() << endl;
    
    
    JefeDeDepartamento jefe;
    jefe.profesor.setNombre("Sergio");
    jefe.profesor.setApellido("Pita");
    jefe.profesor.setEdad(12);
    jefe.profesor.setAsignatura("Matematicas");
    jefe.setDepartamento("Departamento Matematicas");
    
    cout << "Nombre: " << jefe.profesor.getNombre() << " Apellido: " << jefe.profesor.getApellido()
    << " Edad: " << jefe.profesor.getEdad() << " Asignatura: " << jefe.profesor.getAsignatura() <<
    " Departamento: "<< jefe.getDepartamento() << endl;
    
    
    return 0;
}
