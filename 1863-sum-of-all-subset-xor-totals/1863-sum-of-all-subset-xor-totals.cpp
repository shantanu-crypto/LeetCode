class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec;
        int sum=0;
        for(auto i=0;i<(1<<n);i++){
            int XOR=0;
            for(auto j=0;j<n;j++){
                if(i&(1<<j)){
                    XOR=XOR^nums[j];
                }
            }
            // vec.push_back(XOR);
            sum+=XOR;
        }
        
        // int sum=0;
        // for(auto it:vec){
        //     sum+=it;
        // }
        return sum;
    }
};