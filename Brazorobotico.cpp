#include "Brazorobotico.h"
using namespace std;



//Constructor                                                                                                                               
brazorobotico::brazorobotico(double x_, double y_, double z_){
    x=x_;
    y=y_;
    z=z_;
}

// Consultores                                                                                                                              
double brazorobotico::getX() {
    return x;
}

double brazorobotico::getY(){
    return y;
}

double brazorobotico::getZ(){
    return z;
}

bool brazorobotico::suje(){
    return sujetando;
}

// Método para coger un objeto                                                                                                              
void brazorobotico::coger() {
    sujetando = true;
}

// Método para soltar un objeto                                                                                                             
void brazorobotico::soltar() {
    sujetando = false;
}


// Método para mover el brazo a nuevas coordenadas                                                                                          
void brazorobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
}

