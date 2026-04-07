// Method-1 

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int majority = 0;
//         int count = 0;

//         for(int num : nums){
//             if(count == 0){
//                 majority = num;
//             }

//             if(num == majority){
//                 count++;
//             } else { 
//                 count--;
//             }
//         }

//         return majority;
//     }
// };




//Method-2 using unordere_map

// #include <unordered_map>
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         int n = nums.size();

//         for(int num : nums){
//             mp[num]++;

//             if(mp[num] > n/2){
//                 return num;
//             }
//         }

//         return -1; 
//     }
// };