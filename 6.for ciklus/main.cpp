#include <iostream>


using namespace std;

int main() {

    long sum;
    int i , n = 5;
    cout<<"Az elso "<<n<<" egesz szam "<<endl;;
    for( i=0, sum =0 ; i<=n ; sum += i++) {
        cout<<"i = "<<i<<endl;
        cout<<"Osszege = "<<sum<<endl;
    }

    char *q = "               A C++ programozasi nyelv";
    char *p;
    for(p=q; *p != '\0'; p++) {
        if(*p != ' ')
            break;
            cout<<"p = "<<p<< endl;
    }
}