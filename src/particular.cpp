#include <iostream>
#include "particular.hpp"
using namespace std;

Particular::Particular(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}
void Particular::trabajar(){
    cout << "-----------------------" <<endl;
    cout << "   " << this->nombre << " esta vendiendo a particulares" <<endl;
}