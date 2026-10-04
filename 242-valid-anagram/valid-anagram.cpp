class Solution {
public:
    bool isAnagram(string s, string t) {
     map<char,int> mp;
     if(s.size() != t.size()) return false;
    for(auto x : s){
        mp[x]++;
    }
    for(auto x : t){
        mp[x]--;
    }
    for(auto ele : mp){
        if(ele.second > 0) return false;
        
    }
    return true;
     
    } 
};