class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> oc;
        for (int num:nums){
            oc[num]++;
        }
        int max=0;
        int ans=0;
        for(auto num:oc){
            if(max<num.second){
                max=num.second;
                ans=num.first;
            }
        }
        return ans;
    }
};