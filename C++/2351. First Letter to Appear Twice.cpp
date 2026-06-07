// class Solution {
// public:
//     char repeatedCharacter(string s) {

//         set<char> search;

//         for(int i = 0; i < s.size(); i++) {
//             if(search.count(s[i])) {

//                 return s[i];
//             }
//             search.insert(s[i]);
//         }
//         return ' ';
//     }
// };