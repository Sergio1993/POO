//
//  main.cpp
//  Clase02-VariablesyConstantes
//
//  Created by Sergio Pita on 13/4/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;
//Constante definida
#define numeroConstante2=70;

int main() {
    //Constante declarada
    const int numeroConstante=50;
    
    //Crea 3 variables char, 3 short, 5 int, 3 long, 5 bool, 5 float, 3 double, 5 string.
    //3 variables caracteres
    char primeraLetra='a';
    char segundaLetra='b';
    char terceraLetra='c';
    
    //3 numeros short
    short numeroCortoUno=11232;
    short numeroCortoDos=2132;
    short numeroCortoTres=3231;
    
    //5 numeros enteros
    int numeroEnteroUno=1;
    int numeroEnteroDos=2;
    int numeroEnteroTres=3;
    int numeroEnteroCuatro=2;
    int numeroEnteroCinco=3;
    
    //3 numeros long
    long numeroLargoUno=1233142;
    long numeroLargoDos=1233;
    long numeroLargoTres=1233142342;
    
    //5 boolean
    bool aleatorioUno=true;
    bool aleatorioDos=false;
    bool aleatorioTres=true;
    bool aleatorioCuatro=true;
    bool aleatorioCinco=false;
    
    //5 float
    float numeroDecimalUno=1.45;
    float numeroDecimalDos=2.65;
    float numeroDecimalTres=3.45;
    float numeroDecimalCuatro=4.45;
    float numeroDecimalCinco=54.45;
    
    //5 double
    double decimalGrandeUno=3.234234;
    double decimalGrandeDos=4.234768;
    double decimalGrandetres=78.65789;
    double decimalGrandeCuatro=674.342;
    double decimalGrandeCinco=234.234;
    
    //5 string
    string primero="hola";
    string segundo="adios";
    string tercero="margarita";
    string cuarto="eusebio";
    string quinto="Miki";
    
    
    //contenido de las variable
    cout << "3 variables caracteres\n" << primeraLetra << "\n" << segundaLetra << "\n" << terceraLetra << "\n"<<endl;
    cout << "3 numeros short\n" << numeroCortoUno << "\n" << numeroCortoDos << "\n" << numeroCortoTres << "\n"<<endl;
    cout << "5 numeros enteros\n" << numeroEnteroUno << "\n" << numeroEnteroDos << "\n" << numeroEnteroTres << "\n" << numeroEnteroCuatro << "\n" << numeroEnteroCinco << "\n"<<endl;
    cout << "3 numeros long\n" << numeroLargoUno << "\n" << numeroLargoDos << "\n" << numeroLargoTres << "\n"<<endl;
    cout << "5 boolean\n" << aleatorioUno <<  "\n" << aleatorioDos << "\n" << aleatorioTres << "\n" << aleatorioCuatro << "\n" << aleatorioCinco << "\n"<<endl;
    cout << "5 float\n" << numeroDecimalUno << "\n" << numeroDecimalDos << "\n" << numeroDecimalTres << "\n" << numeroDecimalCuatro << "\n" << numeroDecimalCinco << "\n"<<endl;
    cout << "5 double\n" << decimalGrandeUno << "\n" << decimalGrandeDos << "\n" << decimalGrandetres << "\n" << decimalGrandeCuatro << "\n" << decimalGrandeCinco << "\n"<<endl;
    cout << "5 string\n" << primero << "\n" << segundo << "\n" << tercero << "\n" << cuarto << "\n" << quinto << "\n"<<endl;
    
    
    //espacio que ocupan las variables en la RAM
    cout << "3 variables caracteres\n" << sizeof(primeraLetra) << "\n" << sizeof(segundaLetra) << "\n" << sizeof(terceraLetra) << "\n"<<endl;
    cout << "3 numeros short\n" << sizeof(numeroCortoUno) << "\n" << sizeof(numeroCortoDos) << "\n" << sizeof(numeroCortoTres) << "\n"<<endl;
    cout << "5 numeros enteros\n" << sizeof(numeroEnteroUno) << "\n" << sizeof(numeroEnteroDos) << "\n" << sizeof(numeroEnteroTres) << "\n" <<
    sizeof(numeroEnteroCuatro)<< "\n" << sizeof(numeroEnteroCinco) << "\n"<<endl;
    cout << "3 numeros long\n" << sizeof(numeroLargoUno) << "\n" << sizeof(numeroLargoDos) << "\n" << sizeof(numeroLargoTres) << "\n"<<endl;
    cout << "5 boolean\n" << sizeof(aleatorioUno) <<  "\n" << sizeof(aleatorioDos) << "\n" << sizeof(aleatorioTres) << "\n" << sizeof(aleatorioCuatro) << "\n" << sizeof(aleatorioCinco) << "\n"<<endl;
    cout << "5 float\n" << sizeof(numeroDecimalUno) << "\n" << sizeof(numeroDecimalDos) << "\n" << sizeof(numeroDecimalTres) << "\n" <<
    sizeof(numeroDecimalCuatro) << "\n" << sizeof(numeroDecimalCinco) << "\n"<<endl;
    cout << "5 double\n" << sizeof(decimalGrandeUno) << "\n" << sizeof(decimalGrandeDos) << "\n" << sizeof(decimalGrandetres) << "\n" <<
    sizeof(decimalGrandeCuatro) << "\n" << sizeof(decimalGrandeCinco) << "\n"<<endl;
    cout << "5 string\n" << sizeof(primero) << "\n" << sizeof(segundo) << "\n" << sizeof(tercero) << "\n" << sizeof(cuarto) << "\n" << sizeof(quinto) << "\n"<<endl;
    
    //Imprimir en un sola linea
    cout << "Una sola linea\n" << "Mi variable entero 1 tiene un valor de: "<< sizeof(numeroEnteroUno) << " bytes\n";
}
