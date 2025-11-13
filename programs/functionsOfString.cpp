#include<iostream>
using namespace std;

int main(){
    string V = {"vansh"};
    cout<<V<<endl;

    if(V.empty()){
        cout<<"string is empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    string ans = V.substr(2,3);
    cout<<ans<<endl;

    int n = V.find("ns");
    cout<<n<<endl;
    
    int h = V.find("ns",3);
    cout<<h<<endl;

    int k = V.find('h');
    cout<<k<<endl;

    string first_name = "jagga";
    string last_name = "jagga";

    int anss = first_name.compare(last_name);
    cout<<anss<<endl;
}