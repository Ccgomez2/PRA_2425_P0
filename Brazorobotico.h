#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

using namespace std;

class brazorobotico{
    private:
    double x, y, z;  
    bool sujetando;   

    public:
    // Constructor
    brazorobotico(double x_, double y_, double z_);
    //Consultores
    double getX();
    double getY();
    double getZ();
    bool suje();

    // modificadores
    void coger();
    void soltar();
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif // BRAZOROBOTICO_H
