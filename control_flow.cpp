#include<iostream>
using namespace std;

int main(){
    int budget;

    cout << "Enter your budget :" << endl;
    cin >> budget;
    if(budget>=2000000){
        cout << "You can buy Scorpio " << endl;
    }
    else{
        cout << "You cannot buy scorpio" << endl;
    }
    return 0;
}