//
//  Proyecto.cpp
//  Actividad7
//
//  Created by Sergio Gonzalez on 25/11/20.
//

#include "Proyecto.h"

Proyecto::Proyecto() {

    nombre="";
    departamento="";
    presupuesto= 0;
}

Proyecto::Proyecto(string nombre,string departamento,int presupuesto) {

    this->nombre=nombre;
    this->departamento=departamento;
    this->presupuesto=presupuesto;

}

void Proyecto::setPresupuesto(int presupuesto) {
    this->presupuesto=presupuesto;
}
