#include <iostream>
using namespace std;
#include<limits.h>

void maximumElement(int arr[],int size){
    int i=0;
    int j= size-1;
    int maxi = INT_MIN;
    while(i<=j){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        i++;
    }
    cout <<"maximum value is :"<<maxi;
}

int main(){
    // Find the Maximum Element in an Array
    int arr[5] = {1,5,2,3,4};
    maximumElement(arr,5);
}