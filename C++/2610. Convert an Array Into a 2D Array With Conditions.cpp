// class Solution {
// public:
//     vector<vector<int>> findMatrix(vector<int>& nums) {

//         vector<vector<int>> ans;
//         unordered_map<int,int> mp;

//         for(int num : nums) {

//             int row = mp[num];

//             if(row == ans.size()) {
//                 ans.push_back({});
//             }
//             ans[row].push_back(num);
//             mp[num]++;
//         }
//         return ans;
//     }
// };