#pragma once
#include <iostream>
#include "empleado.hpp"

using namespace std;

class Particular : public Empleado{
    public:
        Particular(string nombre, int edad);
        void trabajar() override;
};