#ifndef SOLUTII_H_INCLUDED
#define SOLUTII_H_INCLUDED
#include "functii.h"


void solutieSecvente()
{
    int v[100], n;
    citireVector(v,n);
    sumaInterval(v,n,primulElementImpar(v,n),ultimulElementImpar(v,n));
    afisareVector(v,n);
}

#endif // SOLUTII_H_INCLUDED
