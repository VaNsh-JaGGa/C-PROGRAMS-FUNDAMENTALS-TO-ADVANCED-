#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number plz : ";
    int x;
    cin>>x;
    int ans = 0;
    bool isNeg = false;
    if(x<0){
        isNeg = true;
        x = -x;
    }
    int digit;
    while(x>0){
       digit = x % 10; 
        ans = ans * 10 + digit;
        x /= 10;
    }
    if(isNeg){
        cout<<-ans;
    }
    else{
        cout<<ans;
    }
}