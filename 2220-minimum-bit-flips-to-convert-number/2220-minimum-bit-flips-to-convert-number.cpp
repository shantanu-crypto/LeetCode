class Solution {
public:
    int minBitFlips(int start, int goal) {
        int XOR=start^goal;
        
        int cnt=0;
        while(XOR!=0){
            if(XOR&1==1) cnt++;
            XOR>>=1;
        }
        
        return cnt;
    }
};