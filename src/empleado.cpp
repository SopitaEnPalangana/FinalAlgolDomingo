#include <iostream>
#include "empleado.hpp"

using namespace std;

string Empleado::getNombre(){
    return this->nombre;
}
int Empleado::getEdad(){
    return this->edad;
}
string Empleado::getSucursal(){
    return this->sucursal;
}
double Empleado::getSalario(){
    return this->salario;
}
void Empleado::setSucursal(string localidad){
    this->sucursal = localidad;
}
void Empleado::setSalario(double salario){
    this->salario = salario;
}
void Empleado::mostrarInfo(){
    cout << "----------------------------------------" <<endl;
    cout << "Nombre: " << this->getNombre() << "   -   Edad: ";
    cout << this->getEdad() <<endl;
    cout << "Salario: $" << this->getSalario() << "(";
    cout << this->getSucursal() << ")" <<endl;
}