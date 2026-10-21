 class Solution {
public:
        ListNode* reverseList(ListNode*head) {
        ListNode* prev = NULL;
        ListNode* Next = head;
        ListNode* curr = head;
        if(head == NULL) return head;
        while(curr != NULL){
            Next = curr ->next;
            curr ->next = prev;
            prev = curr;
            curr = Next; 
        }
        
        return prev;
     }
     
    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(10);
        ListNode* temp = head;
        ListNode* tempc = c;
        while(temp != NULL){
            ListNode* node = new ListNode(temp ->val);
           tempc->next = node;
           temp = temp ->next;
           tempc = tempc ->next; 
          

        }
        c = c ->next;
          c = reverseList(c);
          ListNode* a = head;
          ListNode* b = c;
        while(a){
            if(a ->val != b ->val) return false;
            a = a->next;
            b = b ->next;
        }
        return true;
    }
};