

// Method-1

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] == nums[j]) { 
//                     return nums[i];
//                 }
//             }
//         }
//         return -1;
//     }
// };

// Time complexity 0(n^2)
// Space complexity 0(1)



// Method-2
// Map method
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_map<int, int> freq;

//         for (int i = 0; i < nums.size(); i++) {
//             if (freq[nums[i]] == 0) {
//                 freq[nums[i]] = 1;
//             } else {
//                 return nums[i]; 
//             }
//         }

//         return -1; 
//     }
// };


// Time complexity 0(n)
// Space complexity 0(n)