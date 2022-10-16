class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec(n+1);
        vec[0]=0;
        if(n==0) return vec;
        for(int i=1;i<=n;++i){
            if(i&1){
                vec[i]=vec[i-1]+1;
            }
            else{
                vec[i]=vec[i/2];
            }
        }
        return vec;
    }
};