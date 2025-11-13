#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void sortZeroesAndOnes(int arr[] , int size){
int l = 0;
int r = size - 1;
while(l<r){
    if(arr[l]==0){
        l++;
    }
    else if(arr[r]==1){
        r--;
    }
    else{
        swap(arr[r],arr[l]);
        l++;
        r--;
    }
}
}
int main(){
    int arr[7] = {0,1,0,0,1,1,0};
    sortZeroesAndOnes(arr,7);
    printArray(arr,7);

}