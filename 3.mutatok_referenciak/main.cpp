#include <iostream>
using namespace std;

int main() {

    int x1 = 23;
    int * p1 = &x1;

    int y2 = 20;
    typedef int & tri;
    typedef int * tpi;
    tri r2 = y2;
    tpi p2 = &y2; 
    r2 = 21;

    cout<<"y2 = "<<y2<<endl;
    cout<<"&y2 = "<<&y2<<endl;
    cout<<"r2 = "<<r2<<endl;  // r2 a "21" erteket add y memoria cimenek  
    cout<<"p2 = "<<p2<<endl;  //p2 is y memoria cime lesz

    int n = 123;
    int * p3 = &n;
    int * & rp = p3; // rp referencia a p mutatohoz;
    *rp = 7; // n erteke 7 lesz

    int n1 = 123 ;
    typedef int * tpi2;
    tpi2 p4 = & n1;
    tpi2 & rp2 = p4; // rp referencia a p mutatohoz;
    *rp2 = 7; // n erteke 7 lesz

  
    int aa = 2;
    int & bb = aa; // bb referencia  az aa valtozo memoria cimere
    int* cc = &aa; // a cc erteke az a valtozo memoria cimerol
    cout<<"aa = "<<aa<<" &aa = "<<&aa<<" bb = "<<&bb<<" cc = "<<cc<<endl;

    aa = 4; 
    cout<<"aa = "<<aa<<" bb = "<<bb<<" cc = "<<*cc<<endl;

    int x3;
    void * ptr = &x3;

    *(int * )ptr = 123;
    cout<<"x3 = "<<x3<<endl; // x = 123

    typedef int * iptr;
    *iptr(ptr) = 124;
    cout<<"x3 = "<<x3<<endl; // x = 124

    *static_cast<int *>(ptr) = 125;
     cout<<"x3 = "<<x3<<endl; // x = 125

    typedef int * iptr;
    typedef iptr * ipptr;
    typedef ipptr * ippptr;

    iptr p;
    ipptr q;
    ippptr r;

    int x4 = 25;
    p = &x4;
    q = &p;
    r = &q;
    x4 = x4 + *p + **q + ***r; // 100  lesz p,q,r x-re mutatnak
    cout<<"x4 = "<<x4<<endl;
}