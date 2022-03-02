#include <iostream>
using namespace std;

void csere1(int *, int *);
void csere2(int &, int &);
void cime(int ** pp, int *p); 
void cimer(int * & pp, int & p);


int main() {
    int x = 7, y = 30;
    csere1(&x , &y);
    csere2(x,y);
    cout<<"x = "<<x<<" y = "<<y<<endl; 

    int a = 79120, b = 79120;

    int * ap;
    cime(&ap, &a);
    *ap+=23;
    cout<<"a = "<<a<<endl;

    int * bp;
    cimer(bp ,b);
    *bp += 23;
    cout<<"b = "<<b<<endl;

    int c = 79120, d = 79120;

    *kozvetit1(&c) += 23; 
     kozvetit2(d) += 23;
}

void csere1(int *p, int *q) {
    int sv = *p;
        *p = *q;
        *q = sv;
}

void csere2(int &a, int &b){
    int sv = a;
        a = b;
        b = sv;
}

void cime(int ** pp, int *p) {
    *pp = p;
}

void cimer(int * & pp, int & p) {
    pp = &p;
}

int * kozvetit1( int * p){
    return p;
}

int & kozvetit2( int & r){
    return r ;
}