class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int XOR=0;
        bool flag=true;
        for(int i=0;i<nums.size()-1;i+=2){
            XOR=nums[i]^nums[i+1];
            if(XOR!=0){
                flag=false;
                break;
            }
        }
        return flag;
    }
};