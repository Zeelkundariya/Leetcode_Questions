// class Solution {
// public:
//     string removeDuplicates(string s, int k) {

//         bool found = true;

//         while(found) {

//             found = false;

//             for(int i = 0; i <= s.size() - k; i++) {

//                 bool same = true;

//                 for(int j = i; j < i + k; j++) {

//                     if(s[j] != s[i]) {
//                         same = false;
//                         break;
//                     }
//                 }

//                 if(same) {

//                     s.erase(i, k);
//                     found = true;
//                     break;
//                 }
//             }
//         }

//         return s;
//     }
// };


// class Solution {
// public:
//     string removeDuplicates(string s, int k) {

//         vector<pair<char,int>> ans;

//         for(int i = 0; i < s.size(); i++) {

//             if(!ans.empty() && ans.back().first == s[i]) {

//                 ans.back().second++;

//                 if(ans.back().second == k) {

//                     ans.pop_back();
//                 }
//             }
//             else {

//                 ans.push_back({s[i], 1});
//             }
//         }

//         string result = "";

//         for(int i = 0; i < ans.size(); i++) {

//             result += string(ans[i].second, ans[i].first);
//         }

//         return result;
//     }
// };