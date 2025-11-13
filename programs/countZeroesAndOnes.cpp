#include<iostream>
using namespace std;

void countZeroesAndOnes(int arr[],int size){
    int totalZeroesCount = 0;
    int totalOnesCount = 0;

    for(int i=0; i<size ; i++){
        if(arr[i]==0){
            totalZeroesCount++;
        }
        if(arr[i]==1){
            totalOnesCount++;
        }
    }

    cout<<"the total number of ones is:"<<endl<<totalOnesCount<<endl;
    cout<<"the total number of zeroes is: \n" <<totalZeroesCount;

}

int main(){
    int arr[12] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1 , 0 , 0 };

    countZeroesAndOnes(arr , 12);
    

}