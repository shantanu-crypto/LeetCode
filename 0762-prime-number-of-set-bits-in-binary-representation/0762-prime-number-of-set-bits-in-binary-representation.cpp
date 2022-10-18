class Solution {
public:
    bool if_prime(int num){ //function to return if a number is prime(true) or not(false)
        if (num <=1){ //0 and 0 is not prime
            return false;
        }
        int i =2;
        while (i <= (num/2)){
            if (num % i == 0){
                return false;
            }
            i++;
        }
        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            if(if_prime(bitset<32>(i).count())){
                cnt++;
            }
        }
        return cnt;
    }
};