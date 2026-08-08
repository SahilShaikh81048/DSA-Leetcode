class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int thres=(nums.size()/3);
        unordered_map<int,int> map;
        vector<int> ans;
        for(int num:nums){
            map[num]++;
        }
        for(auto nom:map){
            if(nom.second>thres){
                ans.push_back(nom.first);
            }
        }
        return ans;
    }
};