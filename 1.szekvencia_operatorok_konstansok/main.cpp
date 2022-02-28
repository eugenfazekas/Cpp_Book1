#include <iostream>

using namespace std;

#define HUPI_LILA 5; //constant

enum szin {fekete,kek,zold};

int main() {

    1994;              // egessz konstans
    03712;             // oktalis alapu konstans - 0 -val kezdodik
    0x7ca;             // hexadecimalis konstans - 0x -el kezdodik
    65535u;            // unsigned int
    19871207l;         // long
    3087007744UL;      // unsigned long
    28007786025507ll;  // long long

    cout<<"Ezt egy teszt\a szoveg"<<endl; // \a csengo
    cout<<"Ezt egy teszt\b szoveg"<<endl; // \b visszatorles
    cout<<"Ezt egy teszt szoveg\f"<<endl; // \f lapdobas
    cout<<"Ezt egy teszt szoveg\n"<<endl; // \n ujsor
    cout<<"Ezt egy teszt szoveg\r"<<endl; // \r kocsi-vissza
    cout<<"Ezt egy teszt szoveg\t"<<endl; // \t vizszintes tabulalas
    cout<<"Ezt egy teszt szoveg\v"<<endl; // \v fuggoleges tabulalas
    cout<<"Ezt egy teszt szoveg\'"<<endl; // \' aposztrof
    cout<<"Ezt egy teszt szoveg\""<<endl; // \" idezojel
    cout<<"Ezt egy teszt szoveg\\"<<endl; // \a backslash
    cout<<"Ezt egy teszt szoveg\?"<<endl; // \? kerdosejel

   // static_cast      !  !=  %  %=        &  &&  &=  ()  *  *=
   // const_cast       +  ++  +=  ,        -  --  -=  ->  .  /
   // dynamic_cast     /=  <  <=  <<      <<=  =  ==   >  >= >>
   // reinterpret_cast >>= ?: []  ^       ^=   |  |=  ||  ~  ::
   // sizeof           .* ->* new delete

   // [] tomb kijeloles meret atadas
   // () parameter es argumentum lista atadasa
   // {} Kodblokk
   // *  A mutatotipus jelolese a deklaracioban
   // ,  fuggveny argumentumok atadasa
   // :  Cimke elvalasztasa
   // ;  Az utassitas vegenek jelolese
   // ... Valtozo hosszusagu argumentum lista
   // # Elofordito directiva

   extern int sum(int,int); // fuggveny egy kulso cpp filebol

   cout<<"Osszeg = "<<sum(1,1)<<endl;
}