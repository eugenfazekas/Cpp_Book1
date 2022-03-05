#include <iostream>

using namespace std;

class Alap {
    public:
        int q;
};

class Alap1: virtual public Alap {
    int x;
    public:
        Alap1(int i): x(i) {}
};

class Alap2: virtual public Alap {
    int y;
    public:
        Alap2(int i): y(i) {}
};

class Utod: public Alap1, public Alap2 {
    private:
        int a,b;
    public:
        Utod(int i, int j): Alap1(i*5), Alap2(j+i), a(i) { b = j; }     
};

int main() {
    Utod ux(10,20);
    ux.Alap1::q=100;
    cout<<ux.Alap2::q<<endl;
    ux.Alap2::q=200;
    cout<<ux.q<<endl;
}