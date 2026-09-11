class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int k=minutes;
        int prevloss =0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevloss +=customers[i];
        }
             int maxloss = prevloss;
             int maxidx =0;
             int i=1;
             int  j=k;
             while(j<n){
                 int currloss=prevloss;
                if(grumpy[j]==1)  currloss= currloss + customers[j];
                if(grumpy[i-1]==1) currloss= currloss - customers[i-1];
                if(maxloss<currloss){
                    maxloss=currloss;
                    maxidx = i;
                }
                prevloss=currloss;
                i++;
                j++;
             }
             //filling 0s in the grumpy array window
             for(int i=maxidx;i<maxidx+k;i++){
                   grumpy[i]=0;
             }
             //sum of satisfaction
             int sum =0;
            for(int i=0;i<n;i++){
                if(grumpy[i]==0) sum += customers[i];
            }
            return sum;
    }
};