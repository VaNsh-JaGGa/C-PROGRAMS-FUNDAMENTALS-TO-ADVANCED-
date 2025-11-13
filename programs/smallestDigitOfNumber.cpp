#include<iostream>
using namespace std;

int main(){
    int num , lastDigit;
    cout<<"enter the number"<<endl;
    cin>>num;

    int smallest = 9;
    while(num!=0){
        lastDigit = num%10;
        if(lastDigit<smallest){
            smallest = lastDigit;
        }
        num /= 10;
    }
    cout<<smallest;

}