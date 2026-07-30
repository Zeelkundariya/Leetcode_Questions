// class Solution {
// public:
//     int compress(vector<char>& chars) {

//         int index =0;
//         int i =0;

//         while(i <chars.size()) {
//             char current =chars[i];
//             int count =0;

//             while(i<chars.size() &&chars[i] ==current) {
//                 count++;
//                 i++;
//             }
//             chars[index] =current;
//             index++;
//             if(count > 1){
//                 string s = to_string(count);
//                 for(char ch : s){
//                     chars[index] =ch;
//                     index++;
//                 }
//             }
//         }
//         return index;
//     }
// };

//space 0(1)