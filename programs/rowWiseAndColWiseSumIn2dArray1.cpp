#include<iostream>
using namespace std;

void RowWiseSumOfAn2Darray(int arrayName[][4],int rowsize, int colsize){
  int sum = 0;  
    for(int i=0; i<=rowsize-1; i++){
        sum = 0;
        for(int j=0; j<=colsize-1 ; j++){
            sum = sum + arrayName[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}

void ColWiseSumOfAn2Darray(int arrayName[][4],int rowsize, int colsize){
  int sum = 0;  
    for(int i=0; i<=colsize-1; i++){
        sum = 0;
        for(int j=0; j<=rowsize-1 ; j++){
            sum = sum + arrayName[j][i];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}

int main(){
    
    int arrayName[3][4] = {
        {5,5,5,5},
        {10,10,10,10},
        {20,20,20,20},
    };

    RowWiseSumOfAn2Darray(arrayName,3,4);
    ColWiseSumOfAn2Darray(arrayName,3,4);

}