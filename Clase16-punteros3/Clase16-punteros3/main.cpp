//
//  main.cpp
//  Clase16-punteros3
//
//  Created by Sergio Pita on 13/3/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

class Coche{
public:

    string marca;
    string modelo;
    int cv;
    
    void decirCilindrada(int cilin){
        cout << "WUAU!!! tu cilindrada es de " << cilin << endl;
    }
    
    Coche(){}
    Coche(string mar, string mo, int cvs){
        marca = mar;
        modelo = mo;
        cv = cvs;
    }
};

int main(int argc, const char * argv[]) {
    //TAREA 0
    int *punteroInt = new int;
    float *punteroFloat = new float;
    char *punteroChar = new char;
    string *punteroString = new string;
    
    *punteroInt = 10;
    *punteroChar = 'a';
    *punteroFloat = 3.3;
    *punteroString = "Hola";
    
    cout << *punteroInt << endl;
    cout << *punteroFloat << endl;
    cout << *punteroChar << endl;
    cout << *punteroString << endl;
    
    delete punteroInt;
    delete punteroChar;
    delete punteroFloat;
    delete punteroString;
    
    //Tarea 1
    int *pMes = new int;
    
    cout << "dame un valor entre 1 y 12" << endl;
    cin >> *pMes;
    
    switch (*pMes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "El mes tiene 31 dias" << endl;
            break;
        case 2:
            cout << "El mes tiene 28 dias" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "El mes tiene 30 dias" << endl;
            break;
        default:
            cout << "ERROR, numero no comprendido entre 1 y 12" << endl;
            break;
    }
    
    delete pMes;
    
    //TAREA 2
    Coche coche1;
    Coche *coche2 = new Coche("Opel", "astra", 200);
    
    string Coche::*puntero;
    int Coche::*otroPuntero;
    
    puntero = &Coche::marca;
    cout << coche2->*puntero << endl;
    
    puntero  = &Coche::modelo;
    cout << coche2->*puntero << endl;
    
    otroPuntero = &Coche::cv;
    cout << coche2->*otroPuntero << endl;
    
    coche2->decirCilindrada(200);
    
    delete coche2;
    
    //TAREA 3
    int x;
    int *y;
    int **z;
    
    x = 10;
    y = &x;
    z = &y;

    cout << **z << endl;
    
    return 0;
}
