class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp = head;
        vector<ListNode*> ans;
        int n = 0;
        while(temp != NULL){
            temp = temp ->next;
            n++; 
        }
        int size = n/k;
        int rem = n%k;
        temp = head;
        while(temp != NULL){
            ListNode* C = new ListNode(0);
            ListNode* tempC = C;
            int s = size;
            if(rem>0){ s++;
             rem--;
            }
            for(int i=1;i<=s;i++){
                tempC ->next = temp;
                temp = temp ->next;
                tempC = tempC ->next;
            }
            tempC ->next = NULL;
            ans.push_back(C->next);  
        }
        if(ans.size()<k){
            int extra = k - ans.size();
            for(int i=1;i<=extra;i++){
                ans.push_back(NULL);
            }
        }
       return ans;
    }
};