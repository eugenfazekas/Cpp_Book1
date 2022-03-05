#include <iostream>

using namespace std;

class B {
    private:
        int x,y;
    public:
        int b1,b2;
        int Bfunc1(void) {return x;}
        int Bfunc2(void) {return y;}        
};

// Szarmaztatott osztaly
class D : private B {
    private:
        // az oroklott b2 elfedese
        int b2;
        int d;
    public:
        // a private szarmaztatassal oroklott b1 public eleresu lesz
        B::b1;
        // az oroklott Bfunc() elfedese
        void Bfunc1(void);
};

void D::Bfunc1(void) {
    d = B::Bfunc1(); //  a nem lathato Bfunc1() elerese
    b1 = Bfunc2(); // a Bfunc2() lathato
    b2 = B::b2; // a nem lathato b2 adattag elere
}

int main() {
    D od;
    od.b1 = 23;
}
