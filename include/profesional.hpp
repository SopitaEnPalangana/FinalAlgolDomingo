#pragma once
#include <iostream>
#include "empleado.hpp"
using namespace std;

class Profesional : public Empleado{
    public:
        Profesional(string nombre, int edad);
        void trabajar() override;
};