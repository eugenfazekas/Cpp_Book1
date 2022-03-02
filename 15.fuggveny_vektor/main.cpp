#include <iostream>
using namespace std;

double atlag1(const int * vektor,int n) {
    long sum = 0;

    for(int i = 0; i < n; i++ )
        sum += *(vektor + i); // sum += vektor[i];

    return (double) sum / n;
} 

double atlag2(const int vektor[], int n) {
    long sum = 0;

    for(int i = 0; i < n; i++)
        sum += vektor[i];
    
    return (double) sum / n;
}

struct vec {
    int *ptr;
    int size;
};

double atlag3(vec  vs) {
    long sum = 0;
    for(int i = 0; i < vs.size; i++ )
        sum += *(vs.ptr + i); // sum += vektor[i];

    return (double) sum / vs.size;
}

int main() {
    int a[]  = {1,2,3,4,5,6,7,8,9,10};
    vec v = {a,10};

    double b1 = atlag1(a,10);
    double b2 = atlag2(a,10);
    double b3 = atlag3(v);

    cout<<"b1 = "<<b1<<", b2 = "<<b2<<", b3 = "<<b3<<endl;
}