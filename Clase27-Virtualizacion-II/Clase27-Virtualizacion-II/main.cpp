//
//  main.cpp
//  Clase27-Virtualizacion-II
//
//  Created by Sergio Pita on 2/6/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include<iostream>

using namespace std;
//TAREA 0
//un tipo de datos con una determinada estructura, más un conjunto de operaciones para manejar esos datos

//Los instrumentos, tenemos una serie de datos generales para todos los instrumentos y ademas una serie de datos especificos para cada instrumento.

//TAREA 1
// info() y area() serian los ADT
class Figura {
public:
    Figura() {}
    
    virtual~Figura(){}
    virtual void info() {}
    virtual float area() {return-1;}
};

class Rectangulo :public Figura {
public:
    Rectangulo(){cout<<"Construyendo Rectangulo\n";}
    ~Rectangulo(){cout <<"Destruyendo Rectangulo\n";}
    
    void info() {cout <<"Objeto Rectangulo\n";}
    
    float area() {return 2*3;}
};

class Triangulo :public Figura {
public:
    Triangulo(){cout<<"Construyendo Triangulo\n";}
    ~Triangulo(){cout <<"Destruyendo Triangulo\n";}
    
    void info() {cout <<"Objeto Triangulo\n";}
    
    float area() {return 3*4;}
};

int main(int argc,const char* argv[])
{
    /*
     Figura *arrayFiguras[3]; arrayFiguras[0] = new Triangulo; arrayFiguras[1] = new Rectangulo;
    arrayFiguras[2] = new Triangulo;
    
    for(int i=0; i<3; i++) {
        arrayFiguras[i]->info();
    }
    
    for(int i=0; i<3; i++) {
        delete arrayFiguras[i];
    }
    */
    
    Figura *fig = new Rectangulo;
    Rectangulo *realRect = dynamic_cast<Rectangulo*>(fig);
    
    Figura *rect = new Rectangulo;
    Figura *realFig = dynamic_cast<Figura*>(rect);
    
    Triangulo *trig = new Triangulo;
    Rectangulo *realTrig = dynamic_cast<Rectangulo*>(trig);
    
    return 0;
}
