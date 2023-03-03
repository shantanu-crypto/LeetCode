class Solution {
public:
    int strStr(string ha, string needle) {
        if(ha.find(needle) == string :: npos) return -1;
        
        int n = ha.size() , m = needle.size() ;

        for(int i = 0 ; i < n - m + 1 ; i++ )
            if(needle == ha.substr(i,m) )
                return i;
        return -1;
    }
};