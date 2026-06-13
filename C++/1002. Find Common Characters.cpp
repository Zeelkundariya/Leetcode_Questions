// class Solution {
// public:
//     vector<string> commonChars(vector<string>& words) {
//         vector<string> ans;

//         for(char ch = 'a'; ch <= 'z'; ch++) {
//             int small = 100;

//             for(string word : words) {
//                 int count = 0;

//                 for(char c : word) {
//                     if(c == ch) {
//                         count++;
//                     }
//                 }

//                 small = min(small, count);
//             }

//             while(small--) {
//                 ans.push_back(string(1, ch));
//             }
//         }

//         return ans;
//     }
// };