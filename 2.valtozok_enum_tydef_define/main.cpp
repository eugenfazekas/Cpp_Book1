#include <iostream>
#define HUPI_LILA 5; //constant
using namespace std;

enum szin {fekete,kek,zold};
int main() {

//         Adattipus                Ertekkeszlet              Meret(bájt)     Pontossag
//            bool                   false,true                    1
//            char                   -128..127                     1
//        signed char                -128..127                     1
//       unsigned char                 0..255                      1
//          wchar_t                   0..65535                     2
//          short                    -32768..32767                 2
//      unsigned short                 0..65535                    2
//            int             -2147483648..-2147483648             4
//       unsigned int               0..4294997295                  4
//            long             -2147483648..-2147483648            4
//       unsigned long               0..4294997295                 4                
//         long long           -9,223,372,036,854,775,807..
//                              9,223,372,036,854,775,807          8  
//    unsigned long long      0..18,446,744,073,709,551,615        8
//           float                3.4E-38..3.8E+38                 4              6
//           double              1.7E-308..1.7E+308                8             15
//        long double             3.4E-4932..3.8E+4932            10             19

enum szin col;
    int kod;

    col = zold;
    cout<<"col: "<<col<<endl;   // Output = 2

    kod = col;
    cout<<"kod: "<<kod<<endl;   // Output = 2

    col = szin(23);
    cout<<"col2: "<<col<<endl;  // Output = 23

    int x = HUPI_LILA;
    cout<<"HUPI_LILA : "<<x<<endl;  // Output =   5  

    typedef volatile unsigned long int tido;
    tido idozites;  // type of idozites == tido
}