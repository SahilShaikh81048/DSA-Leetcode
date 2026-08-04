class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        for(int num:nums){
            auto it = find(nums.begin(),nums.end(),val);
            if(it!=nums.end()){
                nums.erase(it);
                c++;
                nums.push_back(val+1);
                for (int nun:nums){
                    cout << nun;
                }
            }else{
                break;
            }
            cout << endl;
        }
        return nums.size()-c;
    }
};