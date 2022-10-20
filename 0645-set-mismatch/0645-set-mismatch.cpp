class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // set<int> st;
        // for(int i=0;i<nums.size();i++){
        //     st.insert(nums[i]);
        // }
        vector<int> vec;
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int n=nums.size();
        int x=((n)*(n+1))/2;
        for(int i=0;i<n-1;++i){
            if(nums[i]==nums[i+1]){
                vec.push_back(nums[i]);
                sum-=nums[i];
                break;
            }
        }
        x-=sum;
        vec.push_back(x);
        return vec;
    }
};