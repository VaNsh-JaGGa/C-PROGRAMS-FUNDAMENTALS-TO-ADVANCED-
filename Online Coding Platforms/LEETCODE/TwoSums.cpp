//constraint 
//given an array and target 
//if sum of two pair == target , then return the index of that pair
//dont use same index element in an pair

#include<iostream>
using namespace std;


void PrintIndexOfPair(int arr[] , int size , int key){
    for(int i=0; i<size ; i++){
        for(int j = i+1 ; j< size; j++){
            if(arr[i]+arr[j] == key){
                cout<< i <<" "<<j<<endl;
            }
        }
    }
}
int main(){
    
    int arr[5] = {3,2,7,1,5};

    int target;
    cin >> target;


    PrintIndexOfPair(arr , 5 , target);

}