//
//  PuntoPantalla.h
//  Clase10-clasesDeClases-struct
//
//  Created by Sergio Pita on 3/2/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase10_clasesDeClases_struct__PuntoPantalla__
#define __Clase10_clasesDeClases_struct__PuntoPantalla__

#include <stdio.h>
#include <iostream>
using namespace std;

struct PuntoPantalla{
private:
    Coordinate coordenada;
    string color;
    
public:
    
    //metodos accesores
    void setColor(string);
    string getColor() const;
    
    void setEjex(int);
    int getEjex() const;
    
    void setEjey(int);
    int getEjey() const;
    
    
    //destructor
    ~PuntoPantalla();
};
#endif /* defined(__Clase10_clasesDeClases_struct__PuntoPantalla__) */
