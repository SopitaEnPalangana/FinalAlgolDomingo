#include <iostream>
#include <list>
#include "sucursal.hpp"

using namespace std;


Sucursal::Sucursal(string localidad){
    this->localidad = localidad;
}
string Sucursal::getLocalidad(){
    return this->localidad;
}
void Sucursal::mostrarPersonal(){
    for(Empleado* vendedor : listPersonal){
        vendedor->mostrarInfo();
    }
}
void Sucursal::contratar(Empleado* vendedor, double salario){
    vendedor->setSucursal(this->localidad);
    vendedor->setSalario(salario);
    listPersonal.push_back(vendedor);
    cout << "***" <<endl;
    cout << vendedor->getNombre() << " contratado en " << this->getLocalidad() <<endl;
    cout << "***" <<endl;
}