#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creation --- 1.
    queue<int> q;

    //insertion --- 2.
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // 10->20->30->40->50

    //deletion --- 3
    q.pop();
    q.pop();
    // 30->40->50

    //size --- 4
    cout<<q.size()<<endl;

    // empty --- 5
    if(q.empty()==true){
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is not empty"
        <<endl;
    }

    //front and back --- 6
    // gives the first element and vice versa
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    //swapping between two different queues --- 7
    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);
    cout<<"front value -> "<<first.front()<<endl<<"rear value -> "<<first.back()<<endl;


 
}