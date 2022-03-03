#ifndef VektorH
#define VektorH

class Vektor {
    public:
        Vektor();
        Vektor(int n);
        Vektor(const Vektor &v);
        Vektor(const int a[], int n);
        ~Vektor();
        int fh() const;
        int& operator[](int i);
        Vektor operator = (const Vektor & v);
        Vektor operator += (const Vektor & v);
        friend Vektor operator + (const Vektor & v1,const Vektor & v2);
    private:
        int *p;
        int meret;    
};
#endif