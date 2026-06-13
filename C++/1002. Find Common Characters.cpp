// class Solution {
// public:
//     vector<string> commonChars(vector<string>& words) {

//         vector<string> ans;

//         for(char ch = 'a'; ch <= 'z'; ch++) {

//             int mini = 100;

//             for(string word : words) {

//                 for(char c : word) {
//                     if(c == ch) cnt++;
//                 }
//                 mini = min(mini, cnt);
//             }
//             while(mini--) {
//                 ans.push_back(string(1, ch));
//             }
//         }
//         return ans;
//     }
// };








