//
//  Cono.h
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase09_Interfaces___h__cpp__Cono__
#define __Clase09_Interfaces___h__cpp__Cono__

#include <iostream>
using namespace std;


class Cono{
private:
    //datos miembros
    double radio;
    double altura;
    
public:
    //constructores
    Cono();
    Cono(double, double);
    
    //metodos accesores
    void setRadio(double);
    double getRadio() const;
    
    void setAltura(double);
    double getAltura() const;
    
    //funciones especificas
    int areaCono(double, double, double);
    void volumenCono(double, double);
    
    //Destructor
    ~Cono();
};

#endif /* defined(__Clase09_Interfaces___h__cpp__Cono__) */
