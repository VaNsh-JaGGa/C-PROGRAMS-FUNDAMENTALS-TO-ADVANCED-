#include<iostream>
using namespace std;

int main(){
    int smallest = 9;
    int num;
    cout<<"enter the number :";
    cin>>num;

    int hold;

    while(num!=0){
        hold= num % 10;
        if(hold<smallest){
            smallest = hold;
        }
        num = num/10;
    }
    cout<<"the smallest digit is : " <<smallest;
}
