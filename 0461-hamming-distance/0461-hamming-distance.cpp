class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        while(x!=0 || y!=0){
            if(x%2!=0 and y%2==0){
                cnt++;
                x>>=1;
                y>>=1;
            }
            else if(x%2==0 and y%2!=0){
                cnt++;
                x>>=1;
                y>>=1;
            }
            else{
                x>>=1;
                y>>=1;
            }
        }
        return cnt;
    }
};