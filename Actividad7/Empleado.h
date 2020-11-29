//
//  Empleado.hpp
//  Actividad7
//
//  Created by Sergio Gonzalez on 25/11/20.
//

#ifndef Empleado_h
#define Empleado_h

#include "Proyecto.h"
#include <string>
using std::string;

class Empleado {

private:
    
    string nombre;
    float sueldo;
    Proyecto asignacion;
    
public:
    
//  Constructores
    Empleado() {};
    Empleado(string nombre,float sueldo);
    
//  Metodos Set
    void setSueldo(float sueldo);
    void setAsignacion(Proyecto asignacion);

//  Metodos Get
    string getNombre() {return nombre;}
    float getSueldo() {return sueldo;}
    Proyecto getAsignacion() {return asignacion;}

//    Otros Metodos
    void subirSueldo(float incremento);

};


#endif /* Empleado_hpp */
