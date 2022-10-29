class Solution {
public:
    long long maximumXOR(vector<int>& nums) {
        vector<bool> bitset(32,false);
        for(int it:nums){
            int ind=0;
            while(it>0){
                if(it&1){
                    bitset[ind]=true;
                }
                ind++;
                it>>=1;
            }
        }
        long long ans=0;
        long long two=1;
        for(int i=0;i<32;i++){
            if(bitset[i]==true){
                ans+=two;
            }
            two=two*2;
        }
        return ans;
    }
};