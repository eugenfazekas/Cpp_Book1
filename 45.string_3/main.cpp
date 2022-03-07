#include <cstring>
#include <iostream>

using namespace std;

int main() {

    string mondat, szavak[19];
    int poz = 0, rpoz = 0, nszo, i = 0;


    mondat =  " A bodogsag egy pillango; ha kergetjuk";
    mondat += " kisiklik a kezunkbol... De ha csendben"
              " leulunk, az is lehet, hogy leszal rank.";

    // felbontjuk a mondatot szavakra a szokozoknel vagva;
    while(poz<mondat.size()){
        poz = mondat.find(' ',rpoz);
        szavak[i++].assign(mondat, rpoz, poz - rpoz);
        cout<<szavak[i-1]<<endl;
        rpoz = poz + 1;
    }          

    nszo = i; // szavak szama
    //Osszerakjuk a mondatot szo helyetesitesel
    mondat = "";
    for(i = 0 ; i < nszo; i++)
        if(!szavak[i].compare("ha"))
            mondat += "amennyiben ";
        else
            mondat += szavak[i] + ' ';
    mondat += '!';
    cout<<mondat<<endl;
    cout<<"Helyes? [igen/nem]";
    getline(cin,mondat,'\n');
    if(!mondat.compare("igen"))
        cout<<"Helyes!"<<endl;
    else
        cout<<"Nem tudom miyen."<<endl;                             
}