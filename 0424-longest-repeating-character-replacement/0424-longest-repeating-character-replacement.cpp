class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        
        int l=0, r=0;
        
        int maxCount=0;
        
        int res=0;
        
        while(r<s.size()){
            count[s[r]-'A']+=1;
            
            maxCount=max(maxCount, count[s[r]-'A']);
            
            while(r-l+1-maxCount>k){
                count[s[l]-'A']-=1;
                l+=1;
                
                for(int k=0;k<26;k++)
                    maxCount=max(maxCount, count[k]);
                
            }
            
            res=max(res, r-l+1);
            r+=1;
        }
        
        return res;
    }
};