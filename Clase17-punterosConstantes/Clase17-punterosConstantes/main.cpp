//
//  main.cpp
//  Clase17-punterosConstantes
//
//  Created by Sergio Pita on 17/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

class Coche{
    
public:
    
    string marca;
    string modelo;
    
    Coche(){}
    Coche(string mar, string mod){
        this->marca = mar;
        this->modelo =mod;
    }
    
    void decirMarca(string m){
        cout << "la marca es " << m << endl;
    }
    
    static void haz_algo(string m)
    {
        cout << m << "METODO ESTATICO" << endl;
    }
    
    ~Coche(){}
};

class Moto{
public:
    string marca;
    string modelo;
    
    Moto(){}
    
    Moto(string ma, string mod){
        this->marca = ma;
        this->modelo = mod;
    }
    
    
    ~Moto(){}
    
    
};

class Barco{
public:
    string marca;
    string modelo;
    
    Barco(){}
    Barco(string m, string mo){
        this->marca = m;
        this->modelo = mo;
    }
    
    ~Barco(){}
};

int main(int argc, const char * argv[]) {
    /*
     TAREA 1
     - Un puntero constante
     - Un puntero de tipo constante
     - Un puntero constante de tipo constante
    */
    
    int *const pInt= new int;
    const int *const pInt2 = new int;
    int const *pInt3= new int;
    
    *pInt = 17;
    
    cout << *pInt << endl;
    cout << *pInt2 << endl;
    cout << *pInt3 << endl;
    
    delete pInt;
    delete pInt2;
    delete pInt3;
    
    Coche *coche = new Coche;
    coche->haz_algo("ALA!!! ");

    delete coche;
    
    //this->decirMarca("b");
    
    return 0;
}
