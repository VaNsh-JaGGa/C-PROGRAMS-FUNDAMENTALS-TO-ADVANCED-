#include<iostream>
using namespace std;

void Multiply(int brr[] ,int arr[] , int size){
    for(int i=0 ; i<size; i++){
       brr[i] = arr[i]*10;
       cout<<brr[i]<<" ";
    } 
}

int main(){
    int arr[4] = {10,30,10,50};
    int brr[4];
    Multiply(brr, arr , 4);

    cout<<brr[3];
}