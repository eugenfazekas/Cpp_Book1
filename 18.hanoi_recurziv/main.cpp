#include <iostream>
using namespace std;

void Honnan_Hova_Mozgatas(char, char);
void Hanoi(int, char, char, char);
unsigned long fibr(int);

int main() {
    int korogszam;
    int honapok;
    cout<<"A korongok szamat kerem!"<<endl;
    cin>>korogszam;
    cout<<endl;
    Hanoi(korogszam,'A','B','C'); 
    
    cout<<"Add meg a honapok szamat!"<<endl;
    cin>>honapok;
    cout<<fibr(honapok)<<" nyulunk lesz "<<honapok<<" honap mulva"<<endl;
}

void Hanoi(int n, char honnan, char mivel, char hova) {
    if( n == 1)
        Honnan_Hova_Mozgatas(honnan,hova);
    else {
        Hanoi(n-1,honnan,hova,mivel);
        Honnan_Hova_Mozgatas(honnan,hova);
        Hanoi(n-1,mivel,honnan,hova);
    }    
}

void Honnan_Hova_Mozgatas(char innen, char ide) {
    cout<<"Tedd a korongot a(z)\t"<<innen<<"\t";
    cout<<" rudrol a(z) \t"<<ide<<"\t rudra. \n";
}

unsigned long fibr(int n) {
    if(n<2)
        return n;
    else 
        return fibr(n-1) + fibr(n-2);    
}