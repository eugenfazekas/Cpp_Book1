#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[], char ** envp) {
    int i;
    char **p;

    cout<<"Az argumentumok szama: "<<argc<<endl<<endl;
    for(int i = 0; i < argc; i++)
        cout<<i<<". argumentum: \""<<argv[i]<<"\""<<endl;

    p = envp;
    while(*p)
        cout<<"kornyezeti valtozo: \""<<*p++<<"\""<<endl;
    return (EXIT_SUCCESS);        
}