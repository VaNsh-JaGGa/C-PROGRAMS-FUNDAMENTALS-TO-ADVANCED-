#include<iostream>
using namespace std;
int main(){
    
    int arr[6] = {10,20,30,40,50,60};
    int lastValue = arr[5];

    cout<<lastValue<<endl;

    for(int i=6-1; i>0 ; i--){
        if(arr[i]!=0){
            arr[i] = arr[i-1];
        }
    }
    arr[0] = lastValue;

    for(int i=0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}