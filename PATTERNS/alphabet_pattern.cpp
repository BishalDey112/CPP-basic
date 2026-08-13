#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number";
    cin>>n;
    for(int i = 1 ; i<=n;i++){
        for(int j =1 ; j<=n;j++){
            cout<<(char)(64+i);//Idhar bass type cast kiya hai using j+64 and char ko laga diya saath mein
        }
        cout<<endl;
    }
    return 0;
}