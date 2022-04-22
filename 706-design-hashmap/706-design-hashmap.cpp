class MyHashMap {
public:
    MyHashMap() {
        currIndex = -1;
    }
    
    void put(int key, int value) {
        
        for(int i = 0; i <= currIndex; i++)
        {
            if(key == keyDb[i])
            {
                valueDb[i] = value;
                return;
            }
        }
        keyDb[++currIndex] = key;
        valueDb[currIndex] = value;
        
    }
    
    int get(int key) {
        
        for(int i = 0; i <= currIndex; i++)
            if(keyDb[i] == key) return valueDb[i];
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0; i <= currIndex; i++)
        {
            if(key == keyDb[i])
            {
                keyDb[i] = -1;
                valueDb[i] = -1;
                return;
            }
        }
        
    }
private:
    int keyDb[10000], valueDb[10000];
    int currIndex;
    
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */