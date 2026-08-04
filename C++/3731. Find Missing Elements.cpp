
// class Solution {
// public:
//     vector<int> findMissing(vector<int>& nums){
//         sort(nums.begin(),nums.end());
//         vector<int> ans;
//         for(int i=0; i<nums.size()-1;i++){
//             int current =nums[i] + 1;
//             while(current <nums[i + 1]){
//                 ans.push_back(current);
//                 current++;
//             }
//         }

//         return ans;
//     }
// };

//time 0(o log n)