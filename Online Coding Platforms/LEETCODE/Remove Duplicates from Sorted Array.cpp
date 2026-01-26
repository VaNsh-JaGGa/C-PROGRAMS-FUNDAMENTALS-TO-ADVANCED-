#include <iostream>
using namespace std;

int removeDuplicate(int arr[] , int size){
    int i=0;
    int j=1;
    int res = 1;
    while(j<=(size-1)){
        if(arr[j]==arr[j-1]){
            j++;
            continue;
        }
        arr[i+1] = arr[j];
        i++;
        j++;
        res++;
    }
    return res;
}


int main(){
    int arr[7] = {1,1,2,2,3,4,4};
    int ans = removeDuplicate(arr,7);
    cout<<ans;
}