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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fake = new ListNode();
        fake->val = -1;
        fake->next = head;
        
        ListNode *s = fake, *f = fake;
        
        for(int i=1; i<=n+1; i++){
            f=f->next;
        }
        
        while(f!=NULL){
            s = s->next;
            f = f->next;
        }
        
        s->next = s->next->next;
        
        return fake->next;
    }
};