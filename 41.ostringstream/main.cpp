#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string adat[3] = {"22.7","12.23","1979.12"};
    double e;
    ostringstream sout;
    for(int i = 0; i < 3; i++) {
        istringstream sin(adat[i]);
        sin>>e;
        e += 0.5; // kerekites
        sout.str(" ");
        sout<<setfill('0')<<setw(4)<<long(e);
        adat[i] = sout.str();
    }
    for(int i = 0; i < 3; i++) 
        cout<<i<<". \t"<<adat[i]<<endl;
}

