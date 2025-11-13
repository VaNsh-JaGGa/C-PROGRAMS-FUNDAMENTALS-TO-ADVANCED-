#include<iostream>
using namespace std;

void average(int arr[] , int size){
    int sum = 0;
    for(int i=0 ; i<size; i++){
        sum = sum + arr[i];
    } 
    cout<<sum/size;
}

int main(){
    int arr[4] = {10,30,10,50};
    average(arr , 4);
}