class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        // finding the dip in the array from back
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        //which element will take the dip position 
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        
        //now sorting the elments after the dip
        reverse(nums.begin()+ind+1,nums.end());
        
    }
};