#include <iostream>

using namespace std;

class Lepegeto {
    public:
        int a;
        Lepegeto(int _a) { a = _a; }
        friend int operator ++ (Lepegeto &, int);
        int operator ++ () {return a += 10;}
        int getA() { return a;} 
};

int operator ++ (Lepegeto & d,int) {
    return d.a += 100;
}

int main() {
    Lepegeto n (12);
    cout<<++n + n++<<"\t";
    cout<<n.getA()<<endl;

    Lepegeto m (12);
    cout<<m++ + ++m<<"\t";
    cout<<m.getA()<<endl;
}