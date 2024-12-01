#include <iostream>
#include <vector>
#include "casa.hpp"

using namespace std;

CasaMatriz::CasaMatriz(string nombre){
    this->nombre = nombre;
}
void CasaMatriz::expandir(string localidad){
    Sucursal* nuevasuc = new Sucursal(localidad);
    this->listSucursales.push_back(nuevasuc);
};
void CasaMatriz::notificar(Empleado* vendedor, string pedido){
    cout << "   -Mensaje para " << vendedor->getNombre() << "-" <<endl;
    cout << pedido <<endl;
    cout << "-----------------------------------------------" <<endl;
}
string CasaMatriz::getNombre(){
    return this->nombre;
}
