//
//  Piramide.h
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase09_Interfaces___h__cpp__Piramide__
#define __Clase09_Interfaces___h__cpp__Piramide__

#include <iostream>
using namespace std;

class Piramide{
private:
    //datos miembros
    int base;
    int altura;
    int arista;
    
public:
    //constructores
    Piramide();
    Piramide(int, int, int);
    
    //metodos accesores
    void setBase(int);
    int getBase() const;
    
    void setAltura(int);
    int getAltura() const;
    
    void setArista(int);
    int getArista() const;
    
    //funciones especificas
    int areaPiramide(int, int);
    void volumenPiramide(int, int);
    
    //Destructor
    ~Piramide();
};

#endif /* defined(__Clase09_Interfaces___h__cpp__Piramide__) */
