//
//  main.cpp
//  Clas12-ForLoop
//
//  Created by Sergio Pita on 10/2/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //Escribir un programa que escriba todos los múltiplos de 3 del número 1 al 3000
    /*
    for (int i = 0; i<3000; i++){
        if (i%3 ==0) {
            cout << "multiplos de 3: " << i<< endl;
        }
        
    }*/
    
    //Crea un programa qu escriba dos columnas de números, en la primera se colocan los números del1 al 100, en la segunda los números del 100 al 1
    /*
    for (int i = 0, j = 100; i < 100, j > 0; i++, j--){
        cout << i << " - "<< j << endl;
    }
    */
    
    //Crea un programa en C++ que lea un número entero y positivo y que escriba tres columnas. La primera cuenta desde uno hasta el número escrito contando de uno en uno; la segunda columna cuenta de dos en dos y la tercera de tres en tres.
    /*
        int numero = 0;
        cout << "escribe un numero" << endl;
        cin >> numero;
    
        for (int i = 1, j = 1, k = 1; i < numero, j < numero, k < numero; i++, j=j+2, k=k+3){
            cout << i << " - " << j << " - " << k << endl;
        }
    */
    //Crea el programa tablaMultiplicar que escriba la tabla de multiplicar del número 1 al número 15
    /*
    for (int i=1; i<=15; i++) {
        cout << "TABLA DEL " << i << endl;
        for (int j=1; j<= 15; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    */
    /*
    int numero;
    int suma;
    for (int i = 0; i < 10; i++){
        cout << "escribe un numero" << endl;
        cin >> numero;
        suma += numero;
    }
    cout << "la suma de los 10 numeros es: " << suma << endl;
     
    */
    /*
     SWITCH
    int numero;
    int media;
    //int resultado;
    bool positivo = false;
    
    do{
    cout << "escribe un numero, zero para terminar" << endl;
    cin >> numero;
    media += numero;
        
    switch (media) {
        case 0:
            cout << "NO AVERAGE" << endl;
            break;
        case 'zero':
            cout << media << endl;
            break;
    }
    }while(positivo);
     */
    /*
    int numero = 0;
    int contador = 0;
    double resultado = 0.0;
    double media = 0.0;
    bool positivo = false;
    
    do{
        cout << "escribe un numero, 0 para terminar" << endl;
        cin >> numero;
        
        if (numero > 0){
            contador++;
            positivo = true;
            media += numero;
            resultado = media/contador;
        }else if (numero == 0){
            if(resultado == 0){
                cout << "NO AVERAGE" << endl;
                exit(0);
            }else{
                cout << resultado << endl;
                exit(1);
            }
        }
        else{
            cout << "ERROR" << endl;
            continue;
        }
        
    }while(positivo);
     */
    /*
    int numero;
    
    cout << "escribe un numero" << endl;
    cin >> numero;
    
    for(int i = 0; i<numero; i++)
    {
        for(int j = 0;j < numero-i; j++){
            cout <<"*";
        }
        cout << "\n";
    }
    
    */
    /*
    int f, c;

    for( f = 2; f <= 8; f++)
    {
        for( c = 1; c <= (8-f) ; c++)
        {
            cout<<" ";
        }
        for(c = 2; c <= (f*2-1) ; c++)
        { 
            cout<<"#";
        } 
        cout<<endl; 
    } 
    cout<<endl;
    */
    return 0;
    

}
