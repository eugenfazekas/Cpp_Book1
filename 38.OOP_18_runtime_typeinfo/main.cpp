#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class Allat {
    protected:
        int labak;
        virtual string fajta() = 0;
    public:
        Allat(int n) {labak = n;}
        void info() {
            cout<<"A(z) "<<fajta()<<"nak "
            <<labak<<" laba van."<<endl;
        }
};

class Hal : public Allat {
    protected:
        string fajta() {return "hal";}
    public:
        Hal(int n = 0) :Allat(n) {}
        void Uszik() {cout<<"Uszik"<<endl;}    
};

class Madar : public Allat {
    protected:
        string fajta() {return "madar";}
    public:
        Madar(int n = 2) :Allat(n) {}
        void Repul() {cout<<"Repul"<<endl;}    
};

class Emlos : public Allat {
    protected:
        string fajta() {return "emlos";}
    public:
        Emlos(int n = 4) :Allat(n) {}
        void Fut() {cout<<"Fut"<<endl;}    
};

int main() {
    const int db = 3;
    Allat * p[db];
    p[0] = new Hal;
    p[1] = new Madar;
    p[2] = new Emlos;

    //RTTI nelkul is mukodo lekerdezese
    for (int i = 0; i < db; i++)
        p[i]->info();

    // RTTI -alapu feldolgozas
    for (int i = 0; i < db; i++)
        if(dynamic_cast<Hal*>(p[i]))    // Hal ?
            dynamic_cast<Hal*>(p[i])->Uszik();
        else 
            if(dynamic_cast<Madar*>(p[i]))    // Madar ?
                dynamic_cast<Madar*>(p[i])->Repul();
        else 
            if(dynamic_cast<Emlos*>(p[i]))    // Emlos ?
                dynamic_cast<Emlos*>(p[i])->Fut(); 

    for(int i = 0 ; i < db; i++)
        delete p[i];                                     
}