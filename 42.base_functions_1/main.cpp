#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {

   char stringBuffer[] = "12345678 Welcome";


   // getchar();  // read char from console
   // putchar('c'); // write char to console

   int szam_betu  = isalnum('1'); // ha szam vagy betu akkor nagyobb mint 0-val ter vissza;
   int betu  = isalpha('1'); // ha betu akkor nagyobb mint 0-val ter vissza;
   int vezerlo_karakter  = iscntrl('1'); // ha vezerlo_karakter akkor nagyobb mint 0-val ter vissza;
   int szam  = isdigit('a'); // ha szam akkor nagyobb mint 0-val ter vissza;
   int lower_case = islower('a'); // ha kisbetu akkor nagyobb mint 0-val ter vissza;
   int is_space = isspace('\t'); // ha szokoz,kocsivissza,ujsor,tabulator akkor nagyobb mint 0-val ter vissza;
   int is_upper = isupper('a'); // ha nagybetu akkor nagyobb mint 0-val ter vissza;
   char a = toupper('a'); // nagybetuve alakit;
   char b = toupper('B'); // kissbetuve alakit;


   char * str1  = stringBuffer;
   int at = atoi(str1); //convert string to integer
 
   char intBuffer[20];      //convert integer to string 
   itoa(at,intBuffer,10);   // here 10 means decimal
   cout<<"intBuffer: "<<intBuffer<<endl;

   // find char in string
   char * pch;
   pch = (char*) memchr (str1, 'W', strlen(str1));
   if (pch!=NULL)
      printf ("'W' found at position %d.\n", pch-str1+1);
   else
      printf ("'W' not found.\n");
}