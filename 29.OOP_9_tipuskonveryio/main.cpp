#include <cmath>
#include <iostream>

using namespace std;

class cplx {
    private:
        double re , im;
    public:
        cplx () { re = im = 0;}
        cplx(double a) { re=a; im=0;} //konverzios konstruktor
        cplx(double a, double b) { re=a; im=b;} //konverzios konstruktor
        // konverzios operator
        operator double() {return sqrt(re*re+im*im); }
};

int main() {
    cplx a(3,4);
    cout<<double(a)<<endl;  // a kiirt ertek 5
    cout<<double(cplx(10))<<endl; // a kiirt ertek 10
}