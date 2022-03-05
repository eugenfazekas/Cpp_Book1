#include  <iostream>

using namespace std;

class Alap1 {
    private:
        int na;
        long ta;
    public:
        Alap1(int _na, long _ta) {na = _na; ta = _ta;}
        Alap1(Alap1 & nata) {*this = nata; }
};

class Alap2 {
    private:
        char *pt;
        bool lv;
    public:
        Alap2(bool _lv, char * _pt) {lv = _lv ; pt = _pt;}
        Alap2(Alap2 & lvpt) {*this = lvpt; }
};

class Szarmaztatott : public Alap1, public Alap2 {
    private:
        char ln;
    public:
        Szarmaztatott(int na, long ta, bool lv, char * pt, char ln); 
        Szarmaztatott(Szarmaztatott & dc);   
};

Szarmaztatott::Szarmaztatott(int na, long ta, bool lv, char * pt, char ln):
    Alap1(na,ta), Alap2(lv,pt) {
        // szarmaztatott osztaly konstruktora 
}

Szarmaztatott:: Szarmaztatott(Szarmaztatott & dc): Alap1(dc), Alap2(dc) {
        // szarmaztatott osztaly konstruktora 
}

int main() {
    char s[] = "Lafenita";
    Szarmaztatott d1(23,1979,true,s,'N');
    Szarmaztatott d2(d1);
}