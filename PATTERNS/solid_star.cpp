//idhar as we have to print square matlab idhar ek hi variable lene se ho jaega print
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}