#include<iostream>
#include<limits.h>
using namespace std;


int maximumElementValue(int arr[][3] , int rowsize , int colsize){
  int mini = INT_MIN;
  for(int row=0; row<rowsize ; row++){
    for(int col =0; col<colsize ; col++){
      int value = arr[row][col];
      if(value>mini){
        mini = value;
      }
    }
  }
  return mini;
}



int main(){
  int arr[3][3]={
    {1,2,3},
    {4,5,9},
    {6,7,8}
  };

  int ans = maximumElementValue(arr,3,3);
  cout<<ans;

}