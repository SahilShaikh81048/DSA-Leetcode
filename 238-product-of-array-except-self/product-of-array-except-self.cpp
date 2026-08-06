class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref;
        vector<int> suff(nums.size());
        vector<int> ans;
        int s=nums.size();
        pref.push_back(nums[0]);
        for (int i=1;i<s;i++){
            pref.push_back(nums[i]*pref[i-1]);
        }
        s--;
        suff[nums.size()-1]=nums[s];
        for (int i=s-1;i>=0;i--){
            suff[i]=suff[i+1]*nums[i];
        }
        for (int i=0;i<nums.size();i++){
            if (i==0){
                ans.push_back(suff[i+1]);
            }else if(i==nums.size()-1){
                ans.push_back(pref[i-1]);
            }else{
                ans.push_back(pref[i-1]*suff[i+1]);
            }
        }
    return ans;
    }
};