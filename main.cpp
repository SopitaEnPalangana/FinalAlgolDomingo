#include <iostream>
#include "empleado.hpp"
#include "sucursal.hpp"
#include "casa.hpp"
#include "particular.hpp"
#include "profesional.hpp"
#include "empresa.hpp"

using namespace std;

int main(){

    CasaMatriz* Sopitas = new CasaMatriz("Sopita's");
    Sopitas->expandir("Portoluro");

    Particular* vendedor1 = new Particular("Anita Rebollo", 26);
    Profesional* vendedor2 = new Profesional("Francisco Whittinslow", 28);
    Empresa* vendedor3 = new Empresa("Victoria Cazanave", 38);

    Sopitas->listSucursales[0]->contratar(vendedor1, 4000);
    Sopitas->listSucursales[0]->contratar(vendedor2, 5000);
    Sopitas->listSucursales[0]->contratar(vendedor3, 6000);

    Sopitas->expandir("Pramos");
    Particular* vendedor4 = new Particular("Franco Cacaviello", 24);
    Profesional* vendedor5 = new Profesional("Ailen Garcia", 35);
    Empresa* vendedor6 = new Empresa("Facundo Lopez", 46);

    Sopitas->listSucursales[1]->contratar(vendedor4, 4000);
    Sopitas->listSucursales[1]->contratar(vendedor5, 5000);
    Sopitas->listSucursales[1]->contratar(vendedor6, 6000);

    for(Sucursal* sucursal : Sopitas->listSucursales){
        sucursal->mostrarPersonal();
    }

    Sopitas->notificar(vendedor3, "Reforzar venta de x Producto");
    Sopitas->notificar(vendedor5, "Entrenar nuevo personal en sucursal");
    Sopitas->notificar(vendedor6, "Eliminar Y producto del catalogo");

    vendedor3->trabajar();
    vendedor5->trabajar();
    vendedor6->trabajar();

    delete vendedor1;
    delete vendedor2;
    delete vendedor3;
    delete vendedor4;
    delete vendedor5;
    delete vendedor6;
    for (Sucursal* sucursal : Sopitas->listSucursales){
        delete sucursal;
    }
    delete Sopitas;
    cout << "----------------" <<endl;
    cout << "Memoria liberada" <<endl;
    return 0;
}