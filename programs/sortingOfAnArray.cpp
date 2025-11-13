// METHOD 1
// #include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // METHOD 2
    //STEP 1 - COUNTING OF ZEROES AND ONES
    //STEP 2 - FILL THE ZEROES
    //STEP 3 - FILL THE ONES
    //STEP 4 - PRINT THE ARRAY

    int totalZeroes = 0;
    int totalOnes = 0;
    //creation of an array
    int arr[7] = {0,1,1,1,0,1,0};
    //traversing on array

    for(int i = 0; i<7; i++){
        if(arr[i]==0){
            totalZeroes++;
        }
        if(arr[i]==1){
            totalOnes++;
        }
    }

    //checking of traversing
    cout<<totalZeroes<<" ";
    cout<<totalOnes<<endl;

    //filling 0s and 1s in an array
    fill(arr , arr+totalZeroes , 0);
    fill(arr+totalZeroes , arr+7  , 1);

    for(int i = 0; i<7 ; i++){
        cout<<arr[i]<<" ";
    }
    //METHOD 1
    // int arr[5] = {1, 0, 1, 0, 1};

    
    // sort(arr, arr + 5);

    
    // for (int i = 0; i < 5; ++i) {
    //     cout << arr[i] << " ";
    // }

    // return 0;
}