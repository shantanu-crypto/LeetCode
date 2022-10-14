class Solution {
public:
    long long numberOfSteps(int num) {
        long long cnt=0;
        while(num>0){
            if(num&1){
                num=num-1;
                cnt++;
            }
            else{
                num/=2;
                cnt++;
            }
        }
        return cnt;
    }
};