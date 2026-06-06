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
/