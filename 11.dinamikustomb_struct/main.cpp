#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Book {
    string nev;
    string cim;
    int ev;
    float ar;
};

Book books[] =  { 
                    {"Angular","Angular 9",2018, 45},
                    {"Java","Java 8",2011, 10},
                    {"Spring","SpringBoot",2017, 30},
                    {"Sql","Sql db",2010, 20},
                    {"Docker","Docker in action",2018, 35},
            }; 

void print(Book book) {
        cout<<"A konyv neve: "<<book.nev;
        cout<<", A konyv cime: "<<book.cim;
        cout<<", A konyv kiadasi eve: "<<book.ev;
        cout<<", A konyv ara: "<<book.ar<<endl;
}    

int main() {

    // Create array
        Book * dlib;

        int dummy_array_size = (sizeof(books)/sizeof(*books)); 

        dlib = new Book[dummy_array_size];

    // Populate array

        for (int i = 0; i < dummy_array_size; i++ )
            dlib[i] = books[i];

    // Sort array    
        for (int i = 0; i < dummy_array_size; i++ )
            for (int j = i + 1; j < dummy_array_size; j++ ){
                if( dlib[i].nev.compare(dlib[j].nev)>0)
                    swap(dlib[i],dlib[j]);
            }

    // Print array
        for (int i = 0; i < dummy_array_size; i++ )
            print(dlib[i]);

        delete[] dlib;
}
