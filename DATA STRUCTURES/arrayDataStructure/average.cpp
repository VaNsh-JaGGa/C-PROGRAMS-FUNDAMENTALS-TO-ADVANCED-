#include <iostream>
#include <algorithm>
using namespace std;

void PrintAverage(char arr[],int size){
    int i=0;
    int j=size-1;

    int sum = 0;
    while(i<=j){
        sum = sum + arr[i];
        cout<<sum<<endl<<endl;
        i++;
    }
    cout<<(sum/size); 
}

int main(){
    char arr[5] = {'v','a','n','s','h'};
    PrintAverage(arr,5);
}