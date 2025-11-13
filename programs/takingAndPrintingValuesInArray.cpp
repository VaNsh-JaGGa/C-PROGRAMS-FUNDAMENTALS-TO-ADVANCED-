#include<iostream>
using namespace std;

int main(){
    int arr[10];

    int n;

    cin>>n;

    for(int i = 0; i<=n-1 ; i++ ){
        cout<<"enter the value for index : " << i <<endl;
        cin>>arr[i];
    }

    for(int i = 0; i<=n-1 ; i++ ){
        cout<<"value for index : " << i <<endl;
        cout<<arr[i];
        cout<<endl;
    }
    cout<<arr[12];
}