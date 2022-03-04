#include <cmath>
#include <iostream>
#include <cstdio>

using namespace std;

class cplx {
    private:
        double re , im;
    public:
        cplx(double a = 0, double b = 0) { re=a; im=b;}
        operator double() {return sqrt(re*re+im*im); }
        friend istream & operator>> ( istream &, cplx &);
        friend ostream & operator<< ( ostream &, const cplx &);        
};

// Az adatbevitel formatuma: 12.23+7.79i, illetve 12.23-7.79i
istream & operator>>(istream & is, cplx & c){
    char p[256];
    is.getline(p,256);
    if(sscanf(p, "%lf%lfi",&c.re, &c.im) != 2)
        c=cplx(0);
    return is;
}

// Adakiviteli formatum: 12.23+7.79i, illetve 12.23-7.79i
ostream & operator<<(ostream &os,const cplx &c) {
    os<<c.re<<(c.im < 0 ? '-' : '+')<<abs(c.im)<<'i';
    return os;
}

int main() {

    cplx a,b;
    cout<<"Kerek egy complex szamot!";
    cin>>a;
    cout<<"A komplex szam:"<<a<<endl;
}