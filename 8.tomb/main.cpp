#include <iostream>

using namespace std;

const unsigned int KULCS = 0xe7;

int main () {
    char s[80], *p;
    cout<<"Kerek egy szoveget       : "<<endl;
    cin.getline(s,80);

    for(int i = 0; s[i]; i++) 
        s[i] ^= KULCS;

    cout<<"A titkositot szoveg: "<<s<<endl;

    p = s;
    while(*p)
        *p++ ^= KULCS;
        cout<<"Az eredeti szoveg: "<<s<<endl;    
}