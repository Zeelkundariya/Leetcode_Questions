// class Solution {
// public:
//     int isPrefixOfWord(string sentence, string searchWord) {
//         string word = "";
//         int position = 1;
//         for(int i=0; i<= sentence.size();i++){
//             if( i == sentence.size() || sentence[i] == ' '){
//                 bool match = true;

//                 if(searchWord.size() > word.size()){
//                     match = false;
//                 }
//                 else{
//                     for(int j = 0 ; j< searchWord.size(); j++){
//                         if(word[j] != searchWord[j]){
//                             match =false;
//                             break;
//                         }
//                     }
//                 }
//                 if(match){
//                     return position;
//                 }
//                 position++;
//                 word= "";
//             }
//             else{
//                 word += sentence[i];
//             }
//         }
//         return -1;
//     }
// };



