class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int elem:nums){
            count[elem]++;
        }
        vector<pair<int,int>> pp;
        for (auto pair:count){
            pp.push_back(pair);
        }
        sort(pp.begin(),pp.end(), [](pair <int,int> a, pair <int,int> b){
            return a.second > b.second;
        });
        vector<int> ans;
        for( int i=0;i<k;i++){
            ans.push_back(pp[i].first);
        }
        return ans;
    }
};