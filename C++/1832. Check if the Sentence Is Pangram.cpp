//Method-1

// class Solution {
// public:
//     bool checkIfPangram(string sentence) {

//         set<char> s;

//         for(char ch : sentence) {

//             s.insert(ch);
//         }

//         return s.size() == 26;
//     }
// };


//method-2


// class Solution {
// public:
//     bool checkIfPangram(string sentence) {

//         for(char ch = 'a'; ch <= 'z'; ch++) {
//             if(sentence.find(ch) == -1) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };

//time 0(n)