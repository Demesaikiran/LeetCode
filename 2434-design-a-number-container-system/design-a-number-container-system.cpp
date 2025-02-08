class NumberContainers {
public:

    unordered_map<int, set<int>> value_map;
    unordered_map<int, int> key_map;

    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(key_map.find(index) != key_map.end())
        {
            int value = key_map[index];
            value_map[value].erase(index);
            if(value_map[value].size() == 0)
                value_map.erase(value);
        }
        key_map[index] = number;
        value_map[number].insert(index);
    }
    
    int find(int number) {
        if(value_map.find(number) != value_map.end())
            return *value_map[number].begin();
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */