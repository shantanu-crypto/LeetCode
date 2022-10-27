class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> vec;
        vec.push_back(pref[0]);
        for(int i=1;i<n;i++){
            vec.push_back(pref[i]^pref[i-1]);
        }
        return vec;
    }
};