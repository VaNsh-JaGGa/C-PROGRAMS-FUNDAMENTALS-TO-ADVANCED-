#include<iostream>
using namespace std;

int main(){
    int count = 0;
    string v = {"aaa"};
    for(int i=0; i<v.length(); i++){
        for(int j =i; j<v.length(); j++) {
            count++;
        }
    }
    cout<<count;
}