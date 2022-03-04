#include <iostream>
#include <new>
 
using namespace std;

class Osztaly {
    public:
        double d;
        void * operator new (size_t n);
        void operator delete (void *p, size_t n);
};

void * Osztaly::operator new(size_t n) {
    cout<<"Foglalas: "<<n<<endl;
    return ::new char[n]; 
}

void Osztaly::operator delete(void *p,size_t n) {
    cout<<"Torles"<<endl;
    ::delete static_cast<Osztaly *>(p);
}

int main() {
    Osztaly *p = new Osztaly;
    p->d=1223;
    delete p;
}