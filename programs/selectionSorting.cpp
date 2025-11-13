#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printSelectionSortingAlgorithum(vector<int> &hall){
  for(int i=0; i<(hall.size()); i++){
    cout<<hall[i]<<" ";
  }
}

void selectionSortingAlgorithum(vector<int> &hall){
  int n = hall.size();
  for(int i=0; i<n; i++){
    int min = i;
    for(int j = i; j  < n; j++ ){
      if(hall[i]>hall[j]){
        min = j;
      }
      if(hall[i]>hall[min]){
        swap(hall[i],hall[min]);
      }
    }
  }
}

int main() {
  
  vector<int> hall = {44,33,55,22,11};
  selectionSortingAlgorithum(hall);
  printSelectionSortingAlgorithum(hall);

  return 0;
}