class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 0,m=n;
        if ( n == 0 ){
            return 1;
        }
        while (m!=0){
            m=m>>1;
            mask=mask<<1;
            mask=mask|1;
        }
        return mask & ~n;
    }
};