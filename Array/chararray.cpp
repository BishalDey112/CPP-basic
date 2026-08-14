//in cpp char array is a sequence of characters stored in a contiguous memory location, terminated by a null character (\0) to indicate the end of the string.



//this way we can convert from a lowe case to upper case
#include<iostream>
using namespace std;
// int main(){
//     char ch = 'p';
//     ch = ch - ('a' - 'A');
//     cout<< ch;
// }


//this way we can convert from a upper case to lower case letter
int main(){
    char ch = 'A';
    ch = ch + ('a' - 'A');
    cout<< ch;
} 
