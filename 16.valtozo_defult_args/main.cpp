#include <iostream>
#include <cmath>
#include <cstdarg>

using namespace std;

double terulet(double a, double b,double c = 0);

double atlag(int n,...);

int main() {
//Altalanos haromszog terulete:
    cout<<"Altalanos 3-szog terulete: 3 - 4 - 5 = "<<terulet(3,4,5)<<endl;
//Derekszogu haromszog terulete:
    cout<<"Derekszogu 3-szog terulete: 3 - 4  = "<<terulet(3,4)<<endl;
// Atlag szomolas valtozo parameterekkel
    cout<<"Atlag: 1,2,3,4,5 = "<<atlag(5,1,2,3,4,5)<<endl;
}

double terulet(double a, double b, double c){
    if (c){
       double s = (a + b + c)/2;
       return sqrt(s*(s-a)*(s-b)*(s-c)); 
    } else 
        return (a*b/2);
}

double atlag(int n,...) {
   va_list valist;
   double sum = 0.0;
   int i;
   va_start(valist, n); //initialize valist for n nber of arguments
   for (i = 0; i < n; i++) { //access all the arguments assigned to valist
      sum += va_arg(valist, int);
   }
   va_end(valist); //clean memory reserved for valist
   return sum/n;
}