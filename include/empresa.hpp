#pragma once
#include <iostream>
#include "empleado.hpp"

using namespace std;

class Empresa : public Empleado{
    public:
        Empresa(string nombre, int edad);
        void trabajar() override;
};