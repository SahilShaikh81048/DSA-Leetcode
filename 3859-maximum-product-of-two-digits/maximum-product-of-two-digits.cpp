class Solution {
public:
    int maxProduct(int n) {
        int i = 0;
        int lmax=0;
        int dig;
        int max=0;
        while(n!=0){
            dig=n%10;
            n=n/10;
            if(dig>=max || dig>=lmax){
                if(dig>=lmax && dig<=max){
                    lmax=dig;
                }else{
                lmax=max;
                max=dig;

                }
            }
            i++;
        }
        return max*lmax;
    }
};