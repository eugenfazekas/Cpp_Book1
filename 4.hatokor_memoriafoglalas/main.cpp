#include <iostream>
#include <exception>

using namespace std;

int i = 1223;

void mem_kezelo() {
    cerr<<"Nincs eleg memoria!"<<endl;
    exit(1);
}

int main() {

    long * data, size;
    cout<<"Kerem a tomb meretet!"<<endl;
    cin>>size;

    try {
        data = new long[size];
    } catch (bad_alloc) {
        cerr<<"Nincs eleg memoria"<<endl;
        exit(-1);
    }
    delete[] data;

    set_new_handler(mem_kezelo); //az uj hibakezelo bealitasa;
    char * ptr = new char[10000000];
    cout<<"Elso memoria foglalas: ptr "<<&ptr<<endl;
    ptr = new char[1900000000];
    cout<<"Masodik memoria foglalas: ptr "<<&ptr<<endl;
    set_new_handler(0); // Az eredeti hibakezelo vissza alitasa;

    int * e = new int(12);
    cout<<"e = "<<e<<" *e "<<*e<<endl;
    int * f = new int(23);

    delete[] ptr;
    double i = 3.14;
    {
        long i = 2, a;
        a = i*::i;
        cout<<"a = "<<a<<endl; // a = 2446
        ::i=94;
        cout<<"::i = "<<::i<<endl; // i::   = 94;
    }

    int * ip;
    ip = new int;
    delete ip;

    int * ap;
    ap = new int[10];

    int **pa;
    pa = new int * [10];

    delete[] ap;
    delete pa;
 }