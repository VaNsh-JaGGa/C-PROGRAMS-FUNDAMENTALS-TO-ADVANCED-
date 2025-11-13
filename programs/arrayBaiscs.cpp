#include<iostream>
#include<algorithm>
using namespace std;

void printArray ( int arr[] ,int size ){
    for(int i = 0; i < size ; i++ ){
        cout<<"taking input for index "<<i <<endl;
        cin>>arr[i];
    }
}

int main(){

    // int var[10] = {1,2,3,4,5,6,7};
    int arr[10];
    cout<<arr;
    // fill(arr,arr+10,5);
    // cout<<arr[8];
    printArray(arr,10);
    
}