//
//  main.cpp
//  Funciones_Sobrecarga_recursión
//
//  Created by Sergio Pita on 2/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;
//Tarea 1

//Escribe una función recursiva que dado un número imprima este y decremente el mismo, hasta llegar a 0.
/*
 void myFuncion (int num) {
 if (num == 0){
 return;
 }
 else {
 cout << "Número es: " << num << endl;
 myFuncion(--num);
 return;
 }
 }
 int main(int argc, const char * argv[]) {
 
 myFuncion(5);
 return 0;
 }
 */
//Tarea 2
//Escribe seis funciones que tengan el nombre imprimirDato, sin tipo de retorno.
/*
 void imprimirDato(int num) {
 cout << "Entero" << endl;
 cout << num << endl;
 }
 void imprimirDato(float num) {
 cout << "float" << endl;
 cout << num << endl;
 }
 void imprimirDato(double num) {
 cout << "double" << endl;
 cout << num << endl;
 }
 void imprimirDato(string num) {
 cout << "sting" << endl;
 cout << num << endl;
 }
 void imprimirDato(char num) {
 cout << "char" << endl;
 cout << num << endl;
 }
 int main(int argc, const char * argv[]) {
 float numero = 4.0;
 imprimirDato(4);
 imprimirDato(numero);
 imprimirDato(4.0);
 imprimirDato("4");
 imprimirDato('4');
 return 0;
 }
 */

//Tarea 3
//Escribe una función recursiva que dado un número imprima su cuadrado hasta llegar a 1024.

void myFuncion (int numero){
    if (numero >= 1024){
        return;
    }
    else {
        cout << "Cuadrado: " << numero << endl;
        myFuncion(numero*numero);
        return;
    }
}
int main(int argc, const char * argv[]) {
    myFuncion(5);
    return 0;
}

//Tarea 4
//Escribe una función recursiva que calcule la suma de todos los números de 1 a n, donde n es pasado como parámetro.
/*
 int suma(int num)
 {
 if(num == 0)
 {
 return 0;
 }
 else
 {
 return num + suma(num - 1);
 }
 }
 int main(int argc, const char * argv[]) {
 cout << suma(8) << endl;
 return 0;
 }
 */

