class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int XOR=0;
        for(int i=0;i<n;i++){
            XOR=XOR^(start+2*i);
        }
        return XOR;
    }
};