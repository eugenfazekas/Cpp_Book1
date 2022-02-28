#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string a = "string";
    char b[] = "char";
    char c;

    // char[] to string
    char* char_arr;
    char_arr = &a[0];
    cout << char_arr<<endl;

    // string to int
    string n = "12345";
    stringstream geek(n);
    int x = 0;
    geek >> x;
    cout << "Value of x : "<<x<<endl;

    // int to string
    int i = 3;
    string str = std::to_string(i);
    cout<<"str = "<<str<<endl;

}