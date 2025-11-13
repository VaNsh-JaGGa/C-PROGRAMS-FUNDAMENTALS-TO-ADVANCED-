#include<iostream>
using namespace std;

int main(){
    // int arr [5] [5];
    // for(int row = 0; row < 5 ; row++){
    //     for(int col = 0 ; col < 5; col++){
    //         cin>>arr[row][col];
    //     }cout<<endl;
    // } 

    int arr [3] [2] = {
        {10,20},
        {30,40},
        {50,60}
    };


    // for(int row = 0; row < 3 ; row++){
    //     for(int col = 0 ; col < 2; col++){
    //         cout<<arr[row][col]<<" ";
    //     }cout<<endl;
    // } 

    for(int col = 0 ; col < 2 ; col++){
        for(int row = 0 ; row < 3 ; row++ ){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
}