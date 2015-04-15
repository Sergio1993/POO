//
//  Cubo.h
//  Clase09-Interfaces _.h_.cpp
//
//  Created by Sergio Pita on 21/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase09_Interfaces___h__cpp__Cubo__
#define __Clase09_Interfaces___h__cpp__Cubo__

#include <iostream>
using namespace std;

class Cubo{
    
private:
    //datos miembros
    int base;
    int altura;
    
public:
    //constructores
    Cubo();
    Cubo(int, int);
    
    //metodos accesores
    void setBase(int);
    int getBase() const;
    
    void setAltura(int);
    int getAltura() const;
    
    //funciones especificas
    int areaCubo(int);
    void volumenCubo(int);
    
    //Destructor
    ~Cubo();
};
#endif /* defined(__Clase09_Interfaces___h__cpp__Cubo__) */
