// #include <iostream>
// using namespace std;

// void MergeSortedArray(int arr[],int arrsize,int num[],int numsize,int res[],int ressize){
//     int i=0;
//     int j=0;
//     int k=0;

//     while(k<=(arrsize-1)){
//         if(arr[i]<arr[j]){
            
//         }
//     }
// }


// int main(){
//     int arr[5] = {1,2,0,0,0};
//     int num[3] = {1,2,3};
//     int res[5];


//     MergeSortedArray(arr,5,num,3,res,5);
// }





// ---- LeetCode Solution
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;        // last real element of nums1
//         int j = n - 1;        // last element of nums2
//         int k = m + n - 1;    // last position in nums1

//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }

//         // copy remaining nums2 elements (if any)
//         while (j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }
// };