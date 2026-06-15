//Method-1

// class Solution {
// public:
//     string truncateSentence(string s, int k) {

//         string ans = "";
//         int words = 0;
//         for(int i = 0; i < s.size(); i++) {
//             if(s[i] == ' ') {
//                 words++;
//             }
//             if(words == k) {
//                 break;
//             }
//             ans += s[i];
//         }
//         return ans;
//     }
// };




//Method-2