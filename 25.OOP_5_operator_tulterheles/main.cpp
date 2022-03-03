#include <iostream>
#include "vektor.h"

using namespace std;

void show(Vektor &v) {
    for (int i = 0; i < v.fh(); i++)
        cout<<v[i]<<'\t';
    cout<<endl;
}

int main() {
    int a[] = {4,9}, b[] = {12,23,79};
    Vektor x(a,2), y(b,3), z;
    try {
        show(x);
        show(y);
        x=y;
        show(x);
        x = Vektor(a,2);
        show(x);
        x+=y;
        show(x);
        z=x+y;
        show(z);
    } catch (int n) {
        cout<<"Hibas tombindex:"<<n<<endl;
    }
}