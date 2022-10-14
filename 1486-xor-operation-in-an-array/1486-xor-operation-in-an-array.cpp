class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        
        int XOR=0;
        for(int i=0;i<n;i++){
            XOR=XOR^nums[i];
        }
        return XOR;
    }
};