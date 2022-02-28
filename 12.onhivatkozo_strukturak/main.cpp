#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

struct book {
    char nev[20];
    char cim[40];
    int ev;
    float ar;
    book * kovetkezo;
};

int main() {

    book * start=NULL, *elozo, *aktualis,*kovetkezo;

// A lista felepitese es az elemek veletlen feltoltese; 

    srand(unsigned(time(NULL)));
    for (int index = 0; index < 10; index++){
        aktualis = new book;
        if(!aktualis) {
            cerr<<"Nincs eleg memoria!\n";
            return -1;
        }
// A lista elemek adattagjainak feltoltese;
        sprintf(aktualis->nev,"%03d Anonymous",index);
        sprintf(aktualis->cim,"Nothing %03d",index);
        aktualis->ev = 1900+rand()%106;
        aktualis->ar = 500+rand()%6500 * 1.5;
        aktualis->kovetkezo = NULL;

    // Lancolasi es leptetesi muveletek
        if(index == 0) {
            start = elozo = aktualis;
        } else {
    // Uj elem lancolasa az elozo elemhez
        elozo->kovetkezo = aktualis;
        elozo = aktualis;
        }   
    }



// A listaban lepkedve az elemek adatainak kiirasa
    aktualis = start;
    cout<<endl;
    do{
        cout<<aktualis->nev<<'\t'<<aktualis->cim<<'\t'
        <<aktualis->ev<<'\t'<<aktualis->ar<<endl;
    // Lepes a kovetkezoz elemre
    aktualis = aktualis->kovetkezo;    
    } while (aktualis != NULL);

// A 4.szamu elem lokalizalasa es torlese
// Az elem helyenek meghatarozasa
    aktualis = start;
    for(int index = 0; index < 4; index++ ) {
        elozo = aktualis;
        aktualis = aktualis->kovetkezo;
    }
    elozo->kovetkezo = aktualis->kovetkezo;
    delete aktualis;

// A 3.sorszamu elem lokalizalasa es moge uj elem beszurasa
// A megelozo elem helyenek meghatarozasa
    aktualis = start;

    for(int index = 0; index < 3; index++ ) 
        aktualis = aktualis->kovetkezo;
// Terulet foglalas az uj elem szamara
    kovetkezo = new book;        
    if(!kovetkezo) {
        cerr<<"Nincs eleg memoria!\n";
        return -1;
    }

// Uj elem adatainak feltoltese
    strcpy(kovetkezo->nev,"!!! Anonymous"); 
    strcpy(kovetkezo->cim,"Nothing !!!"); 
    kovetkezo->ev=1979;
    kovetkezo->ar=1223;

// Uj elem befuzese a lancba
    kovetkezo->kovetkezo = aktualis->kovetkezo;
    aktualis->kovetkezo = kovetkezo;   

// A listaban lepkedve az elemek adatainak kiirasa
    aktualis = start;
    cout<<endl;
    do{
        cout<<aktualis->nev<<'\t'<<aktualis->cim<<'\t'
        <<aktualis->ev<<'\t'<<aktualis->ar<<endl;
    // Lepes a kovetkezoz elemre
    aktualis = aktualis->kovetkezo;    
    } while (aktualis != NULL);
// Lista elemeinek megszuntetese;
aktualis = start;
do {
    kovetkezo = aktualis->kovetkezo;
    delete aktualis;
    aktualis = kovetkezo;
} while( kovetkezo != NULL);
start = NULL; // Nincs lista
}
