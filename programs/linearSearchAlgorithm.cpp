#include<iostream>
using namespace std;

int Traverse(int arr[] ,int size , int key){
    for(int i=0; i<=size-1; i++){
        if(arr[i] == key){
            return i;
        }
    }
    cout<<"sorry cant return anything \n";
}

int main(){
    int arr[5] = {5,7,9,11,13};
    int ans = Traverse(arr,5,13);
    cout<<ans;
}