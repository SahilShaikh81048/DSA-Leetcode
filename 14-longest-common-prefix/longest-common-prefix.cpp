class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs[0]==""){
            return "";
        }
        string stro;
        int i=0,j=0,mx=0;
        for (string str:strs){
            if(str.size()>mx){
                mx=str.size();
            }
        }
        if(stro==""){
            stro+=strs[i][j];
            cout << stro << endl;
            i++;}
        while(i<strs.size()){
            cout << stro << endl;
            if(stro[j]==strs[i][j]){
                if(i==strs.size()-1){
                    i=0;
                    j++;
                    
                    if(j>mx-1){
                        break;
                    }
                    stro+=strs[i][j];
                }
            i++;
            }else{
                stro.pop_back();
                break;
            }
        }
        return stro;
    }
};