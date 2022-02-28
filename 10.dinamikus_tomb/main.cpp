#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

        string * nev;
        int db;

    // A nevek darabszamanak bekerese
        cout<<"Hany nevet kivan  rendezni: "<<endl;
        cin>>db;
        db = db+1;
        if (db < 1)
            return -1;
        cin.ignore();    
    // Dinamikus memoriafoglalas az objectum tomb szamara
        nev = new string[db];

    // A nevek beolvasa 
        for(int i = 1; i < db; i++) {
            cout<<i<<". nev: ";
            getline(cin,nev[i]);
        }

    // Rendezes
        sort(&nev[0],&nev[db]);

    // Kiiras       
        cout<<endl;
        for(int i = 1; i < db ; i++)
            cout<<i<<"."<<nev[i]<<endl;

    // Az Obiektumok felszabaditasa
        delete [] nev;
}
