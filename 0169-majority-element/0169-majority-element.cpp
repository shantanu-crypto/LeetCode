class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,res=nums[0];
        int i=0;
        while(i<nums.size()){
            if(cnt==0){
                res=nums[i];
                cnt++;
                i++;
            }
            else if(nums[i]==res){
                cnt++;
                i++;
            }
            else{
                cnt--;
                i++;
            }
        }
        return res;
    }
};