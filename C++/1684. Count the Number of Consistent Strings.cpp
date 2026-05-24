// class Solution {
// public:
//     int countConsistentStrings(string allowed, vector<string>& words) {

//         int count = 0;
//         for(int i = 0; i < words.size(); i++) {
//             bool correct = true;
//             for(int j = 0; j < words[i].size(); j++) {
//                 bool found = false;
//                 for(int k = 0; k < allowed.size(); k++) {
//                     if(words[i][j] == allowed[k]) {
//                         found = true;
//                     }
//                 }
//                 if(found == false) {
//                     correct = false;
//                 }
//             }
//             if(correct == true) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };