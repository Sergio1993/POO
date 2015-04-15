//
//  Cilindro.h
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase09_Interfaces___h__cpp__Cilindro__
#define __Clase09_Interfaces___h__cpp__Cilindro__

#include <iostream>
using namespace std;

class Cilindro{
private:
    //datos miembros
    double radio;
    double altura;
public:
    //constructores
    Cilindro();
    Cilindro(double, double);
    
    //metodos accesores
    void setRadio(double);
    double getRadio() const;
    
    void setAltura(double);
    double getAltura() const;
    
    //funciones especificas
    double areaCilindro(double, double);
    void volumenCilindro(double, double);
    
    //Destructor
    ~Cilindro();
};

#endif /* defined(__Clase09_Interfaces___h__cpp__Cilindro__) */
