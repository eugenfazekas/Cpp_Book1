#include "random.h"

using namespace nsrandom;

namespace{
    const short SZORZO = 97;
    const int OSZTO = 0x1000;
    const short NOVELES = 59;
    unsigned short int pseudo = 0;
}

void nsrandom::set_random(unsigned short int init) {
    pseudo = init;
}

unsigned short int nsrandom::random(void) {
    pseudo = (SZORZO * pseudo + NOVELES) % OSZTO;
    return pseudo;
}