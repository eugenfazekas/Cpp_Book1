#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

const int MAX = 12;

double adat1[MAX] = {
    123.79,123e-4,12.2379,-0.1223,
    0.456,3.14159265,-15232,
    34,2331.01,-2323.42,2e-3,-2.7342e-3
};

double sum (double d[],int n) {
    double s = 0;
    while(n>-1) 
    s += d[--n];
    return s;
}

string format(double d, int w = 20 , int p = 7) {
    //double -> string konverzio
        int egesz, elojel;
        string ds = fcvt(d * 1E15, w + p , &egesz, &elojel);
        egesz -= 15;

    // az elojelet tartalmazo string
        string sg(1,elojel ? '-' : '+');

    // az egesz resz-sztring eloalitasa
        string se = ds.substr(0,egesz);
    
    if(egesz>0)
        se = sg + se;
    else    
        se = sg + string("0");    

    int isp = w-p-1-se.length();

    if(isp < 0)
        return string(w,'*');

    se = string(isp,' ') + se + ".";

    // A tortresz string eloalitasa
    string st = (string(egesz < 0 ? -egesz : 0,'0') + 
                ds.substr(egesz < 0 ? 0 : egesz)).substr(0,p);

    for( int i = st.length() -1; i > 0 && st[i] == '0'; st[i--] = ' ');
    return se +st;               
}

int main() {

    double atl = sum(adat1, MAX) / MAX;
    double adat2[MAX];
    for(int k = 0; k < MAX; k++)
        adat2[k] = (atl/=5);

    for(int k = 0; k < MAX; k++) {
        cout<<format(adat1[k],11,5);    
        cout<<format(adat2[k],18,8)<<endl;  
    }
}

