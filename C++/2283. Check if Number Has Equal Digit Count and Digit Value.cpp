
// class Solution {
// public:
//     bool digitCount(string num) {

//         for(int i = 0; i < num.size(); i++) {
//             int count = 0;
//             for(int j = 0; j < num.size(); j++) {
//                 if(num[j] - '0' == i) {
//                     count++;
//                 }
//             }
//             if(count != num[i] - '0') {
//                 return false;
//             }
//         }
//         return true;
//     }
// };



//Method-2

// class Solution {
// public:
//     bool digitCount(string num) {

//         unordered_map<int, int> mp;

//         for(char ch : num) {
//             mp[ch - '0']++;
//         }

//         for(int i = 0; i < num.size(); i++) {

//             if(mp[i] != num[i] - '0') {
//                 return false;
//             }
//         }

//         return true;
//     }
// };