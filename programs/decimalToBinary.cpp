#include<iostream>
#include<cmath>
using namespace std;

int DecimalToBinaryMethod1(int x){
    //divisionMethod
    int binarynumber = 0;
    int i = 0; 
    while(x>0){
        int bit = x % 2;
        binarynumber = bit*pow(10,i++)+binarynumber;
        x/=2;
    }
    return binarynumber;
}

int DecimalToBinaryMethod2(int x){
    //bitwiseMethod
    int binarynumber = 0;
    int i = 0; 
    while(x > 0){
        int bit = (x & 1);
        binarynumber = bit*pow(10,i++) + binarynumber;
        x=x>>1;
    }
    return binarynumber;
}

int main(){
    cout<<"please enter the value for convert: ";
    int n;
    cin>>n;
    int binary = DecimalToBinaryMethod1(n);
    cout<<binary;
    return 0;
}

