#include <cstring>
#include <iostream>

using namespace std;

int main() {

    char mondat[] = "A bodogsag egy pillango; ha kergetjuk,"
                    "kisiklik a kezunkbol... De ha csendben"
                    "leulunk, az is lehet, hogy leszal rank.";
    char irasjelek[] = " .,;:!?-";
    char * p;
    p = strtok(mondat,irasjelek);
    cout<<"p: "<<p+2<<endl;
    do{
        cout<<p<<endl;
        p = strtok(NULL, irasjelek);
    }   while( p != NULL);             
}