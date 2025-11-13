#include<iostream>
using namespace std;

int printSum(int a , int b);
int main(){
    cout<<"hello duniya";
    int ans = printSum(5,10);
    cout<<ans;
    return 0;
}
int printSum(int a ,int b){
    return a+b;
}