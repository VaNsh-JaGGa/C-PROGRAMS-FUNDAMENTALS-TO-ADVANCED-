#include<iostream>
using namespace std;

void PrintUniquePairs(int arr[],int size, int target){
    int left=0;
    int right = size-1;
    int sum;

    while(left<right){
        if(arr[left]+arr[right] == target){
            sum = arr[left] + arr[right];
            cout<<sum<<" "<<"{"<<arr[left]<<" "<<arr[right]<<"}"<<endl;
            cout<<sum<<" "<<"{"<<left<<" "<<right<<"}"<<endl;
            left++;
            right--;

            while(arr[left] == arr[left-1]){
                left++;
            }
            while(arr[right] == arr[right+1]){
                right--;
            }
        }
        else if (arr[left] + arr[right] < target){
            left++;
        }
        else{
            right--;
        }

    }
}


int main(){
    int arr[8] = {0,1,1,2,2,3,3,4};
    PrintUniquePairs(arr,8,4);
}