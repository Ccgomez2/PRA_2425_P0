#include <iostream>
#include "Brazorobotico.h"

using namespace std;


int main() {
    brazorobotico brazo(0.0, 0.0, 0.0);

    // Mostrar las coordenadas iniciales y si está sujetando algo               
    cout << "Posición inicial: (" << brazo.getX() << ", " << brazo.getY() << ",\
 " << brazo.getZ() << ")\n";
    cout << "Sujetando algo: " << (brazo.suje() ? "Sí" : "No") << endl;

    // Mover el brazo a una nueva posición                                      
    brazo.mover(5.0, 3.0, 8.0);
    cout << "Nueva posición: (" << brazo.getX() << ", " << brazo.getY() << ", "\
 << brazo.getZ() << ")\n";

 brazo.coger();
    cout << "Sujetando algo: " << (brazo.suje() ? "Sí" : "No") << endl;

    // Soltar el objeto                                                         
    brazo.soltar();
    cout << "Sujetando algo: " << (brazo.suje() ? "Sí" : "No") << endl;

    return 0;
}

