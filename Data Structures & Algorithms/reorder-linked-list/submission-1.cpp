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
    ListNode* midpoint(ListNode* ll){
        ListNode* fast = ll;
        ListNode* slow = ll;

        while(fast->next and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    int countNodes(ListNode* ll){
        int n = 0;
        while(ll){
            n++;
            ll = ll->next;
        }
        return n;
    }

    ListNode* reverse(ListNode* ll){
        if(ll == nullptr or ll->next==nullptr){
            return ll;
        }
        ListNode* head = reverse(ll->next);
        ll->next->next = ll;
        ll->next = nullptr;
        return head;
    }

    void reorderList(ListNode* head) {
        ListNode* l1 = head;
        ListNode* midp = midpoint(head);

        ListNode* l2 = reverse(midp->next);
        midp->next =nullptr;

        while(l2!= nullptr){
            ListNode* t1 = l1->next;
            ListNode* t2 = l2->next;
            l1->next = l2;
            l2->next = t1;
            l1 = t1;
            l2 = t2;
        }
        // finding midpoint
    }
};
