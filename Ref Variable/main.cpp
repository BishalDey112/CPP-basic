#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int &temp = a;//idhar temp is a reference of a
    cout <<temp<<endl;
    temp--;
    cout<<temp<<endl;
    temp= temp*temp;
    cout<<temp<<endl;
    a++;
    cout<<a;
    return 0;
}