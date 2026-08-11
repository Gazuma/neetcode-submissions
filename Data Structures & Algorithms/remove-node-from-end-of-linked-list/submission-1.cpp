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

class Solution {
public:

    int sizeList(ListNode* head){
        int i = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            i++;
        }
        return i;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s = sizeList(head);
        
        int result = s-n+1;
        int i = 1;
        if(result == 1){
            head = head->next;
        }
        else{
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while(temp){
            if(i==result){
                prev->next = temp->next;
            }
            prev = temp;
            temp = temp->next;
            i++;
        }
        }
        
        return head;
    }
};
