#include <iostream>

using namespace std;

class DTomb {
    protected:
        int meret;
        int * p;
    public:
        DTomb(int m = 100) throw();
        int & operator [] (int index);
        ~DTomb();   
};

DTomb::DTomb(int m)  throw() { 
   try {
        p = new int[m]; 
        meret = m;
    } catch (...) { //minden kivetel
        cerr<<"Konstrualasi hiba"<<endl;
        exit(-1);
    }
}

DTomb::~DTomb() throw() {
    try {
        delete [] p; p = NULL;
    } catch (...) {
        delete [] p; p = NULL;
    }
}

int & DTomb::operator[] (int index) {
    if(index < 0 || index > meret) throw "Indexhiba";
    return p[index];
}

int main() {
    try {
        DTomb a(12);
        a[-1] = 23;
    }

    catch(int h) {
        cout<<"Elkapott int kivetel: "<<h<<endl;
    }

    catch(const char * s){
        cout<<s<<endl;
    }

    catch(...) {
        cout<<"Egyeb kivetel"<<endl;
    }
}