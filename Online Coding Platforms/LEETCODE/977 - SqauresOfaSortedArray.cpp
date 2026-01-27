// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int size = nums.size();
//         vector<int> a;
//         vector<int> b;

//         for (int i = 0; i < size; i++) {
//             if (nums[i] >= 0) {
//                 // positive hai number
//                 a.push_back(nums[i]);
//             } else {
//                 b.push_back(nums[i]);
//             }
//         }

//         // 1 case -- array negative hai pura
//         if (a.size() == 0) {
//             // positive koi bhi nahi hai
//             // negative hai sare square krke , reverse krke return kardon
//             for (int i = 0; i < size; i++) {
//                 nums[i] = nums[i] * nums[i];
//             }

//             // ab reverse krke return krdon
//             int i = 0;
//             int j = (size - 1);
//             while (i < j) {
//                 swap(nums[i++], nums[j--]);
//             }
//             return nums;
//         }

//         // 2 case - array positive hai pura
//         if (b.size() == 0) {
//             for (int i = 0; i < size; i++) {
//                 nums[i] = nums[i] * nums[i];
//             }
//             return nums;
//         }

//         // 3 case - positive and negative dono hai array me
//         //  phele dono givened array ka square krlon
//         for (int i = 0; i < (a.size()); i++) {
//             a[i] = a[i] * a[i];
//             // cout<<a[i]<<endl;
//         }
//         for (int i = 0; i < (b.size()); i++) {
//             b[i] = b[i] * b[i];
//             // cout<<b[i]<<endl;
//         }
//         int l = 0;
//         int k = b.size()-1;
//         while (l < k) {
//             swap(b[l++], b[k--]);
//         }
//         // sqaure ho gaya dono negative and positive arrays ka
//         int i = 0;
//         int j = 0;
//         int r = 0;

//         while (i < (a.size()) && j < (b.size())) {
//             if (a[i] < b[j]) {
//                 nums[r++] = a[i++];
//             } else {
//                 nums[r++] = b[j++];
//             }
//         }
//         while (j < (b.size())) {
//             nums[r++] = b[j++];
//         }
//         while (i < (a.size())) {
//             nums[r++] = a[i++];
//         }
//         return nums;
//     }
// };