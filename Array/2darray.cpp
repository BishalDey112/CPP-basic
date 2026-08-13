#include<iostream>
using namespace std;

int main(){
    // int arr[2][4]={{1,2,3,4},{5,6,7,8}};
    int arr[2][4];
    int row =2;
    int col=4;

    //idhar user se input le rahe hai for the 2d array
    for(int row_index=0;row_index<=row-1;row_index++){
        for(int col_index=0;col_index<=col-1;col_index++){
            cout<<"Enter the value of ["<<row_index<<"]["<<col_index<<"]";
            cin>>arr[row_index][col_index];
        }
        cout<<endl;
    }
    for(int row_index=0;row_index<=row-1;row_index++){
        for(int col_index=0;col_index<=col-1;col_index++){
            cout<<arr[row_index][col_index]<<" ";
        }
        cout<<endl;
    }
    // cout<<arr[1][3]<<endl;
    return 0;
}