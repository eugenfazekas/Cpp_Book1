#include <iostream>

using namespace std;

struct complex {
    double re, im;
};

void csum1(const complex *pa, const complex *pb, complex *pc) {
    pc->re = pa->re + pb->re;
    pc->im = pa->im + pb->im;
}

complex csum2(complex a, complex b) {
    complex c;
    c.re = a.re + b.re;
    c.im = a.im +b.im;
    return c;
}

complex csum3(const complex &a,const complex &b) {
    complex c;
    c.re = a.re + b.re;
    c.im = a.im +b.im;
    return c;
}   
int main() { 
    complex c1 = {4,7}, c2 = {26,13}, c3;
    csum1(&c1,&c2,&c3);
    c3 = csum2(c1,c2);
    c3 = csum3(c1,c2);
}
