#include<iostream>
using namespace std;

void printTriplets(int arr[] , int size){
    for(int i=0; i<size ; i++ ){
        for(int j=0 ; j<size ; j++){
            for(int k=0; k<size;k++){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<") ,";
            }
        }
    }
}

int main(){
    
    int arr[5] = {10,20,30,40,50};

    printTriplets(arr , 5 );
}