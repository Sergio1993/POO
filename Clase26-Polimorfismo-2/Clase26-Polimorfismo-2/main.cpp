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
/*
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
*/

class Animal{
public:
    Animal(){
        cout << "CONSTRUCTOR DE ANIMAL" << endl;
    }
    
    virtual ~Animal(){
        cout << "DESTRUCTOR DE ANIMAL" << endl;
    }
};

class Wolf : public Animal{
public:
    Wolf(){
        cout << "CONSTRUCTOR DE WOLF" << endl;
    }
    ~Wolf(){
        cout << "DESTRUCTOR DE WOLF" << endl;
    }
};

class OtherAnimal : public Animal{
public:
    OtherAnimal(){
        cout << "CONSTRUCTOR DE OTHER ANIMAL" << endl;
    }
    ~OtherAnimal(){
        cout << "DESTRUCTOR DE OTHER ANIMAL" << endl;
    }
};

class Fish : public Animal{
public:
    Fish(){
        cout << "CONSTRUCTOR DE FISH" << endl;
    }
    virtual ~Fish(){
        cout << "DESTRUCTOR DE FISH" << endl;
    }
};

class GoldFish : public Fish{
public:
    GoldFish(){
        cout << "CONSTRUCTOR DE GOLDFISH" << endl;
    }
    ~GoldFish(){
        cout << "DESTRUCTOR DE GOLDFISH" << endl;
    }
};

int main(int argc,const char* argv[])
{
    Animal *ani[] = {new Animal, new Wolf, new OtherAnimal, new Fish, new GoldFish};
    
    
    for (int i = 0; i < 5; i++){
        delete ani[i];
    }

    
    return 0;
}