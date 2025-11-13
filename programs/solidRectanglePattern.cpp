#include<iostream>
using namespace std;

int main(){
    int n , m;
    cin>>n>>m;

    for(int x=1;x<=n;x++){
        for(int y=1;y<=m;y++){
            cout<<"* ";
        }
        cout<<endl;
    }

}