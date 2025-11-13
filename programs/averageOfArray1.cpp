#include<iostream>
using namespace std;

int AverageOfArray(int Vansh[],int size){
    int sum = 0;
    // int average = 0;
    for(int i=0; i<=size-1; i++){
        // mistake 1 -- question dimag me hi nahi hai
        sum = sum + Vansh[i];
    }
    return sum/(size-1);
}
int main(){
    int Vansh[5] = {10,20,30,40};
    int answer = AverageOfArray(Vansh,5);
    cout<<answer;
}