class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {

        ListNode* prev = head;
        ListNode* curr = head->next;

        int groupSize = 2;

        while (curr != NULL) {

            // Find the actual size of this group
            ListNode* temp = curr;
            int size = 0;

            while (temp != NULL && size < groupSize) {
                temp = temp->next;
                size++;
            }

            // If group size is even, reverse it
            if (size % 2 == 0) {

                ListNode* groupPrev = NULL;
                ListNode* groupCurr = curr;

                for (int i = 0; i < size; i++) {
                    ListNode* next = groupCurr->next;
                    groupCurr->next = groupPrev;
                    groupPrev = groupCurr;
                    groupCurr = next;
                }

                // Connect previous group to reversed group
                prev->next = groupPrev;

                // curr is now the last node of reversed group
                curr->next = groupCurr;

                // Move prev to the end of this group
                prev = curr;
                curr = groupCurr;
            }
            else {
                // Group is odd, don't reverse
                for (int i = 0; i < size; i++) {
                    prev = curr;
                    curr = curr->next;
                }
            }

            groupSize++;
        }

        return head;
    }
};  