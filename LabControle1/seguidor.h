#ifndef SEGUIDOR_H
#define SEGUIDOR_H

#include <matriz.h>
#include <complex>

using std::complex;

class Seguidor
{
public:
    Seguidor();
    Matriz Calcula_K(complex<double> p1, complex<double> p2, complex<double> p3);
    double Seguir(Matriz x, Matriz u);
    void setK(Matriz K_);
private:
    double erro;
    Matriz Ga, Ha, K, Kaux, W_inv;
};

#endif // SEGUIDOR_H
