#include <iostream>
#include <algorithm>
using namespace std;

void InputterArray(char arr[],int size){
    int i = 0;
    // int j=arr.size()-1;
    int j = size - 1;
    while(i<=j){
        cin>>arr[i];
        i++;
    }
}

void PrintArray(char arr[],int size){
    int i=0;
    // int j=arr.size()-1;
    int j = size - 1;
    while(i<=j){
        cout<<arr[i];
        i++;
    }
}

int main(){
    // int arr[]={10,20};
    // cout<<(arr.size());
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    // PrintArray(arr,2);

    //using of fill funciton 
    // int arr1[5]={6};
    // fill(arr1+1,arr1+5,7);
    // PrintArray(arr1,5);

    // homework 
    char arr2[10];
    InputterArray(arr2,10);
    PrintArray(arr2,10);
    

    // this all is just basics now you can move towards the RED BATCH ON CODEHELP
}