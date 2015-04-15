//
//  JefeDeDepartamento.h
//  Clase10-ClasesDeClases
//
//  Created by Sergio Pita on 28/1/15.
//  Copyright (c) 2015 Sergio Pita. All rights reserved.
//

#ifndef __Clase10_ClasesDeClases__JefeDeDepartamento__
#define __Clase10_ClasesDeClases__JefeDeDepartamento__

#include <stdio.h>
#include "Profesor.h"

struct JefeDeDepartamento{
public:
    Profesor profesor;
    string departamento;

    JefeDeDepartamento(){
        cout << "constructor jefe de deparatamento" << endl;
    }
    
    void setDepartamento(string);
    string getDepartamento() const;
    
    
};

#endif /* defined(__Clase10_ClasesDeClases__JefeDeDepartamento__) */
