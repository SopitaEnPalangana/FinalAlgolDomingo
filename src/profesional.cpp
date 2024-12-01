#include <iostream>
#include "profesional.hpp"
using namespace std;

Profesional::Profesional(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}
void Profesional::trabajar(){
    cout << "-----------------------" <<endl;
    cout << "   " << this->nombre << " esta vendiendo a profesionales" <<endl;
}