//
//  JefeDeDepartamento.cpp
//  Clase10-ClasesDeClases
//
//  Created by Sergio Pita on 28/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#include "JefeDeDepartamento.h"

void JefeDeDepartamento::setDepartamento(string d){
    departamento = d;
}

string JefeDeDepartamento::getDepartamento() const{
    return departamento;
}