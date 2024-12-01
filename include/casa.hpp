#pragma once
#include <iostream>
#include <vector>
#include "sucursal.hpp"
#include "empleado.hpp"

using namespace std;

class CasaMatriz{
    private:
        string nombre;
    public:
        vector<Sucursal*> listSucursales;
        CasaMatriz(string nombre);
        void expandir(string localidad);
        void notificar(Empleado* vendedor, string pedido);
        string getNombre();
};