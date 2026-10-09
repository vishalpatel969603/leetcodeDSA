class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int lenA=0,lenB=0;
        int n;
        while(tempA !=NULL){
              lenA++;
              tempA = tempA -> next;
        }
         while(tempB !=NULL){
              lenB++;
              tempB = tempB -> next;
        }
        tempA = headA;
        tempB = headB;
      if(lenA>lenB){
             n = lenA -lenB;
             for(int i=1;i<=n;i++){
              tempA = tempA -> next;
            }
            while(tempA != tempB){
              tempA = tempA ->next;
              tempB = tempB ->next;
            }
            return tempA;
         }
        else{
          n = lenB -lenA;
          for(int i=1;i<=n;i++){
          tempB = tempB -> next;
            }
            while(tempA != tempB){
              tempA = tempA ->next;
              tempB = tempB ->next;
            }
            return tempA;
         }
         // else{
         //       n =lenB-lenA;
         //     for(int i=1;i<=n;i++){
         //         tempB = tempB -> next;
         //     }
         //  }
         // while(tempA != NULL){
         //     if(tempA == tempB) return tempA;     
         //         tempA = tempA ->next;
         //         tempB = tempB ->next;
        
    }
};