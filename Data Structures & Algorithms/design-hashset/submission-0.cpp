class MyHashSet {
public:
    vector<int> hash_map;
    int l;

    MyHashSet() {
        hash_map.resize(16, 0);
        l = 15;
    }
    
    void add(int key) {
        if (key > l) {
            hash_map.resize(key + 1, 0);
            l = key;
        }
        hash_map[key] = 1;
    }
    
    void remove(int key) {
        if (key <= l) {
            hash_map[key] = 0;
        }
    }
    
    bool contains(int key) {
        if (key > l) {
            return false;
        }
        return hash_map[key] == 1;
    }
};