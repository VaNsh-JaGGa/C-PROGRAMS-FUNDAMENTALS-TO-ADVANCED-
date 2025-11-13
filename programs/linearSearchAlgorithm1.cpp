#include<iostream>
using namespace std;

int LinearSearch(int Linear[] , int size , int target){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        if(target == Linear[start]){
            return start;
        }
        start++;
    }
    return -1;
}


int main(){
    int Linear[5] = {1,20,2,30,4};
    int answer = LinearSearch(Linear,5,30);
    cout << answer <<endl;
}