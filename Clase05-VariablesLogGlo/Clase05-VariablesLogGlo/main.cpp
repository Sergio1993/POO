//
//  main.cpp
//  VariablesLocGlo
//
//  Created by Sergio Pita on 23/12/14.
//  Copyright (c) 2014 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;
//TAREA 0
//5 variables globales

int varEnteraGlobal = 10;
string varCadenaGlobal = "Sergio";
double varDoubleGlobal = 2.3;
char varCaracterGlobal = 'a';
long varLargaGlobal = 435543;

/*
 int cambiarEntero(int numero) {
 return varEnteraGlobal+numero;
 
 }
 
 void cambiarCaracter(char caracter) {
 varCaracterGlobal = caracter;
 cout << varCaracterGlobal << endl;
 }
 
 void cambiarCadena(string cadena) {
 varCadenaGlobal = cadena;
 cout << varCadenaGlobal << endl;
 
 }
 
 double cambiarDouble(double numeroDouble){
 varDoubleGlobal = numeroDouble;
 return varDoubleGlobal;
 }
 
 void cambiarLong(long numeroLong){
 varLargaGlobal = numeroLong;
 cout << varLargaGlobal << endl;
 }
 
 
 int main(int argc, const char * argv[]) {
 
 cout << cambiarEntero(12) << endl;
 cambiarCaracter('b');
 cambiarCadena("Pepe");
 cambiarDouble(2.222);
 cambiarLong(25432453);
 
 return 0;
 }
 */

//Tarea 1
/*
 void sobreescribeVar (int varGlobalToLocal) {
 varEnteraGlobal = varGlobalToLocal;
 cout << varGlobalToLocal << endl;
 }
 
 int main(int argc, const char * argv[]) {
 
 sobreescribeVar(56);
 
 return 0;
 }
 */

//Tarea 2
/*
 float media (float numero1, float numero2){
 return (numero1+numero2)/2;
 }
 
 int main(int argc, const char * argv[]) {
 
 cout << media(23, 34) << endl;
 
 return 0;
 }
 */

//Tarea 3
/*
 void hacerHistoria (string nombre, string apellido, string lugar){
 cout << "habia un lugar en la mancha donde estaba " << nombre << " cuyo apellido es " << apellido << " y vive en " << lugar << endl;
 }
 int main(int argc, const char * argv[]) {
 string nombre, apellido, lugar;
 
 cout << "Introduce tu nombre: ";
 cin >> nombre;
 cout << "Introduce tu apellido: ";
 cin >> apellido;
 cout << "Itroduce un lugar: ";
 cin >> lugar;
 hacerHistoria(nombre, apellido, lugar);
 
 return 0;
 
 }
 
 */
//Tarea 4
/*
 Crea una función que reciba un número, este debe ser del 1 al 10, si el número pasado por parámetro es mayor que 10 ó menor que 0, la función terminará y sacará un texto de “Error número incorrecto”, devuelve el -1 en ese caso.
 
 Si el número está bien, simplemente que imprima si está suspenso o aprobado.*/

void compruebaNumero(int numero) {
    if (numero < 1 || numero > 10){
        cout << "Error número incorrecto" << endl;
        numero = -1;
    }else if (numero < 5){
        cout << "Has suspendido" << endl;
    }else{
        cout << "Has aprobado" << endl;
    }
}
int main(int argc, const char * argv[]) {
    int nota;
    
    cout << "dime tu nota"<<endl;
    cin >> nota;
    compruebaNumero(nota);
    
    return 0;
    
}