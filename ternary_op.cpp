#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    (age>18)? cout << "You can vote": cout << "You cannot vote" << endl;// question mark k baad output hota hai agar pehle wala sahi wo hoga or next wala
    return 0;
}