#include<iostream>
using namespace std;

void print2dArray(int arr[][4],int size_row,int size_col){
    //printing the array via the function help
    cout<<"Printing the 2D array"<<endl;
    for(int row_index = 0; row_index<size_row;row_index++){
        for(int col_index =0;col_index<size_col;col_index++){
            cout<<arr[row_index][col_index]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[2][4];

    int row=2;
    int col=4;
    for(int row_index = 0; row_index<row;row_index++){
        for(int col_index =0;col_index<col;col_index++){
            cout<<"Enter the value of ["<<row_index<<"]["<<col_index<<"]";
            cin>>arr[row_index][col_index];
        }
        cout<<endl;
    }

    print2dArray(arr,row,col);
    return 0;
}