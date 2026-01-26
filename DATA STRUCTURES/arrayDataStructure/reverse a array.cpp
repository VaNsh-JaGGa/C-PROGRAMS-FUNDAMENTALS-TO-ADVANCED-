#include<iostream>
using namespace std;

void SwappingFactory(int arr1[],int size){
    int i=0;
    int j=size-1;

    while(i<=j){
        swap(arr1[i],arr1[j]);
        i++;
        j--;
    }
}

void PrintingFactory(int arr[],int size){
    for(int i=0; i<=(size-1); i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[5] = {10,20,30,40,50};
    PrintingFactory(arr,5);
    SwappingFactory(arr,5);
    PrintingFactory(arr,5);
}