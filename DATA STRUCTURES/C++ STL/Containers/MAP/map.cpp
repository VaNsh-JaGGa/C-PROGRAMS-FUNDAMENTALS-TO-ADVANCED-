#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation of unordered map --- 1
    unordered_map<string,string> table;
    //insertion --- 2
    table["in"] = "india";
    table.insert(make_pair("en","england"));

    //how to create pair --- and insert --- 2 and 3
    pair<string,string> pair;
    pair.first="br";
    pair.second="brazil";

    table.insert(pair);

    // size --- 4
    // cout<<table.size()<<endl;

    // clear() --- 5
    // table.clear();
    // cout<<table.size()<<endl;

    // empty() --- 6
    // if(table.empty()==true){
    //     cout<<"empty"<<endl;
    // }
    // else{
    //     cout<<"not empty"<<endl;
    // }

    // at() --- 7
    cout<<table.at("in")<<endl;
    // // cout<<table["in"]<<endl;
    // // table["in"] = "india2";
    // table.at("in") = "india2";

    // cout<<table.at("in")<<endl;

    // iterator() --- 8
    // unordered_map<string,string>::iterator it = table.begin();
    // while(it != table.end()){
    //     pair<string,string> p = *it;
    //     cout<<g.first<<" "<<p.second<<endl;
    //     it+++
    // }cout<<endl;

    // size --- 9
    // cout<<table.size()<<endl;
    // //erase and size --- 9 and 10
    // table.erase(table.begin(),table.end());
    // cout<<table.size()<<endl;

    // find() -- if the key is present , it returns the iterator at a specified posiiton --- 11
    // if(table.find("in") != table.end()){
    //     cout<<"key found";
    // }
    // else{
    //     cout<<"key not found";
    // }

    // count -- tells how much time the key is existing in a map. --- 12
    // if(table.count("im") == true){
    //     cout<<"key is present"<<endl;
    // }
    // else{
    //     cout<<"key is not present";
    // }
}