#include <iostream>

using namespace std;

class POsztaly {
    public:
        int a;
        void setA(int A) {a = A;}
        int getA() const {return a;}
};

int main() {
    int POsztaly::*ip;
    void (POsztaly::*sp) (int);
    int (POsztaly::*gp)(void) const;

    ip = &POsztaly::a;
    sp = &POsztaly::setA;
    gp = &POsztaly::getA;

    POsztaly o1,*o2;
    (o1.*sp)(12);
    (o1.*ip)++;

    o2 = new POsztaly();
    (o2->*ip) = 23;
    int iv = (o2->*gp)();

    cout<<"o1 getA "<<o1.getA()<<endl;
    cout<<"o2 getB "<<o2->getA()<<endl;
    delete o2;
}