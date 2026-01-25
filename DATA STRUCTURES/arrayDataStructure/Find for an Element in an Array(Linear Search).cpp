#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int target){
    int i =0;
    int j =size-1;

    while(i<=j){
        if(arr[i]==target){
            return i;
        }
        i++;
    }
    return -1;
}


int main(){
    //  Search for an Element in an Array
    int arr[5]={1,2,3,6,4};
    int ans = LinearSearch(arr,5,9);
    cout<<ans;
}