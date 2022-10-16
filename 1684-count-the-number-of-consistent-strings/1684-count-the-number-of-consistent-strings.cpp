class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res=words.size();
        
        int alpha[26]={};
        
        for(char i:allowed){
            alpha[i-'a']=true;
        }
        
        for(string i:words){
            for(char j:i){
                if(!alpha[j-'a']){
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};