// class Solution {
// public:
//     int mySqrt(int x) {

//             if(x == 0 ||  x == 1  ) return x;

//             int left = 1, right=x;
//             int as=ns = 0;

//             while(left <= right){

//                 int mid = left (right - left) / 2;

//                 if(mid*mid == x){
//                     return ans;

//                     else if (mid*mid < x){
//                         ans = mid;
//                         left = mid+1;
//                     }
//                     else{
//                         ans = right;
//                         right = mid-1;
//                     }
//                 }
//             }
//             return ans;
// };