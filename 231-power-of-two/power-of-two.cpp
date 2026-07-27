class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool a;
        int ans=1;
        for (int i =1;i<=31;i++){
            if(ans == n){
                return true;
                break;
            }
            if (ans<INT_MAX/2){
            ans*=2;

            }
        }
        return false;
    }
};