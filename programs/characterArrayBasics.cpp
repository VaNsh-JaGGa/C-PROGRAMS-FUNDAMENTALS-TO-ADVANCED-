#include<iostream>
using namespace std;

int lengthcalculate(char arr[] , int size){
    int index = 0; 
    int count = 0;
    while(arr[index]!='\0'){
        if(arr[index] == ' '){
            arr[index] = 'X';
        }
    }
    cout<<arr[index];
}
int main(){
    // char c[10];
    // cin>>c;
    // for(int i=0; i<10 ; i++){
    //     cout<<c[i]<<endl;
    // }
    // cout<<"hi";
    // cout<<c;
    // char chh[4];
    // chh[0]='A';
    // chh[1]='B';
    // chh[2]='C';
    // chh[3]='D';
    //  cout<<chh;
    // char ch = chh[5];
    // int value = (int)ch;
    // cout<<value; 
    char v[30];
    // cout<<v[3];
    // cin>>v;
    // cout<<v;
    // for(int i = 0; i < 5 ; i++){
    //     cin>>v[i];
    // }
    //  for(int i = 0; i < 5 ; i++){
    //     cout<<v[i];
    // }
    // cout<<v;
    cin.getline(v,30);
    cout<<v;
    lengthcalculate(v,30);
}