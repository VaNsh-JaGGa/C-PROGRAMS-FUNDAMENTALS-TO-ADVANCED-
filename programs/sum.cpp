#include<iostream>
using namespace std;

int main(){
   int sum , num , lastDigit;
   cin>>num;
   sum=0;
   while(num>0){
    lastDigit = num%10;
    sum = sum + lastDigit;
    num/=10;
   }
   cout<<"The Total Of The Num Digits"<<endl;
   cout<<sum;
}