#pragma once
#include <iostream>
#include <list>
#include "empleado.hpp"

using namespace std;

class Sucursal{
    private:
        string localidad;
        list<Empleado*> listPersonal;
    public:
        Sucursal(string localidad);
        string getLocalidad();
        void mostrarPersonal();
        void contratar(Empleado* vendedor, double salario);
};