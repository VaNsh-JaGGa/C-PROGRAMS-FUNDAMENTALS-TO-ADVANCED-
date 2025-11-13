#include<iostream>
using namespace std;

int FirstOccurence(int arr[] , int size , int target){
    int start = 0;
    int end = size - 1;

    int mid = start + ( end - start )/2;
    int ans = -1;


    while( start <= end ){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target ){
            start = mid + 1;
        }
        else if ( arr[mid] > target){
            end = mid - 1;
        }
         mid = start + (end - start)/2;
    }
   
    return ans;
}


int LastOccurence(int arr[] , int size , int target){
    int start = 0;
    int end = size - 1;

    int mid = start + ( end - start )/2;
    int ans = -1;


    while( start <= end ){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target ){
            start = mid + 1;
        }
        else if ( arr[mid] > target){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}


int main(){
    int arr[7] = {10,20,20,20,20,20,30};
    int firstOccurence = FirstOccurence(arr , 7 , 20);
    int lastOccurence = LastOccurence(arr , 7 , 20);
    cout<<firstOccurence<<endl;
    cout<<lastOccurence<<endl;

    cout<<"Total occurence of the 20 value :"<<lastOccurence-firstOccurence+1<<endl;
}   