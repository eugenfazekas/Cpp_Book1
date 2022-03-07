#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[12], * s2 ,* s3, * s4;
    s2 = new char[12];
    s3 = new char[12];
    s4 = new char[12];
    strcpy(s1, "Lafenita");
    strcpy(s2,s1);
    cout<<s2<<" 4. karaktere: "<<s2[4]<<endl;
    cout<<"Lafenita"[4]<<endl;

    char * as1 = strcpy(s3, s2); // String copy
    char * as2 = strcat(s3,s2);  // String concat
    char * as3 = strchr(s2,'f'); // find first apperance of char '?'
    int s3_length = strlen(s3);     // find string length

    cout<<"as1: "<<as1<<" as2: "<<as2<<" as3: "<<&as3<<" s3_length : "<<s3_length<<endl;

    delete [] s2;
    delete [] s3;
    delete [] s4;
}