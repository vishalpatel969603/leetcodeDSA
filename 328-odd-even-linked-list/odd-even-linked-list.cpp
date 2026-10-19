class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* lo = new ListNode (0);
        ListNode* hi = new ListNode (0);
        ListNode* tl = lo;
        ListNode* th = hi;
        ListNode* t = head;
        int i=0;
        while(t != NULL){
            if(i%2==0){
                tl ->next = t;
                t = t->next;
                tl = tl ->next;
            }
            else{
                th ->next = t;
                t = t -> next;
                th = th ->next;
            }
            i++;
        }
        tl ->next = hi ->next;
       th ->next = NULL;
       return lo ->next;
    }
};