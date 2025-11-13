#include<iostream>
using namespace std;

void RowWiseTravesal(int ArrayName[][3] , int rowsize , int colsize){
    for(int i=0; i<=rowsize-1;i++){
        for(int j=0; j<=colsize-1;j++){
            cout<<ArrayName[j][i]<<" ";
        }
        cout<<endl;
    }
}

void ColWisetraversal(int ArrayName[][3] , int rowsize , int colsize){
    // for(int i=0; i<=colsize-1; i++){
    //     for(int j=0; j<=rowsize-1;j++){
    //         cout<<ArrayName[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // it is good practice when the rows and cols size are different

    // for(int i=0; i<=rowsize-1;i++){
    //     for(int j=0; j<=colsize-1;j++){
    //         cout<<ArrayName[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    //this is bad practice.
}

int main(){
    //declaration
    // int TwoD[3][3];

    //Definitiono of 2D array
     int TwoD[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
     };

     RowWiseTravesal(TwoD,3,3);
     ColWisetraversal(TwoD,3,3);
}