// this is how call by value works
//idhar call carne se copy ho jata hai ek kisi value k


#include<iostream>
using namespace std;
// void solve(int a){
//     cout<<"inside function "<<a<<endl;
//     a++;
//     cout<<"function use kiya ab "<<a<<endl;
// }
// int main(){
//     int a = 10;
//     cout << "local "<<a<< endl;
//     solve(a);
//     cout<<"local maal "<<a<<endl;
//     return 0;
// }



//this is how call by reference works
// idhar sidha usko jisko refer kare usko hi value change kar dete hai



// void solve(int &arr){//ye sidha a ko hi target karke uska value change kar dega
//     cout<<"function marne se pehle "<<arr<<endl;
//     arr++;
//     cout<<"function marne k baad "<<arr<<endl;
// }
// int main(){
//     int a = 10;
//     cout<<"without function "<<a<<endl;
//     solve(a);
//     cout<<"After function "<<a<<endl;
//     return 0;
// }


//wapas ek pass by reference wala
//but using char data type
// void solve(int &a){//just the& sign changes from value to reference
//     cout << "inside function "<<a<<endl;
//     a++;
//     cout<<"inside function after call "<<a<<endl;
// }

// int main(){
//     int a = 5;
//     cout<<"Outside function "<<a<<endl;
//     solve(a);
//     cout<<"Outside function "<<a<<endl;
//     return 0;
// }


//abhi string k saath same refrence wala game khelte hai chalo
void solve(string &a){  
cout<<"inside function "<<a<<endl;
a = "Babbar";
cout<<"inside function "<<a<<endl;

}
int main(){
    string name  ="love";
    cout<<"inside main "<<name<<endl;
    solve(name);
    cout<<"inside main "<<name<<endl;
}
