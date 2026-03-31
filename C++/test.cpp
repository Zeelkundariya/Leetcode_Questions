// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i<nums.size(); i++){
//             for (int j=i+1; j<nums.size(); j++){
//                 if (nums[i]+nums[j] == target){
//                     return {i+j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//       int left = 0;
//       int right  = s.size-1

//       while(left < right){
//         swap(s[left], s[right]){
//             left++;
//             right--;
//         }
//       }
//     }
// };



// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length() != t.length) return false
//             sort(s.begin(), s.end());
//             sort(t.begin(), t.end())

//             return s==t
        
//     }
// };



// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minPrice = prices[0];
//         int maxProfit = 0;

//         for(int i =0; i< prices.size();i++){
//             if(prices[i] < minPrice){
//                 minPrice = prices[i];}
//                 else{

//                 int profit = prices[i] - minPrice;
//                 if(profit > maxProfit){
//                     maxPrice = profit;
//                 }
//             }
//         }
//             return maxProfit    
//         }
//     };