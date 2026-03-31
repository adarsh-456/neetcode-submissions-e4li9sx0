class MyHashMap {
public:
    vector<int> hash_map;
    int l;
    MyHashMap() {
        hash_map.resize(16, -1);
        l = 15;
    }
    
    void put(int key, int value) {
        if (key > l) {
            hash_map.resize(key + 1, -1);
            l = key;
        }
        hash_map[key] = value;
    }
    
    int get(int key) {
        if(key>l){
            return -1;
        }
        else if(hash_map[key]!=-1){
            return hash_map[key];
        }
        else return -1;
    }
    
    void remove(int key) {
        if(key<=l && hash_map[key]!=-1){
            hash_map[key]= -1;
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