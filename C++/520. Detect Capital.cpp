// class Solution {
// public:
//     bool detectCapitalUse(string word) {

//         int count = 0;
//         for(char ch : word) {
//             if(ch >= 'A' && ch <= 'Z') {
//                 count++;
//             }
//         }
//         if(count == word.size())
//             return true;
//         if(count == 0)
//             return true;
//         if(count == 1 && word[0] >= 'A' && word[0] <= 'Z')
//             return true;
//         return false;
//     }
// };