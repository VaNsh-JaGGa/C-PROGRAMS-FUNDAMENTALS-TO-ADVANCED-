#include<iostream>
#include<queue>
using namespace std;

int main(){

    // creation -- with 2 method that is min-heap --- 1
    // min-heap -> minimum value -> highest priority
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(100);
    // 100
    pq.push(50);
    //50,100
    pq.push(75);
    // 50,75,100

    // top() --- 2
    //minimum element should be returned
    cout<<pq.top()<<endl;
    //minimum element should be removed
    pq.pop();
    //75,100;
    cout<<pq.top();







    // //creation -- with 1 method that is max-heap --- 1
    // priority_queue<int> pq;
    // // max-heap -- max-value --- max-priority --- 2
    // // insertion --- 3
    // pq.push(10);
    // // 10
    // pq.push(25);
    // // 25,10
    // pq.push(50);
    // // 50,25,10

    // // top() --- gives the highest priority element --- 4
    // cout<<pq.top()<<endl;

    // // pop() --- removes the highest priority element --- 5
    // pq.pop();
    // //50 is removed -- 25 , 10;

    // cout<<pq.top()<<endl;

    // //empty --- 6
    // if(pq.empty()){
    //     cout<<"empty"<<endl;
    // }
    // else{
    //     cout<<"not empty"<<endl;
    // }

    // //size --- 7
    // cout<<pq.size()<<endl+;
}