//
//  main.cpp
//  Clase28-Virtualizacion-III
//
//  Created by Sergio Pita on 10/6/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

//TAREA 0

class Animal{
public:
    Animal(){ cout << "CONSTRUCTOR DE ANIMAL" << endl; }
    ~Animal(){ cout << "DESTRUCTOR DE ANIMAL" << endl; }

    virtual void info() = 0;
    virtual void edad() = 0;
    
    virtual void numPatas(int patas){ cout << "EL NUMERO DE PATAS ES: " << patas << endl;}
    virtual void peso(int peso){ cout << "EL PESO ES: " << peso << endl;}
    
};

class Mamifero : public Animal{
public:
    Mamifero(){cout << "CONSTRUCTOR DE MAMIFERO" << endl; }
    ~Mamifero(){ cout << "DESTRUCTOR DE MAMIFERO" << endl; }
    
    void info() = 0;
};

class Perro : public Mamifero{
public:
    Perro(){cout << "CONSTRUCTOR DE PERRO" << endl; }
    ~Perro(){ cout << "DESTRUCTOR DE PERRO" << endl; }
    
    //void info(){cout << "INFO DE PERRO" << endl;};
};

class Persona : public Mamifero{
public:
    Persona(){cout << "CONSTRUCTOR DE PERRO" << endl; }
    ~Persona(){ cout << "DESTRUCTOR DE PERRO" << endl; }
    
    void info() = 0;
};

int main(int argc, const char * argv[]) {
    
    Animal *ani = new Perro;
    
    delete ani;
    
    
    
    return 0;
}
