class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int maxLen=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }else{
                cnt=0;
            }
            maxLen=max(maxLen,cnt);
        }
        return maxLen;
    }
};