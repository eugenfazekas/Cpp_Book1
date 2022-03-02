#ifndef VektorH
#define VektorH

class Vektor {
    public:
        Vektor();
        Vektor(int n);
        Vektor(const Vektor &v);
        Vektor(const int a[], int n);
        ~Vektor();
    private:
        int *p;
        int meret;    
};
#endif