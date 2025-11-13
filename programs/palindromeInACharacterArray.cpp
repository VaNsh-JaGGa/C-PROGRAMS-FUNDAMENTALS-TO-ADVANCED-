#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char arr[] , int size){
    int s = 0;
    int e = strlen(arr) - 1;

    while(s<=e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char v[10];
    cin>>v;

    bool ans =  checkPalindrome(v,10);

    cout<<"the character array is palindrome (1) or not(0):"<<ans;
}