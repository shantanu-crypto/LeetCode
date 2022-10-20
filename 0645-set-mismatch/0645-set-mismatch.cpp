class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // set<int> st;
        // for(int i=0;i<nums.size();i++){
        //     st.insert(nums[i]);
        // }
        sort(nums.begin(),nums.end());
        vector<int> vec;
        unordered_map<int,int> mp;
        for(int i=1;i<=nums.size();i++){
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second==2){
                vec.push_back(it.first);
            }
        }
        for(auto it:mp){
            if(it.second==0){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};