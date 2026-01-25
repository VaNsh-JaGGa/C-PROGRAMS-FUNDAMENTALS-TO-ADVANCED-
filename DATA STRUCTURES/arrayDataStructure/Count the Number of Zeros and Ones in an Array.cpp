#include <iostream>
using namespace std;

void CountZeroAndOne(int arr[],int size){
    int i=0;
    int j = size-1;

    int totalOnes = 0;
    int TotalZeroes = 0;
    while(i<=j){
        if(arr[i]==0){
            TotalZeroes++;
        }
        else if(arr[i]==1){
            totalOnes++;
        }
        i++;
    }
    cout<<"zero:"<<TotalZeroes<<endl<<"one:"<<totalOnes;
}

int main(){
    // Count the Number of Zeros and Ones in an Array
    int arr[7]={1,0,1,0,1,1,0};
    CountZeroAndOne(arr,7);
}