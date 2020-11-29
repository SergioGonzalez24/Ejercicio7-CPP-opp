//
//  Proyecto.hpp
//  Actividad7
//
//  Created by Sergio Gonzalez on 25/11/20.
//

#ifndef Proyecto_h
#define Proyecto_h

#include <string>
using std::string;

class Proyecto{
    
private:
    string nombre;
    string departamento;
    int presupuesto;
    
public:
    
//  Metodos Constructores
    Proyecto();
    Proyecto(string nombre, string departamento, int presupuesto);
    
//  Metodos Get
    string getNombre() {return nombre;}
    string getDeparto() {return departamento;}
    int getPresupuesto() {return presupuesto;}
    
//   Metodos Set
    void setPresupuesto(int presupuesto);
};

#endif /* Proyecto_hpp */
