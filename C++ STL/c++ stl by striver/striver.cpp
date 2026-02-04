#include<iostream>
#include<vector>
using namespace std;

void explainPair(){
    // pair is used to store the two values in a single variable 
    // comes under std which includes many library 
    pair <int , int> p1 = {10,20};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair <int , char> p2 = {10,'v'};
    cout<<p2.first<<" "<<p2.second<<endl;

    pair <pair<int,float> , char> p3 = {{1,1.2},'v'};
    cout<<p3.first.first<<" "<<p3.first.second<<" "<<p3.second<<endl;
}

void explainVector(){
    // if i asked use to store 5 values in a variable , you use array
    // but if i asked you to store the 2 elements more into it then you cant do that 
    // in that case the vectors comes in 
    // vectors are dynamic in nature whereas the size of the array is fixed

    // empty container
    // vector<int> v1;
    vector<int> v1 = {7,8};
    // predict the starting size of vector is 5 and putting the 6 in all 5 blocks 
    // vector<int> v1(5,6);

    //insertion
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    //size
    cout<<v1.size()<<endl;

    // indexing of vector is also done from 0
    // [1,2,3]
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    // hey if i say you i didnt want to write this above lengthy line of code
    // heres the iterators comes up 
    // v1.begin() -> it provides the reference to the starting memory address.
    // v1.end() -> this points to the after last block of the memory. 
    // vector<int>::iterator BeginItr = v1.begin(); 
    // vector<int>::iterator endItr = v1.end(); 
    // for(vector<int>::iterator i=BeginItr;i<endItr;i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;
    // auto BeginItr = v1.begin(); 
    // auto endItr = v1.end(); 
    // for(auto i=BeginItr;i<endItr;i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    //reverse iterator
    // auto reverseBegin = v1.rbegin(); // pointing to the last block of the vector
    // auto reverseEnd = v1.rend(); // pointing beforeeee the first block of the vector  
    // for(auto i=reverseBegin; i<reverseEnd; i++){
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    //create a duplicate vector 
    // vector<int> dupvec(v1);
    // vector<int> dupvec(v1.begin()+1,v1.end()-1);
    // vector<int> dupvec = v1;
    // for(int i:dupvec){
        // cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<v1.front()<<" ";
    // v1.pop_back();
    // cout<<v1.back();
    // cout<<endl;

    // erase is used to erase the elements 
    // v1.erase(v1.begin()+2,v1.end()-1);
    // for(int i:v1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // clear is used to empty the entire vector
    // v1.clear();
    // for(int i:v1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;.

    // swap
    // vector<int> v2 = {7,8};
    // vector<int> v3 = {4,5};
    // swap(v2,v3);
    // for(int i:v2){
    //     cout<<i<<" ";
    // }
    cout<<endl;


    //before which position you want to insert the value
    v1.insert(v1.begin()+2,15);
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    // explainPair();
    explainVector();
}