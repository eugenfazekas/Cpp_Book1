#include <iostream>

using namespace std;

class FiboSor {
    protected:
        unsigned a0, a1;
    public:
        FiboSor(): a0(0), a1(1) {}
        void Restart() {a0 = 0, a1 = 1;}

        int operator() () {
            unsigned a2;
            a2 = a0 + a1,  a1 = a2, a0 = a1; 
            return a2;
        }    

};

int main() {
    FiboSor Fibo;
    for(int i = 1; i < 15; i++)
        cout<<Fibo()<<" ";
    Fibo.Restart();
    cout<<endl;
    for(int i = 1; i < 15; i++)
        cout<<Fibo()<<" ";    
}