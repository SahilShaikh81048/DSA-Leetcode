class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0,b=0;
        for (int i=0;i<nums.size();i++){
            if (a<nums[i]){
                if (b<nums[i]){
                    a=b;
                    b=nums[i];
                }
                else{
                    a=nums[i];
                }
            }
        } 
        return (a-1)*(b-1);
    }
};