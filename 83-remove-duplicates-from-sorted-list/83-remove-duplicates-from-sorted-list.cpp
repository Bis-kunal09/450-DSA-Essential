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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* h1=head;
        ListNode* temp=head->next;
        while(temp!=NULL){
            if(temp->val!=h1->val){
                h1->next=temp;
                h1=h1->next;
            }
            temp=temp->next;
            
        }
        h1->next=NULL;
        return head;
        
    }
};