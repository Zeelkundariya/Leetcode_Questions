// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {

//         int ans = 0;
//         for(int i=0;i<nums.size();i++) {

//             for(int j=i+1; j<nums.size();j++) {

//                 int product =(nums[i]-1)*(nums[j]-1);
//                 ans =max(ans,product);
//             }
//         }
//         return ans;
//     }
// };

//time 0(n2)
//space 0(1)