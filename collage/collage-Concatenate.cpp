#include <iostream>
using namespace std;

void concatinationOfTwoArrays(char arr1[],int x, char arr2[] ,int y, char arr3[],int z){
    int i=0;
    int j=0;
    int k=0;

    while(k<z){
        if(i<x && j<y){
            arr3[k++]=arr1[i++];
            arr3[k++]=arr2[j++];
        }
    }

    while(i<x){
        arr3[k++] = arr1[i++];
    }
    while(j<y){
        arr3[k++] = arr2[j++];
    }
}

void helo(char arr3[],int z){
    for(int i=0;i<z;i++){
        cout<<arr3[i];
    }
}

int main(){
    char arr1[2] = {'a','b'};
    char arr2[4] = {'c','d','e','f'};

    char arr3[6];
    concatinationOfTwoArrays(arr1,2,arr2,4,arr3,6);
    helo(arr3,6);
}