//
//  main.cpp
//  Clase13-Array
//
//  Created by Sergio Pita on 19/2/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
#define NUMERO_ARRAY 10
using namespace std;
//Tarea 5
/*
void funcionArray(int arg[], int numElementos){
    for (int i = 0; i < numElementos; i++){
        cout << arg[i] << " ";
    }
    cout << endl;
}*/
int main(int argc, const char * argv[]) {
    //Tarea 0
    //int arrayEnteros[5] = {1,2,3,4,5};
    
    //Tarea 1
    //char arrayChar[] = { 'H', 'o', 'l', 'a'};
    
    //Tarea 2
    //Crea un programa que pida al usuario que escriba 10 enteros de un array. El programa debe calcular e imprimir el número de enteros que son mayores que o igual a 10.
    /*
    int arrayInt [NUMERO_ARRAY];

    
    
    for (int i = 0; i< NUMERO_ARRAY; i++){
        cout << "escribe un numero" << endl;
        cin >> arrayInt[i];
        
    }
    
    cout << " LECTURA ARRAY " << endl;
    for (int i = 0; i< NUMERO_ARRAY; i++){
        if(arrayInt[i] >= 10)
            cout << arrayInt[i] << endl;
    }
    */
    //Tarea 3
    //Escriba un programa que pide al usuario que escriba 10 números enteros de una matriz y un entero V.
    //El programa debe buscar si V es la matriz de 10 enteros.
    //El programa escribe "V está en el array" o "V no está en el array".
    /*
    int v = 0;
    bool encontrado = false;
    int arrayInt [NUMERO_ARRAY];
    
    for (int i = 0; i< NUMERO_ARRAY; i++){
        cout << "escribe un numero para el array" << endl;
        cin >> arrayInt[i];
    }
    
    cout << "escribe el numero a buscar" << endl;
    cin >> v;
    
    for (int i = 0; i< NUMERO_ARRAY; i++){
        if (arrayInt[i] == v){
            encontrado = true;
            break;
        }else{
            encontrado = false;
        }
    }
    
    encontrado == true ? cout << "V está en el array" << endl : cout << "V no está en el array" << endl;
     */
    
    //Tarea 4
    //Escriba un programa que pide al usuario que escriba 10 números enteros de una matriz.
    //La salida debe programar el elemento más grande de la matriz,
    //y el índice en el que se encontró ese elemento.
    /*
    int arrayInt [NUMERO_ARRAY];
    int mayorNumero = 0, posicion = 0;
    
    for (int i = 0; i< NUMERO_ARRAY; i++){
        cout << "escribe un numero para el array" << endl;
        cin >> arrayInt[i];
        if(mayorNumero < arrayInt[i]){
            mayorNumero=arrayInt[i];
            posicion = i;
        }
    }
    cout << "El numero mayor del array es: " << mayorNumero << " y se encuentra en la posicion: " << posicion << endl;
    */
    
    //Tarea 5
    
    //Realiza una función que reciba un array y el tamaño de este array como parámetro e imprima todos los valores de este array.
    /*int arrayInt [] = {5,4,3,8,9,7,4,1};
    funcionArray(arrayInt, 8);*/
    
    //Tarea 6
    //Realiza un array que imprima lo siguiente, hazlo con un while:
    /*1 2 3 4 5 6
    1 2 3 4 5 6
    1 2 3 4 5 6*/
    /*
    int contador = 0;
    int arrayInt [] = {1,2,3,4,5,6};
    while (contador < 3){
        for (int i = 0; i < 6; i++){
            cout << arrayInt[i] << " ";
        }
        cout << endl;
        contador++;
    }
    */
    return 0;
}
