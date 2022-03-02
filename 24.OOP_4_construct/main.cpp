#include <iostream>
#include "vektor.h"

using namespace std;

int main() {
    Vektor a, b;  // mindket vektor 10-elemu;
    Vektor * c = new Vektor; // c poiter egy 10 vektorra;
    Vektor d[5]; // 5 darab 10-elemu vektor tomje;
    Vektor * e = new Vektor[5]; // 5 darab 10-elemu vektor tomje;
    delete c;
    delete [] e;

    Vektor f = Vektor(20); // 20 elemu tomb jon letre 
    Vektor g(20); // 20 elemu tomb jon letre 
    Vektor h = 20; // 20 elemu tomb jon letre 
    Vektor * i = new Vektor(20);// 20 elemu tomb jon letre
    Vektor j[] = {3,7,9}; // 3 elemu tomb jon letre 
    delete i;

    Vektor k; //default kontruktor hivodik meg
    Vektor l;
    Vektor m (k);  //harmadik kontruktor hivodik meg
    Vektor n[3]={k,l,m};  //harmadik kontruktor hivodik meg
    Vektor * o = new Vektor(k);  //harmadik kontruktor hivodik meg
    delete o;

    int z[5]={4,13,7,26,30};
    Vektor p(z,5); //negyedik kontruktor hivodik meg
    Vektor * q = new Vektor(z,5); //negyedik kontruktor hivodik meg
    delete q;
}