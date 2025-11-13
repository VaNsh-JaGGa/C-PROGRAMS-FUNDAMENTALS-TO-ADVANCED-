#include<iostream>
#include<limits.h>
using namespace std;

int MaximumValueInTheArray(int Jagga[], int size){
    int largest = INT_MIN;
    for(int i =0; i<=size-1; i++){
        if(largest < Jagga[i]){
            largest = Jagga[i];
        }
    }
    return largest;
}

int MinimumValueInTheArray(int Jagga[], int size){
    int smallest = INT_MAX;
    for(int i =0; i<=size-1; i++){
        if(smallest > Jagga[i]){
            smallest = Jagga[i];
        }
    }
    return smallest;
}

int main(){
    int Jagga[8] = {10,20,30,40,5,50,60,70};
    int BigAnswer = MaximumValueInTheArray(Jagga,8);
    cout<<BigAnswer<<endl;

    int SmallAnswer = MinimumValueInTheArray(Jagga,8);
    cout<<SmallAnswer<<endl;
}