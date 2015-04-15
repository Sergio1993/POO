//
//  Profesor.h
//  Clase10-ClasesDeClases
//
//  Created by Sergio Pita on 28/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase10_ClasesDeClases__Profesor__
#define __Clase10_ClasesDeClases__Profesor__

#include <iostream>
using namespace std;

class Profesor{
private:
    string nombre;
    string apellido;
    string asignatura;
    int edad;
public:
    
    Profesor();
    Profesor(string, string, string, int);
    ~Profesor();
    
    void setNombre(string);
    string getNombre()const;
    
    void setApellido(string);
    string getApellido() const;
    
    void setAsignatura(string);
    string getAsignatura() const;
    
    void setEdad(int);
    int getEdad() const;
    
};

#endif /* defined(__Clase10_ClasesDeClases__Profesor__) */
