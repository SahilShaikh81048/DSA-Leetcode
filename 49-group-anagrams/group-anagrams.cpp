class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        string temp;
        for(string word:strs){
            temp=word;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(word);
        }
        for(auto pair:mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};