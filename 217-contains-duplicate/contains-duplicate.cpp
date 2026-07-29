class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> hola;
    for(int i=0;i<nums.size();i++){
        if (hola.count(nums[i])){
            return true;
        }
        hola.insert(nums[i]);
    }
    return false;

    }
};