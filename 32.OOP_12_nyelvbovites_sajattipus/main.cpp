#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

class stringc {
    public:
        stringc();
        stringc(char);
        stringc(const char * );
        stringc(const stringc&);
        ~stringc(void) {delete[] p;}
        char& operator[] (int);
        stringc operator = (stringc);
        bool operator == (stringc);
        operator char * () const { return p;}
        operator int() { return h; }
        stringc operator + ( stringc );
        friend stringc operator + (stringc, char);
        friend stringc operator + (char, stringc);
        friend ostream& operator<< (ostream&, const stringc &);
        friend istream& operator>> (istream&, stringc &);
    private:
        char * p;
        int h;
        stringc(int);    
};

stringc::stringc() {
    h = 0;
    p = new char[1]; assert(p!=0);
    *p = 0;
}

stringc::stringc(char c) {
    h = 1;
    p = new char[2]; assert(p!=0);
    p[0] = c;
    p[1] = 0;
}

stringc::stringc(const char * s) {
    h = strlen(s);
    p = new char[h+1]; assert(p!=0);
    strcpy(p,s);
}

stringc::stringc(const stringc& s) {
    h = s.h;
    p = new char[h+1]; assert(p!=0);
    strcpy(p, s.p);
}

stringc::stringc(int n) {
    p = new char[n+1]; assert(p!=0);
    p[0] = 0;
    h = n;
}

char& stringc::operator[](int i){
    if(i < 0 || i > h)
        throw "Indexhatar tullepes! \n";
    return p[i];     
}

bool stringc::operator== (stringc s) {
    return !strcmp(p, s.p);
}

stringc stringc::operator=(stringc s) {
    if(this == &s )
        return * this;
    delete p;
    h = s.h;
    p = new char[h+1]; assert(p!=0);
    strcpy(p, s.p);
    return * this;    
}

stringc stringc :: operator + (stringc s) {
    int th = h +s.h;
    stringc ts (th);
    strcpy(ts.p, p);
    strcat(ts.p, s.p);
    return ts;
}

stringc operator + (stringc s, char c) {
    stringc cs(c);
    return s + cs;
}

stringc operator + (char c ,stringc s) {
    stringc cs(c);
    return cs +s;
}

ostream& operator<< (ostream & out, const stringc & s) {
    out<<s.p;
    return out;
}

istream& operator >> (istream & in,stringc & s) {
    char cp[256];
    in.getline(cp,256);
    s = stringc(cp);
    return in;
}

int main() {
    stringc s1;
    stringc s2 ("Lafenita");
    stringc s3 = s2;
    stringc s4 = "C#  nyelv";

    cout<<"Kerek egy nevet: ";
    cin>>s1;
    cout<<s1<<endl;

    s3="Stroustrup";
    s1 = s3;
    s4[1] = s4[2] = '+';
    cout<<s4<<endl;

    if(s1 == s3) {
        s2 = s1 + stringc(" & ")+ s4;
        s3 = s2 + '\n';
        cout<<s3;
    }

    s2 = '{' + s2 + '}';
    cout<<s2<<endl;
    char * sp = new char[s2];
    strcpy(sp,s2);
    cout<<s2<<endl;
}