#include <cstring>
#include <cassert>
#include <iostream>

using namespace std;

class CopyCls {
    private:
        int kor;
        char * nev;

        // Memoriafoglalas es a karaktersorozar bemasolasa
        void Masol(int k, char * p) {
            kor = k, nev = NULL;
            if(p)
            {
                nev  = new char[strlen(p)];
                assert(nev);
                strcpy(nev,p);
            }
        }
    public:
        // Altalanos es egyben alapertelmezet konstruktor
        CopyCls (int k = 0, char * n = NULL) { Masol(k,n); }

        // Masolo konstruktor 
        CopyCls (const CopyCls &cc) {Masol(cc.kor, cc.nev); }

        // Ertekado operator 
        CopyCls operator = (const CopyCls & cc) {
            // Ha nem onmagara vonatkozik az ertekadas
            if(&cc != this) {
                delete [] nev, nev = NULL;
                Masol(cc.kor, cc.nev);
            }
            return * this;
        }
        ~CopyCls() {delete [] nev; }
        int getAdat() { return kor;}
        char * getNev() { return nev; }   
};

int main() {
    char x1[] = "Lafenita";
    char x2[] =  "Anna";
    CopyCls a (25, x1), b (15,x2), c(b), d;
    c = c;
    d = c = a;
    cout<<c.getAdat()<<endl;
    cout<<c.getNev()<<endl;
}