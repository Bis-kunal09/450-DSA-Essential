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
    ListNode* successor = NULL;
    ListNode* f(ListNode* root,int count){
        if(count==1){
            successor=root->next;
            return root;
        }
        ListNode* nhead=f(root->next,count-1);
        root->next->next=root;
        root->next=successor;
        
        return nhead;
        
    }
         ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (m <= 1) {
            
            return f(head, n - m + 1);
        }
        head->next = reverseBetween(head->next, m - 1, n - 1);
        return head;
    }
};