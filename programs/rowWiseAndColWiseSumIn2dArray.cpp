#include <iostream>
using namespace std;

// void rowWiseSum(int arr[][3], int rowsize , int colsize){

//   for(int row=0; row<rowsize ; row++){
//     int sum = 0;
//   for(int col=0 ; col<colsize ; col++){
//     sum = sum + arr[row][col];
//   }
//   cout<<sum<<endl;
//   }
// }

void colWiseSum(int arr[][4],int rowsize , int colsize){
  for(int col=0; col<colsize ; col++){
    int sum =0;
    for(int row=0; row<rowsize ; row++){
        sum = sum + arr[row][col]; 
    }
    cout<<sum<<endl;
  }
}

int main() {
  //row wise
  // int arr[3][3]={
  //   {10,11,12},
  //   {5,6,7},
  //   {9,8,2}
  // };
  // rowWiseSum(arr,3,3);

  int arr1[3][4] = {
    {2,8,5,10},
    {4,2,5,5},
    {5,4,6,10}
  };

      colWiseSum(arr1 , 3, 4);

  return 0;
}