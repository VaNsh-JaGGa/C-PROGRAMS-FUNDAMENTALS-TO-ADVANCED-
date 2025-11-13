#include<iostream>
using namespace std;

void ReverseAnArray(int Radhe[] , int size){
    int start = 0;
    int end = size-1;

    while(start <= end){
        // int first = Radhe[start];
        // int last = Radhe[end];
        // int tempo = first;

        // Radhe[start++] = last;
        // Radhe[end--] = tempo;
        swap(Radhe[start],Radhe[end]);
        
        start++;
        end--;
    }
}

void PrintArray(int Radhe[] , int size){
    for(int i=0; i<=size-1; i++){
        cout<<Radhe[i];
        cout<<endl;
    }
}
int main(){
    int Radhe[10] = {10,20,30,40,50,60,70,80,90,100};
    ReverseAnArray(Radhe,10);
    PrintArray(Radhe,10);
}