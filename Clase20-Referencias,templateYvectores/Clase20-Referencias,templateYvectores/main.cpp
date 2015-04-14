//
//  main.cpp
//  Clase20-Referencias,templateYvectores
//
//  Created by Sergio Pita on 7/4/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

template <typename type> type cuadrado(type numero)
{
    return numero * numero;
}

int main(int argc, const char * argv[]) {
    
    //TAREA 0
    cout << cuadrado<float>(4.5) << endl;
    
    cout << cuadrado<int>(5) << endl;
    
    cout << cuadrado<double>(5.5) << endl;
    
    //TAREA 1
    //CREACION DE VECTOR
    vector<int> myVector;
    
    //ASIGNACION DE VALORES AL VECTOR
    myVector.push_back(3);
    myVector.push_back(900);
    myVector.push_back(28);
    
    //PRIMER ELEMENTO
    cout << myVector.front() << endl;
    
    //ULTIMO ELEMENTO
    cout << myVector.back() << endl;
    
    //TAMAÑO DEL VECTOR
    cout << myVector.size() << endl;
    
    //Utilizando un for, agrega los valores 0, 1 y 2.
    for (int i = 0; i<3; i++) {
        myVector.push_back(i);
    }
    
    cout << myVector.size() << endl;
    
    //ELEMENTO 3
    cout << myVector.at(3) << endl;
    
    //ELIMINAR ELEMENTO 3
    myVector.erase(myVector.begin() + 2);
    
    cout << myVector.size() << endl;
    
    //VER VECTOR
    for (int i = 0; i<myVector.size(); i++){
        cout << myVector[i] << ", ";
    }
    
    cout << endl;
    
    return 0;
}
