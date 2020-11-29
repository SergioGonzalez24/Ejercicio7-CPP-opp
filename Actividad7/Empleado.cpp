//
//  Empleado.cpp
//  Actividad7
//
//  Created by Sergio Gonzalez on 25/11/20.
//

#include "Empleado.h"
#include <iostream>


Empleado::Empleado(string nombre,float sueldo) {
    
    this->nombre=nombre;
    this->sueldo=sueldo;

    
}

void Empleado::setSueldo(float sueldo) {
    
    this->sueldo=sueldo;
    
}

void Empleado::setAsignacion(Proyecto asignacion) {
    
    this->asignacion=asignacion;
}

void Empleado::subirSueldo(float incremento) {
    
    bool cond=true;
    while (cond==true) {
        if (incremento>=1 && incremento<=10) {
            float incSalarial=(incremento/100);
            std::cout<< "El incremento es de " <<incSalarial<<std::endl;
            cond=false;
        }
        else {
            std::cout<<"Not valid try again"<<std::endl;
            
        }
    }
}

