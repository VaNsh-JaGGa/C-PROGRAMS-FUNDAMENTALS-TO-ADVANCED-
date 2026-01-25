#include <iostream>
using namespace std;

void CopyForArray(int arr[],int arr1[], int size){
    int i=0;
    int j=size-1;

    while(i<=j){
        arr1[i] = arr[i];
        i++;
    }
}

void multiplyBy10(int arr2[],int size){
    int i=0;
    int j= size-1;

    while(i<=j){
        arr2[i] = arr2[i] * 10;
        i++;
    }
}

void PrintArray(int arr3[],int size){
    int i=0;
    int j=size-1;

    while(i<=j){
        cout<<arr3[i]<<endl;
        i++;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int arr1[5];
    CopyForArray(arr,arr1,5);
    multiplyBy10(arr1,5);
    PrintArray(arr1,5);
    PrintArray(arr,5);
}