// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> nextLargerNodes(ListNode* head) {

//         vector<int> ans;
//         stack<pair<int, int>> st;

//         int index = 0;
//         while(head != NULL) {
//             ans.push_back(0);

//             while(!st.empty() && head->val > st.top().first) {
//                 ans[st.top().second] = head->val;
//                 st.pop();
//             }
//             st.push({head->val, index});
//             index++;
//             head = head->next;
//         }
//         return ans;
//     }
// };

//time 0(n)
//space 0(1)