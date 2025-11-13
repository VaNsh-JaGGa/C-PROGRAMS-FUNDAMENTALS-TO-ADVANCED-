#include<iostream>
using namespace std;

void rowViseTraversal(int arr[][2] , int rowsize , int colsize){
    for(int row = 0; row<rowsize ; row++){
        for(int col =0; col<colsize; col++){
            cout<<arr[row]<<arr[col];
        }
    }
}

int main(){
    //declaration and initialization
    // int arr[3][2] ={{1,2},{3,4},{5,6}};
    //access using index
    // cout<<arr[2][1];
    //input values in array
    // int arr1[3][4];
    // for(int i = 0; i<3 ; i++ ){
    //     for(int j = 0; j<4 ; j++){
    //         cin>>arr1[i][j];
    //     }
    // }

    int arr[2][2] = {
        {10,20},{30,40}
    };

    rowViseTraversal(arr , 2 , 2);




}