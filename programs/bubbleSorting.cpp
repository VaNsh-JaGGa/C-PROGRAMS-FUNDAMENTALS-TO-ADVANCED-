#include <iostream>
#include<vector>
using namespace std;

void printAfterBubbleSort(vector<int> &hall){
  int n = hall.size();
  for(int i = 0; i<n ; i++){
    cout<<hall[i]<<endl;
  }
}


void bubbleSort(vector<int> &hall){
  int n = hall.size();
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(hall[j]>hall[j+1]){
        swap(hall[j],hall[j+1]);
      }
    }
  }
}



int main() {
  
  vector<int> hall = {20,1,52,21,11};
  bubbleSort(hall);
  printAfterBubbleSort(hall);

  return 0;
}