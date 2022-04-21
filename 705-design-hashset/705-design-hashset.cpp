class MyHashSet {
public:
    MyHashSet() {
        pointer= -1;
    }
    
    void add(int key) {
        if(contains(key))
            return;
        else
            myHash[++pointer] = key;
            
    }
    
    void remove(int key) {
        if(pointer == -1) return;
        
        for(int i = 0; i<= pointer; i++) {
            if(key == myHash[i]) {
                myHash[i] = -1;
                return;
            }    
        }
    }
    
    bool contains(int key) {
        if(pointer == -1) return false;
        
        for(int i = 0; i <= pointer; i++)
            if(key == myHash[i]) return true;
        return false;
    }
private:
    int myHash[10000];
    int pointer;
    
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */