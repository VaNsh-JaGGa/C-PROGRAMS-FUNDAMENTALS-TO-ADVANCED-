#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[5] = {0,1,1,0,1};
    sort(arr,arr+5);
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<endl;
    }
}