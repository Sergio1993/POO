//
//  main.cpp
//  Clase26-Polimorfismo-2
//
//  Created by Sergio Pita on 24/5/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include<iostream>

using namespace std;

//TAREA 0
//Simplemente tenemos que poner virtual el destructor de Figura (clase padre) de esta forma, primero se destruirá la clase hijo y después la clase padre.
class Figura {
public:
    Figura(){cout<<"Construyendo Figura\n";}
    virtual ~Figura(){cout<<"Destruyendo Figura\n";}
    
    virtual void info() {cout<<"Objeto Figura\n";}
};

class Rectangulo :public Figura{
public:
    Rectangulo(){cout<<"Construyendo Rectangulo\n";}
    ~Rectangulo(){cout<<"Destruyendo Rectangulo\n";}
    
    void info() {cout<<"Objeto Rectangulo\n";}
    
    long bigData;
    
};

int main(int argc,const char* argv[])
{
    Figura *ptrFigura =new Rectangulo;
    
    delete ptrFigura;
    
    return 0;
}