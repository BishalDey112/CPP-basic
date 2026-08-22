#include<iostream>
using namespace std;
void solve(int *arr ){
    cout<<sizeof(arr);
}

int main(){
    // int number = 50;
    // int *ptr = &number;
    // cout<< "Printing the address of the number: "<<&number<<endl;
    // cout<<number<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // (*ptr)++;
    // cout<<"The updated number is "<<number<<endl;
    // int arr[4]={1,2,3,4};
    // cout<<sizeof(arr)<<endl;
    // solve(arr);
    // return 0;


    // int *ptr = new int[5];  
    // ptr[0]= 5;
    // ptr[1]= 30;
    // ptr[2]= 40;
    // ptr[3]= 40;
    // for(int i=0; i<4;i++){
    //     cout<<ptr[i]<<" ";
    // }
    // delete[] ptr;

    int a = 5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr; 
    cout << a<<endl;
    cout<< &a<<endl;
    cout << ptr<<endl;
    cout << *ptr<<endl;
    cout << &ptr<<endl;
    cout <<*ctr<<endl;
    cout<<**ctr<<endl;
    cout<<ctr<<endl;
    cout<<&ctr<<endl;
    cout<<*dtr<<endl;
    cout<<**dtr<<endl;
    cout<<***dtr<<endl;
    cout<<&dtr<<endl;



    return 0;
}
