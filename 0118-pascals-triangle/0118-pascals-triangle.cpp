class Solution {
public:
    
    vector<int> generateRows(int N){
        vector<int> vec;
        long long int res=1;
        vec.push_back(res);
        for(int i=1;i<N;i++){
            res=res*(N-i);
            res=res/i;
            vec.push_back(res);
        }
        return vec;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};