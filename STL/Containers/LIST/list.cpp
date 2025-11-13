#include<iostream>
#include<list>
using namespace std;

int main(){

    //creation of A list --- 1
    list<int> mylist;

    //insertion into a list --- 2
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    // push_front --- 3
    mylist.push_front(50);

    //removal of elements --- 4
    //deletes the last element
    mylist.pop_back();
    
    //deletes the first element
    mylist.pop_front();

    //size --- 5
    cout<<mylist.size()<<endl;

    //clear --- 6
    //to delete all the elements from the list
    // mylist.clear();

    //empty --- 7
    //to know whether the list is empty or not
    // if(mylist.empty()){
    //     cout<<"list is empty"<<endl;
    // }
    // else{
    //     cout<<"list is not empty"<<endl;
    // }

    //front() and back() --- 8
    // front gives the first element of the list and back vice versa
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;

    //creating an iterator and traversing it with help of begin() function --- 9
    // list<int> :: iterator it = mylist.begin();
    // while(it!=mylist.end()) {
    //     cout<<*it<<" ";
    //     it++;
    // } not working

    //remove() --- 10
    //removes the matching value
    mylist.remove(10);

    //swapping of values with two lists --- 11 
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

     list<int>::iterator it = first.begin();
    while(it!=first.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

     list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);

    first.swap(second);

    list<int>::iterator itt = first.begin();
    while(itt!=first.end()){
        cout<<*itt<<" ";
        itt++;
    }
    cout<<endl;

    //insert() --- 12
    // to insert the value at the givened particular location 
    mylist.insert(mylist.begin() , 100);
    cout<<(*mylist.begin())<<endl;
    // cout<<*mylist.begin()<<endl;

    //erase --- 13
    //tells where the deletion of lists starts and where it ends;
    mylist.erase(mylist.begin(),mylist.end());
    cout<<mylist.size();

}