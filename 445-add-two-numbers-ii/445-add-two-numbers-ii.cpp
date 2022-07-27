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
    ListNode* f(ListNode* root){
        if(root==NULL){
            return root;
        }
        if(root->next==NULL){
            return root;
        }
        ListNode* newHead=f(root->next);
        root->next->next=root;
        root->next=NULL;
        return newHead;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=f(l1);
        ListNode* temp1=a;
        ListNode* b=f(l2);
        ListNode* temp2=b;
        ListNode* ptr=new ListNode();
        ListNode* temp=ptr;
        int carry=0;
        while(temp1!=NULL||temp2!=NULL||carry==1){
            int sum=carry;
            if(temp1){
                sum+=temp1->val;
                temp1=temp1->next;
                
            }
            if(temp2){
                sum+=temp2->val;
                temp2=temp2->next;
            }
            carry=sum/10;
            temp->val=sum%10;
            ListNode* n=new ListNode();
            temp->next=n;
            temp=temp->next;
            
           
            
        }
        
        return f(ptr)->next;
        
    }
};