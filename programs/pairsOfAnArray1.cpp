#include<iostream>
using namespace std;

void PrintPairsOfAnArray(int Pair[] , int size){
    for(int i=0; i <= size-1; i++){
        for(int j=0; j<=size-1; j++){
            cout<<Pair[i]<<","<<Pair[j]<<" -> ";
        }
        cout<<endl;
    }
}

void PrintNonDuplicatesPairsOfAnArray(int NonDuplicatePairArray[] , int size){
    for(int i=0; i<=size-1; i++){
        for(int j=i; j<=size-1;j++){
            cout<<NonDuplicatePairArray[i]<<","<<NonDuplicatePairArray[j]<<" -> ";
        }
        cout<<endl;
    }
}

void PrintTripletsOfAnArray(int Triplets[] , int size){
    for(int i=0; i<=size-1; i++){
        for(int j=0; j<=size-1; j++){
            for(int k=0; k<=size-1; k++){
                cout<<Triplets[i]<<","<<Triplets[j]<<","<<Triplets[k]<<" -> ";
            }
        }
        cout<<endl;
    }
}

//print triplets of an array where one element should be accessed only for one time.
void PrintNonDuplicatesTripletsOfAnArray(int arr[] , int size){
    for(int i=0; i<=size-1; i++){
        for(int j=i+1; j<=size-1;j++){
            for(int k=j+1; k<=size-1;k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" -> ";
            }
        }
        cout<<endl;
    }
}

int main(){

    int arrayName[4] = {10,20,30,40};

    // PrintPairsOfAnArray(arrayName,4);

    // PrintNonDuplicatesPairsOfAnArray(arrayName,4);

    // PrintTripletsOfAnArray(arrayName,4);

    PrintNonDuplicatesTripletsOfAnArray(arrayName,4);

}