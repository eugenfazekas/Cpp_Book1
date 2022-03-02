#include <iostream>

using namespace std;

class RosszOsztaly {
    public:
        int a;
        void init(int x) {a = x;}
};

int main() {
    RosszOsztaly x;
    RosszOsztaly y = x;
    RosszOsztaly *px;
    px = new RosszOsztaly;
    x.a = 12; px->a = 23;
    x.init(12); px->init(23);
    *px = x;
    delete px;
}