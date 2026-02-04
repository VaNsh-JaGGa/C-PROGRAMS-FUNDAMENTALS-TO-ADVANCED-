#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    //creation of a set --- 1
    unordered_set<int> s;
    
    //insertion --- 2
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(8);
    s.insert(6);

    //size --- 3
    cout<<s.size()<<endl;
    //clear --- 4
    // s.clear();
    // cout<<s.size()<<endl;

    //empty() --- 5
    // if(s.empty()==true){
    //     cout<<"set is empty";
    // }

    //erase --- 6
    // s.erase(s.begin(),s.end());
    // cout<<s.size();
    
    //traverse --- 7
    // unordered_set<int>::iterator it = s.begin();
    // while(it != s.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;
    
    //find() --- returns the iterator at a specified position and if the element is not found then it will return the iterator at s.end() position --- 8
    // if(s.find(15) != s.end()){
    //     cout<<"element is present " <<endl;
    // }
    // else{
    //     cout<<"element is not present"<<endl;
    // }

    //count() --- check how much time the element is present in the set i.e is 1 or 0 --- 9
    // if(s.count(15) == 1){
    //     cout<<"1 time";
    // }
    // else{
    //     cout<<"0 time";
    // }
}