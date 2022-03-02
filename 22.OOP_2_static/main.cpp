#include <iostream>
#include <cmath>

using namespace std;

class Math {
    private:
        static double dFokRad;
        static bool eRadian;
    public: 
        typedef double valos;
        enum Egyseg {fok,rad};
        static const double Pi;

        static double Sin(double x)
            {return sin(eRadian == rad ? x : dFokRad*x); }
        static double Cos(double x)
            {return cos(eRadian == rad ? x : dFokRad*x); }        
        static void Mertek(Egyseg e = rad) { eRadian = e ;} 
        void kiir() {cout<<Pi<<endl;}   
};

const double Math::Pi=M_PI;
double Math::dFokRad = Math::Pi/180;
bool Math::eRadian = Math::rad;

int main() {
    
    Math::valos y = Math::Sin(Math::Pi/6);

    Math::Mertek(Math::fok);
    y = Math::Sin(30);   

    Math::Mertek(Math::rad);
    y = Math::Sin(Math::Pi/6);

    Math m;
    m.Mertek(Math::fok);
    y = m.Sin(30);
    m.Mertek(m.rad);
    y = m.Sin(Math::Pi/6);
}