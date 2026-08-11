/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    map<Node*,Node*> mp;
    Node copyNode(Node* head){
            Node dummy = Node(head->val);
            return dummy;
    }

    Node* copyRandomList(Node* head) {
        int i = 0;
        Node* temp = head;
        if(head == nullptr){
            temp= nullptr;
            return temp;
        }
 
        while(temp){
            Node* newNode = new Node(temp->val);
            mp[temp] = newNode;
            temp = temp->next;
        }
        temp = head;
        Node* newHead = mp[temp];
        Node* newTemp = newHead;
        while(temp){
            if(temp->next){
                newTemp->next = mp[temp->next];
            }
            else{
                newTemp->next = nullptr;
            }
            if(temp->random){
                newTemp->random = mp[temp->random];
            }
            else{
                newTemp->random = nullptr;
            }
            temp = temp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
};
