#include <iostream>
#include<cmath>
using namespace std;

int BinaryToDecimalMethod1(int x)
{
    //division method
    int decimal = 0;
    int i = 0;
    int bit;
    while(x){
        bit = x % 10;
        decimal = decimal + bit * pow(2,i++);
        x/=10;
    } 
    //
    return decimal;
}

int BinaryToDecimalMethod2(int x)
{
    //bitwise method
    int decimal = 0;
    int i = 0;
    int bit;
    while(x){
        bit = (x & 1);
        decimal = decimal + bit * pow(2,i++);
        x=x>>1;
    } 
    //
    return decimal;
}

int main()
{
    int binaryno;
    cout<<"Enter the binary number to convert :"<<endl;
    cin>>binaryno;
    cout<<BinaryToDecimalMethod2(binaryno);
    return 0;
}