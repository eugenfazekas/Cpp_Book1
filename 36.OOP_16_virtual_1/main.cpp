#include <iostream>

using namespace std;

class Alakzat {
    protected:
        int x,y;
    public:
        Alakzat(int _x, int _y) {x = _x; y = _y;}
        virtual double terulet() = 0;
        virtual double kerulet() = 0;    
        void megjelenit() {
            cout<<'('<<x<<","<<y<<")\t";
            cout<<"\tTerulet: "<<terulet();
            cout<<"\tKerulet: "<<kerulet()<<endl;
        }
};

class Negyzet: public Alakzat {
    protected:
        double a;
    public:    
        Negyzet(int _x = 0, int _y = 0, double _a = 0) : Alakzat(_x,_y) , a(_a) {} 
        double terulet() {return a * a;} 
        double kerulet() {return 4 * a;}  
};

class Teglalap: public Negyzet {
    protected :
        double b;
    public:
        Teglalap(int _x = 0, int _y = 0, double _a = 0, double _b = 0):
        Negyzet(_x, _y, _a), b(_b) {};     
        double terulet() {return a * b;} 
        double kerulet() {return 2 * (a + b);}          
};

class Kor: public Negyzet {
    static const double pi;
    public:
        Kor(int _x = 0, int _y = 0, double _a = 0): Negyzet(_x,_y,_a) {}
        double terulet() {return a * a * pi;} 
        double kerulet() {return 2 * a * pi;}          
};

const double Kor::pi = 3.14159;

int main() {

    Negyzet n (12,23,10);
    cout<<"Negyzet:  ";
    n.megjelenit();

    Kor k (23,12,10);
    cout<<"Kor:      ";
    k.megjelenit();

    Teglalap t(12,7,10,20);
    cout<<"Teglalap: ";
    t.megjelenit();
}