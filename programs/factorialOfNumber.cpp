#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num; 
    int fact = 1;
    while(num>0){
        fact = fact * num;
        num--;
    }
    cout<<fact;
}