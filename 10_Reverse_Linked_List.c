/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* next = curr->next;   // save the next node
        curr->next = prev;                    // reverse the link
        prev = curr;                          // move prev forward
        curr = next;                          // move curr forward
    }

    return prev;   // prev is the new head
}
