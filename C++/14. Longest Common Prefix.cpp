//     class Solution {
//     public:
//         string longestCommonPrefix(vector<string>& strs) {
//             string ans = "";

//             for(int i = 0; i < strs[0].size(); i++){
//                 char ch = strs[0][i];

//                 for(int j = 1; j < strs.size(); j++){
//                     if(i >= strs[j].size() || strs[j][i] != ch){
//                         return ans;
//                     }
//                 }
//                 ans += ch;
//             }

//             return ans;
//         }
//     };




//     class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string prefix = strs[0];

//         for(int i = 1; i < strs.size(); i++){
//             while(strs[i].find(prefix) != 0){
//                 prefix.pop_back();  // remove last character
//                 if(prefix == "") return "";
//             }
//         }

//         return prefix;
//     }
// };






// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string ans = "";

//         for(int i = 0; i < strs[0].size(); i++){
//             char ch = strs[0][i];

//             for(int j = 1; j < strs.size(); j++){
//                 if(i >= strs[j].size() || strs[i][j] != ch){
//                     return ans;
//                 }
//             }
//             ans += ch;
//         }
//         return ans;
//     }
// };

