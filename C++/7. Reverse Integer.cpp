// Method-1

// class Solution {
// public:
//     int reverse(int x) {

//         int rev = 0;
//         int int_max = INT_MAX;
//         int int_min = INT_MIN;

//         while(x != 0) {
//             int digit = x % 10;
//             if(rev > int_max / 10 || rev < int_min / 10) {
//                 return 0;
//             }
//             rev = rev * 10 + digit;
//             x /= 10;
//         }
//         return rev;
//     }
// };