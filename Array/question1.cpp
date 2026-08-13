//write a function to populate an array with multiple of 10
#include<iostream>
using namespace std;
void MultipleOf10(int arr[],int size){
    //printing part of the function
    for(int index =0;index<=9;index++){
        cout<<arr[index]<< " ";
    }

}

int main(){

    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    cout<<"The multiple of 10 is down below"<<endl;
    MultipleOf10(arr,size);

    return 0;
}