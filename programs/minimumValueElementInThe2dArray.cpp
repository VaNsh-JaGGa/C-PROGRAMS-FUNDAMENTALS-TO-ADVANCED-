#include<iostream>
#include<limits.h>
using namespace std;


int minimumElementValue(int arr[][3] , int rowsize , int colsize){
  int maxi = INT_MAX;
  for(int row=0; row<rowsize ; row++){
    for(int col =0; col<colsize ; col++){
      int value = arr[row][col];
      if(value<maxi){
        maxi = value;
      }
    }
  }
  return maxi;
}



int main(){
  int arr[3][3]={
    {1,2,3},
    {4,5,0},
    {6,7,8}
  };

  int ans = minimumElementValue(arr,3,3);
  cout<<ans;

}