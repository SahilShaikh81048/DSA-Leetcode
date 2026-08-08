class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums2;
        if(nums.size()<1){
            return 0;
        }
        for (int num:nums){
            nums2.insert(num);
        }
        int count=1,current=0,var=1;
        for (int num:nums2){
            auto it = nums2.find(num-1);
            if(it==nums2.end()){
                current=num;
                count=1;
                while (nums2.find(current+1)!=nums2.end()){
                    count++;
                    current++;
                }
                if (var<count){
                    var=count;
                }
            }
        }
        return var;
    }
};