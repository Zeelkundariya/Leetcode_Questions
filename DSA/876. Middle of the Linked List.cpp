/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
        // Solution 1
        //  int count = 0;
        //  ListNode* i = head;

        // while (i != nullptr) {
        //     count++;
        //     i = i->next;
        // }
        // int mid = (count/2)+1;

        // count = 1;
        // i=head;
        // while(count<mid){
        //     i=i->next;
        //     count++;
        // }
        // return i;

        // Solution 2

//         ListNode* i = head;
//         ListNode* j = i->next;

//         while (j->next != NULL && j->next->next != NULL) {
//             i = i->next;
//             j = j->next->next;
//         }
//         return i->next;
//     }
// };