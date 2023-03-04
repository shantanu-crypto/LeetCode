class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        bool minI=false;
        bool maxI=false;
        int maxStart=0;
        int minStart=0;
        int start=0;
        long long int res=0;
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK){
                minI=false;
                maxI=false;
                start=i+1;
            }
            if(nums[i]==minK){
                minI=true;
                minStart=i;
            }
            if(nums[i]==maxK){
                maxI=true;
                maxStart=i;
            }
            if(minI && maxI){
                res+=min(maxStart,minStart)-start+1;
            }
        }
        return res;
    }
};