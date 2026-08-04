class MyHashSet {
public:
    vector<int> hash;
    MyHashSet() {
    }
    
    void add(int key) {
        auto it = find(hash.begin(),hash.end(),key);
        if(it==hash.end()){
            hash.push_back(key);
        }
    }
    
    void remove(int key) {
        auto it = find(hash.begin(),hash.end(),key);
        if(it!=hash.end()){
            hash.erase(it);
        }
    }
    
    bool contains(int key) {
        auto it = find(hash.begin(),hash.end(),key);
        if(it!=hash.end()){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */