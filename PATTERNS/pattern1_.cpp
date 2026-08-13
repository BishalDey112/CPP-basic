#include<iostream>
using namespace std;
//basically idhar nested loops wagera parna parega and samaj k uske according kaam wagera karna parega
//like nested loops phir nested if -else wagera
//ek k andar ek type of things 

// m*n k star rectangle banana hai socho so accordingly kaam karte hai

int main(){
    int m;int n;
    cout << "Enter the number of n" << endl;
    cin >> n;
    cout << "Enter the number of m" << endl;
    cin >> m;
    for (int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;


}