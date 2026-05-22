// class Solution {
// public:
//     string destCity(vector<vector<string>>& paths) {

//         for(int i = 0; i < paths.size(); i++) {
//             string city = paths[i][1];
//             bool found = false;
//             for(int j = 0; j < paths.size(); j++) {
//                 if(city == paths[j][0]) {
//                     found = true;
//                     break;
//                 }
//             }
//             if(found == false) {
//                 return city;
//             }
//         }
//         return "";
//     }
// };