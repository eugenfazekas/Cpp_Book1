#include "vektor.h"

Vektor::Vektor() { p = new int [meret = 10]; }

Vektor::Vektor(int n) { p = new int[meret = n]; }

Vektor::Vektor(const Vektor &v){
    p = new int[meret = v.meret];
    for (int i = 0; i < meret; i++)
        p[i] = v.p[i];
} 

Vektor::Vektor(const int a[], int n) {
    p = new int [meret = n];
    for(int i = 0; i < meret; i++)
        p[i] = a[i];
}

Vektor::~Vektor() {delete [] p;}