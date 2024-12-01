#pragma once
#include <iostream>

using namespace std;

class Empleado{
    protected:
        string nombre;
        int edad;
        string sucursal;
        double salario;
    public:
        virtual void trabajar() = 0;
        string getNombre();
        int getEdad();
        string getSucursal();
        double getSalario();
        void setSucursal(string localidad);
        void setSalario(double salario);
        void mostrarInfo();
};