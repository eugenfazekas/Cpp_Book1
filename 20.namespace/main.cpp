#include <iostream>

using namespace std;

#include "random.h"
using namespace nsrandom;

int main() {
    set_random(2004);
    cout<<"otszor dobunk a kockaval"<<endl;
    for(int i = 0; i < 5; i++)
        cout<<i<<". dobas \t"<<random()%6+1<<endl;

        cout<<100%3<<endl;
}