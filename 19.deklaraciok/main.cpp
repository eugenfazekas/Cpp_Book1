#include <iostream>

using namespace std;


int main() {

    int ARRAY_SIZE;
    int e = 1;
    int * f = &e; // Itt elmenti "f" "e" -nek a memoria cimet referencia jelel;
    cout<<&e<<" <-- e - f --> "<<f<<endl; //kiirja a memoria cimeket 

    int z[ARRAY_SIZE] = {4,5,6};
    int * y = z; // Itt is elmenti "y" "x"-nek a memoria cimmet , de a faszom referencia jel nelkul.
    cout<<z<<" <-- z - y --> "<<y<<endl; //kiirja a memoria cimeket ;

    int * x1[ARRAY_SIZE] = {0};
    x1[1] = &z[1];  // Atadjuk a tomb 2 elemenek a memoria cimet; 
    cout<<*x1[1]<<endl; //Kiiratjuk a tomb masodik elemet

    int * x2 = z; //Atadjuk a masik tomb elso memoria cimet
    cout<<*x2 + 1<<endl;  // Kiratjuk tomb 2 elemet 

    char **argx; // karakterre mutato pointerre mutato pointer

    int * p;
    int * & q = p; // q referencia egy egeszre mutato mutatora

    int a[5]; // egeszeket mutato tomb;
    int *pa[5]; // egeszeket tartalmazo 5-elemu tombre mutato pointer
    int *pv[5]; // egeszre mutato poitereket tartalmazo 5-elemu vektor 

    char *fv(int); // fuggveny amely int argot kap es karakterre mutato pointerrel ter vissza
    char &rfv(int)  // fuggveny amely int argot kap es karakter referenciaval ter vissza
    char (*pfv)(int);// egy olyan fuggvenyre mutato pointer amely int argumentumot kap es karaktert add vissza
    char *(&rfv)(int) = fv; //referencia egy olyan fuggvenyre,
                    // amely int argumentumot kap es karakterekre mutato pointerrel ter vissza
}