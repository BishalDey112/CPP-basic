//Why array?
//Whenever we have to store a multiple number of 
//data of the same datatype then we can use array
//data structure to make the process easy
//ir takes continuous memory allocation

//what is an array?
//Arrays are used to store multiple values in a single variable instead of declaring seperate variables for each value.

#include<iostream>
using namespace std;

int main(){
    // int num1=10;
    // int num2=100;
    // int num3=200;
    //idhar itna sara variables banana 
    //par raha hai to store 

    //declaration of array
    // int Laxman[5];//idhar array ki size 5 hai so sirf 5 or usse kam values dal sakte hai or excess element k error aa jaega


    //initialization of the array
    // int hello[]={1,2,34,56,87};
    

    //how to access elements in an array?
    // int multipleof2[10]={2,4,6,8,10,12,14,16,18,20};//index size is 0-9
    //idhar index k concept use hota hai and uske help se we can access all the elements of the array
    //if we have an array of size n then the array then the index is from 0 to (n-1)
    // cout<< multipleof2[5]; 
    // cout<<endl;


    //idhar agar pura array print karna hai then ek loop chalana parega
    // for(int index =0; index<=9;index++){
    //     cout << multipleof2[index]<< " ";
    // }


    //input in an array?
    //we can take an input in array with the help of a loop like the way we used to print the array(traverse)
    // int arr[5];
    // for(int index=0;index<=4;index++){
    //     cout<<"Enter the value of the index["<<index<<"]";
    //     cin>>arr[index];
    //     cout<<endl;
    // }
    // for(int index=0;index<=4;index++){
    //     cout<<arr[index]<<" ";
    // }



    //sum in array
    // int arr[5]={10,20,30,40,50};
    // int sum =0;


    // for(int index=0;index<=4;index++){
    //     sum =sum +arr[index];
    // }
    // cout<<"Sum is "<<sum<<"";

    //continue from 27.28 video

    return 0;
}