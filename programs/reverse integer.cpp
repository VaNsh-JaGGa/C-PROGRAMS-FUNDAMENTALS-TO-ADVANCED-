#include<iostream>
using namespace std;

int main(){
    int num ,digit;
    cin>>num;
    int reverse = 0;
    while(num!=0){
        digit = num%10;
        reverse = reverse * 10 + digit;
        num/=10;
    }
    cout<<reverse;
}