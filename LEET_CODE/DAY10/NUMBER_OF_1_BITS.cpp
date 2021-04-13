class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a=0;
        while(n){
            if(n&1)
                a++;
            n=n>>1;
        }
        
        return a;
    }
};
