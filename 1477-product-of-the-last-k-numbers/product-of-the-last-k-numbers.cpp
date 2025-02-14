class ProductOfNumbers {
public:
    vector<int> buffer;
    ProductOfNumbers() {
        buffer.push_back(1);
    }
    
    void add(int num) 
    {
        if (num == 0) 
        {
            buffer.clear();
            buffer.push_back(1);
            return;
        }

        buffer.push_back(buffer.back() * num);
    }

    int getProduct(int k) 
    {
        int n = buffer.size();
        return n <= k ? 0 : buffer.back() / buffer[n - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */