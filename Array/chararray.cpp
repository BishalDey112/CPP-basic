//in cpp char array is a sequence of characters stored in a contiguous memory location, terminated by a null character (\0) to indicate the end of the string.



//this way we can convert from a lowe case to upper case
#include<iostream>
using namespace std;
#include <cstring>
// int main(){
//     char ch = 'p';
//     ch = ch - ('a' - 'A');
//     cout<< ch;
// }


//this way we can convert from a upper case to lower case letter
// int main(){
//     char ch = 'A';
//     ch = ch + ('a' - 'A');
//     cout<< ch;
// } 
// int main(){
//     char arr[10] = "rahul";
//     cout<< arr[2];
//     cout<<endl;
//     cout<<"printing the sixth index :"<<arr[7]<<endl;//indhar dekh sakte hai 
//     //weather the character is null or not
//     return 0;
// }


//character arrry wala hai abhi



//chalo abhi ek character array k function bana lete hai
//idhar jab bhi hum koi bhi ek char array k function banate hai 
//hume bas array ko add karna hai and we do not have to 
//declare the size of the array



// lets make a function to find the size of a string
int getLength(char arr[]){
    int count =0;
    int index = 0;
    while(arr[index] != '\0'){
        count ++;
        index++;
    }
    return count;
}


//another function to concatinate two strings
void  ConcatArray(char a[], char b[]){
    int aIndex = getLength(a);
    int bIndex = 0;

    while(b[bIndex]!= '\0'){

        //start copying
        a[aIndex]=b[bIndex];
        aIndex++;
        bIndex++;
    }

    //end a string with null character
    a[aIndex!= '\0'];

}


//lets make a copying array
void copyArray(char actualArr[], char copyArr[]){
    int aIndex = 0;
    int bIndex = 0;
    while(actualArr[aIndex]!= '\0'){
        copyArr[bIndex]=actualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArr[bIndex] ='\0';
}   


//function for the compare two char arrays

bool compareChar(char a[], char b[]){
    int aIndex=0;
    int bIndex=0;
    int aLength = getLength(a);
    while(aIndex<=bIndex){
        if(a[aIndex]!=b[bIndex]){
            return false;
        }
        else{
            aIndex++;
            bIndex++;
        }
        //agar yaha tak apna program run hua then matlab
        //characters match ho gaya hai
    }
}

int main(){




    // function call of the compare function
    char a[30]="Love";
    char b[30]="lover";
    strcat(a,b);
    cout<<a;
    // cout<<compareChar(a,b)<<endl;


    // function call for the copyarr
    // char first[50] ="Tunu";
    // char gulu[50];
    // copyArray(first,gulu);
    // cout<<"The copy version of  gulu is"<< " "<< gulu <<endl;

    




    // funtion call of the getLength
    // char arr[] = "Bishal";
    // cout << getLength(arr);


    // function call for ConcatArray
    // char a[50]= "Bishal";
    // char b[50]= "Dey";
    // ConcatArray(a,b);

    // cout<<"The array concat of Bishal and Dey is "<<a <<endl;




    // int arr[]={1,23,4,5};
    // cout<<arr;cout<<endl;//idhar apna array k address print ho jaega
    // //yeh sirf integer array k saath hota hai but not with char
    // //agar intiger array banaya then cout karne se base address print ho jaega
    // char brr[]="Hello";
    // cout<<brr;
    return 0;

}
