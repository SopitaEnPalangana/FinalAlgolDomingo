#include <iostream>
#include "empresa.hpp"
using namespace std;


Empresa::Empresa(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}
void Empresa::trabajar(){
    cout << "-----------------------" <<endl;
    cout << "   " << this->nombre << " esta vendiendo a empresas" <<endl;
}
