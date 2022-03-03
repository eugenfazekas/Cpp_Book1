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

int Vektor::fh() const {return meret;}

int& Vektor::operator[](int i) { if (i < 0 ||i > meret - 1) throw i; return p[i];  }

Vektor Vektor::operator = (const Vektor& v) {
    delete [] p;
    p = new int[meret = v.meret];
    for(int i = 0; i < meret; ++i)
        p[i] = v.p[i];
    return * this;    
    }

Vektor Vektor::operator += (const Vektor& v) {
    int m = (meret < v.meret) ? meret : v.meret;
    for(int i = 0; i < m; ++i)
        p[i] += v.p[i];
    return * this;       
}

Vektor operator + (const Vektor& v1, const Vektor& v2) {
    Vektor sum(v1);
    sum+=v2;
    return sum;
}