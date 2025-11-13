#include<iostream>
using namespace std;

int UniqueElementInTheArray(int Unique[] , int size){
    int answer = 0;
    for(int i=0; i<=size-1;i++){
        answer = answer ^ Unique[i]; 
    }
    // Unique[0] = 50;
    return answer;
}

int main(){
    int unique[5] = {20,20,20,10,15};
    int AnswerHolder = UniqueElementInTheArray(unique,5);
    cout<<AnswerHolder<<" ";
    // cout<<unique[0];
}