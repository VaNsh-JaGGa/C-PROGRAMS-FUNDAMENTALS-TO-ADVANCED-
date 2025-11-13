#include<iostream>
#include<stack>
using namespace std;

int main(){

    //creation of stack --- 1
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    // 10 -> 20 -> 30

    //size --- 2
    cout<<st.size()<<endl;

    //removal of element --- 3 
    //pop
    st.pop();
    // 10 -> 20
    cout<<st.size()<<endl;

    //top() --- 4
    //it returns the top element / plate of the stack
    cout<<st.top();

    //empty
    if(st.empty()==true){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    //swap
}