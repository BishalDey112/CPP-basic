#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter your grade:" << endl;
    cin >> grade;
    switch(grade){
        case 'A':cout << "Your grade is between 90 to 100" << endl;
        break;
        case 'B':cout << "Your grade is between 80 to 90" << endl;
        break;
        case 'C':cout << "Your grade is between 70 to 80" << endl;
        break;
        case 'D':cout << "Your grade is between 60 to 70" << endl;
        break;
        default:cout << "Your grade is between 0 to 60" << endl;
    }
}