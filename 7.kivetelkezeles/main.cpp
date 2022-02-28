#include <iostream>
#include <cmath>
#define throw(...)
using namespace std;

void beolvas(double & a,double & b, char & op) throw (bool, const char *) {
    char p[100];
    cout<<":";

    // biztonsagos adatbevitel
    cin.getline(p,100);
    int db=sscanf(p,"%lf%c%lf",&a,&op,&b);

    if (toupper(p[0]) == 'X') // kilepes
        throw true;
    if ( db != 3 )
        throw "Hibas adatbevitel.";    
}

    double szamol(double a, double b, char op) throw (bool, const char *)  {
        double e = 0;
        switch (op) {
            case '+' : e = a + b;
                        break;
            case '-' : e = a - b;
                        break;
            case '*' : e = a * b;
                        break;
            case '^' : e = pow(a,b);
                        break;                                    
            case '/' : if(!b) throw 1;
                        else e = a / b;
                        break;
            default: throw "Hibas operator";
        }
        return e;            
    }


int main() {
    double x,y;
    char op;
    while(true) {
        try{
            beolvas(x,y,op);
            cout<<'='<<szamol(x,y,op)<<endl;
        } catch (bool) {
            cout<<"Viszlat!"<<endl;
            break;
        } catch (int) {
            cout<<"Szamolasi Hiba."<<endl;
            break;
        } catch (const char * s) {
            cout<<s<<endl;
            break;
        } catch (...) {
            cout<<"Ismeretlen kivitel"<<endl;
            break;
        }
    }
    cin.get();
}