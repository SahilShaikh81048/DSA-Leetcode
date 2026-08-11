class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> storage;
        int h,tot=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                    if(storage.size()>=2){
                        h=storage.size();
                        storage.push_back(storage[h-1]+storage[h-2]);
                    }
            }
            else if (operations[i]=="D"){
                    if(storage.size()>=1){
                        h=storage.size();
                        storage.push_back(storage[h-1]*2);
                    }
            }
            else if (operations[i]=="C"){ 
                    if(storage.size()>=1){
                        h=storage.size();
                        storage.pop_back();
                    }
            }
            else{
                    storage.push_back(stoi(operations[i]));
            }
        }
        for (int i=0;i<storage.size();i++){
            tot+=storage[i];
        }
        return tot;
    }
};