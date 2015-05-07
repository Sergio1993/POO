//
//  main.cpp
//  Funciones
//
//  Created by Sergio Pita on 18/12/14.
//  Copyright (c) 2014 Sergio Pita. All rights reserved.
//

#include <iostream>
using namespace std;

/*Tarea 0
 
 Escribe un programa en C++ que dado una variable edad, imprima un mensaje SI la persona es apta para beber alcohol.
 */

int main() {
    int edad = 20;
    string mayorEdad= edad > 18 ?  "Apta para beber" : "No apta para beber";
    cout << mayorEdad << endl;
    
    return 0;
}
/*
 Tarea 1
 
 Realiza una función basada en el ejercicio anterior, que imprima un mensaje SI la persona es apta para beber alcohol.
 
 (Puede que necesites el parámetro edad)
 
 */

void comprobarEdad(int edad){
    string mayorEdad= edad > 18 ?  "Apta para beber" : "No apta para beber";
    cout << mayorEdad << endl;
}

int main() {
    
    comprobarEdad(20);
    
    return 0;
}

/*
 Tarea 2
 
 Realiza cinco funciones, cada una de ellas debe imprimir un saludo en:
 
 Aleman
 Frances
 Italiano
 Portugués
 Polaco
 */

void saludarAleman(){
    cout << "halo" << endl;
}
void saludarFrances(){
    cout << "bonjour" << endl;
}
void saludarItaliano(){
    cout << "ciao" << endl;
}
void saludarPortugues(){
    cout << "olà" << endl;
}
void saludarPolaco(){
    cout << "cześć" << endl;
}


int main() {
    
    saludarAleman();
    saludarFrances();
    saludarItaliano();
    saludarPolaco();
    saludarPortugues();
    
    return 0;
}

/*
 Tarea 3
 
 Realiza una función que imprima los cinco mensajes del ejercicio anterior.
 */

void saludarMuchosIdiomas(){
    cout << "Saludar en aleman: halo" << endl;
    
    cout << "Saludar en Frances: bonjour" << endl;
    
    cout << "Saludar en Italiano: ciao" << endl;
    
    cout <<  "Saludar en portugues: olà" << endl;
    
    cout << "Saludar en Polaco: cześć" << endl;
}
int main() {
    
    saludarMuchosIdiomas();
    
    return 0;
}

/*
 Tarea 4
 
 Realiza una función que imprima el duplo de un número pasado como parámetro SI el resultado es mayor que 4.
 */

int duplo(int numero){
    int resultado= numero>4 ?  numero * 2 : 0;
    return resultado;
}
int main() {
    const int metodo = duplo(6);
    
    if (metodo == 0){
        
        cout << "Numero menor o igual que 4" << endl;
        
    }else{
        
        cout << metodo << endl;
    }
    
    return 0;
}

/*
 Tarea 5
 
 Realiza una función que calcule y devuelva la suma de dos números pasados como parámetros.
 */

int sumar(int numero1, int numero2){
    int sumaTotal = numero1 + numero2;
    return sumaTotal;
}
int main() {
    
    cout << sumar(2,3) << endl;
    
    return 0;
}

/*
 Tarea 6
 
 Realiza una función que calcule y devuelva la division real de dos números pasados como parámetros.
 */

int dividir(int numero1, int numero2){
    int resultado = numero1 > numero2 ?  numero1 / numero2 : numero2 / numero1;
    return resultado;
}
int main() {
    
    cout << dividir(2,3) << endl;
    
    return 0;
}

/*
 Tarea 7
 
 Realiza una función que imprima un saludo con el nombre pasado por parámetro, ejemplo de impresión:
 
 Hola Rosa!
 */

void imprimirSaludo(string nombre){
    cout << "Hola " << nombre << "!" << endl;
    
}
int main() {
    
    imprimirSaludo("Rosa");
    
    return 0;
}

/*
 Tarea 8
 
 Realiza una función que pasando por parámetro la edad (int) de la persona, devuelva true si está apta para conducir (mayor de 18 años), sino, devuelva false.
 
 Implementa esta función en tu programa.
 */

bool permitirConducir(int edad){
    bool permitir = edad > 18 ? true : false;
    return permitir;
}
int main() {
    
    cout << permitirConducir(12) << endl;
    
    return 0;
}

/*
 Tarea 9
 
 Realiza una función “piscinaAbierta” que pasando por parámetro la temperatura (int) y el estado de las precipitaciones (bool), devuelva true si la no hay precipitaciones y la temperatura es mayor de 26, en caso contrario devuelva false.
 */

bool piscinaAbierta(int temperatura, bool precipitaciones){
    bool permitir = temperatura > 26 && precipitaciones == true ? true : false;
    return permitir;
}
int main() {
    
    cout << piscinaAbierta(30, true) << endl;
    
    return 0;
}
