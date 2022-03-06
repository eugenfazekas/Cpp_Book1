#include <iostream>

using namespace std;

template<class T>
class Vektor {
    private:
        T * p;
        int meret;
    public:    
        typedef T * iterator;

        explicit Vektor(int n = 10);
        Vektor(const Vektor & v);
        Vektor( const T * a, int n);
        ~Vektor() { delete[] p;}
        int fh() const { return  meret; }

        T & operator [] (int i);
        Vektor & operator= (const Vektor & v);
        Vektor & operator+= (const Vektor & v);

        iterator begin() { return p; }
        iterator end() { return p+meret; }
};

//Konstruktorok
template<class T> Vektor<T>::Vektor(int n) {
    p = new T[meret = n];
}

template<class T> Vektor<T>::Vektor(const Vektor & v) {
    p = new T[meret = v.meret];
    for (int i = 0; i < meret; ++i)
        p[i] = v.p[i];
}

template<class T> Vektor<T>::Vektor(const T a[], int n) {
    p = new T[meret = n];
    for (int i = 0; i < meret; ++i)
        p[i] = a[i];
}

//osztalytag muvelet fuggvenyek

template <class T> T & Vektor<T>::operator[](int i) {
    if(i < 0 || i > meret - 1 ) 
        throw i;
    return p[i];
}

template <class T>Vektor<T> & Vektor<T>::operator = (const Vektor<T> & v) {
    delete [] p;
    p = new T [meret = v.meret];
    for (int i = 0; i < meret; ++i)
        p[i] = v.p[i];
    return * this;    
}

template <class T>Vektor<T> & Vektor<T>::operator += (const Vektor<T> & v) {
    int m = (meret < v.meret) ? meret : v.meret;
    for (int i = 0; i < m; ++i)
        p[i] += v.p[i];
    return * this;    
}

// kulso muvelet fuggveny
template <class Tipus>Tipus operator+ (const Tipus& v1, Tipus & v2) {
    Tipus sum(v1);
    sum+=v2;
    return sum;
}

int main() {
    int a[5] = {1,2,3,4,5};
    int b[3] = {7,12,23};

    // Peldanyostas typedefben;
    typedef Vektor<int> iVektor;
    iVektor v1(a,5), v2(b,3), v3;
    v3 = v2 + v1;

    //Lokalis peldanyositas double tipussal
    Vektor<double>::iterator p;
    Vektor<double> x,y,z;
    for(p = x.begin(); p!=x.end(); p++)
        *p = 1223.79;
    y=x;
    z=x+y;    
}



