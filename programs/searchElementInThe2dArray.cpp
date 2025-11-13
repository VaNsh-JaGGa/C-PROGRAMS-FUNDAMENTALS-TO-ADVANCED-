#include<iostream>
using namespace std;

pair<int,int> searchOnElement(int arr[][3] , int rowsize , int colsize ,int target){
  //row wise traversing;
  // outer loop - row;
  //inner loop - col;
  for(int row=0 ; row<rowsize ; row++){
    for(int col=0; col<colsize ; col++){
      if(arr[row][col]==target){
        return {row,col};
      }
    }
  }
  return {-1,-1};

}
int main(){
  
  int arr[3][3] ={
    {1,2,10},
    {11,21,22},
    {33,44,55}
  };

  pair<int,int> ans = searchOnElement(arr,3,3,55);
  cout<<ans.first<<" "<<ans.second;
  return 0;
}