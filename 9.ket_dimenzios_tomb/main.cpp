#include <iostream>

using namespace std;

int matrix[3] [5] = {
                        {4,26,90,19,11},
                        {13,30,70,79,9},
                        {7,87,60,23,12}
                    };

int main () {
    int emax,emin;
    for(int i = 0; i < 3; i++)
            for(int j = 0; j < 5; j++){
                if(matrix[i][j] > emax)
                    emax = matrix[i][j];
                if(matrix[i][j] < emin)
                    emin = matrix[i][j];  
            }
    cout<<"Min: "<<emin<<endl; 
    cout<<"Max: "<<emax<<endl;  
    cout<<endl;
    
    for(int i = 0; i < 3; i++){
        cout<<"       ";
        for(int j = 0; j < 5; j++)
            cout<<'\t'<<matrix[i][j];
        cout<<endl; 
        }   
}