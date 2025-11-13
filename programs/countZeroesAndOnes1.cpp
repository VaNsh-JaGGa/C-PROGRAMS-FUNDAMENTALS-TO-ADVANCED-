#include<iostream>
using namespace std;

void CountZeroesAndOnes(int arr[], int size){
    int totalOnes = 0;
    int totalZeroes = 0;

    for(int i=0; i<=size-1; i++){
        if(arr[i]==0) totalZeroes++;
        if(arr[i]==1) totalOnes++;
    }
    cout<<"totalZeroes: "<<totalZeroes<<endl;
    cout<<"totalOnes: "<<totalOnes;
}

int main(){
    int arr[5] = {0,1,0,1,0};
    CountZeroesAndOnes(arr,5);
}