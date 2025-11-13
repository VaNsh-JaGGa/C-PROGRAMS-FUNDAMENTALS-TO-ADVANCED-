#include<iostream>
using namespace std;

int  main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};

    cout<<"Before reversing the array"<<endl;
    for(int i = 0; i<6 ; i++){
        cout<<arr[i]<<endl;
    }


    int i = 0;
    int j = 6-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    } 

    cout<<"After reversing the array"<<endl;

    for(int i = 0; i<6 ; i++){
        cout<<arr[i]<<endl;
    }
}