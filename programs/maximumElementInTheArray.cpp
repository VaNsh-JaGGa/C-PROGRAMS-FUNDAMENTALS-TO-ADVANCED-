#include<iostream>
#include<limits.h>
using namespace std;

int maximumElement(int arr[] ,int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){
    int arr[5] = {20,30,40,50,60};
    int ans = maximumElement(arr , 5); 
    cout<<ans;
}