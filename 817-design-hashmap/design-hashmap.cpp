class MyHashMap {
public:
    vector<vector<int>> map;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        vector<int> arr;
        if(map.size()<1){
            arr.push_back(key);
            arr.push_back(value);
            map.push_back(arr);
            return;
        }
        for(int i=0;i<map.size();i++){
            arr.clear();
            if(map[i][0]==key){
                map[i][1]=value;
                break;
            }else if(i==map.size()-1){
                arr.push_back(key);
                arr.push_back(value);
                map.push_back(arr);
                break;
            }
        }
    }
    
    int get(int key) {
        for(int i=0;i<map.size();i++){
            if(map[i][0]==key){
                return map[i][1];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<map.size();i++){
            if(map[i][0]==key){
                map.erase(map.begin()+i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */