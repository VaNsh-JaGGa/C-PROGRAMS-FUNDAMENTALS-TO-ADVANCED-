// same like vectors same like vectors we use deque while working in linkedlist DS
#include<iostream>
#include<deque>
using namespace std;

int main(){
    //creation --- 1
    deque<int> dq;

    //insertion --- 2 
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    // 10 -> 20 -> 30.
    dq.push_front(100);
    // 100,10,20,30

    //removal --- 3
    dq.pop_front();
    // 10,20,30
    dq.pop_back();
    // 10,20

    //size --- 4
    cout<<dq.size()
    <<endl;

    //front() and back() ---- 5
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    //empty() --- 6
    if(dq.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    //iterator --- 7
    deque<int>::iterator it =dq.begin();
    while(it!=dq.end()){
        cout<<*it<<" ";
        it++;
    }cout<<endl;

    //insertion at a givened location --- 8
    dq.insert(dq.begin(),100);
    // usage of index [] and at(_) --- 8 and 9
    cout<<dq[0]<<endl;
    cout<<dq[1]<<endl;
    // cout<<dq.at(1)<<endl;

    //clear() --- 10
    // dq.clear();
    // cout<<dq.size();


    //erase --- 11
    //tells from where deletion starts and where it ends.
    // dq.erase(dq.begin(),dq.end());

    //swap --- 12 (previously done in other data structures)

}