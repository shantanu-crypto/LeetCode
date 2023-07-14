class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long int maxi=INT_MIN;
        long long int currSum=0;
        
        int ind=0;
        while(ind<n){
            if(currSum<0){
                currSum=0;
            }
            currSum+=nums[ind];
            maxi=max(maxi,currSum);
            ind++;
        }
        return maxi;
    }
};