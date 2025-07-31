class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res, cur;

        for(auto i: arr)
        {
            unordered_set<int> next;
            next.insert(i);
            for(auto x: cur)
                next.insert(x|i);
            cur = next;
            for(auto x: cur)
                res.insert(x);
        }
        return res.size();
    }
};