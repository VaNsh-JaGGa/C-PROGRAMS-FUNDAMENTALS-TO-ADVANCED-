#include<iostream>
#include<cstring>
using namespace std;

void reverseCharacterArray(char arr[] , int size){
    int s = 0;
    //yahan mai galti karta -- 
    // e = end - 1; 
    int e = strlen(arr) - 1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    char v[10];
    cin>>v;
    // cout<<v<<endl;
    reverseCharacterArray(v , 10);
    cout<<v;
}