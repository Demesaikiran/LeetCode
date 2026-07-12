class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, vector<int>> indices;

        for(int i = 0; i < arr.size(); i++)
        {
            indices[arr[i]].push_back(i);
        }

        int rank = 1;
        for(auto& pair: indices)
        {
            for(int index : pair.second)
            {
                arr[index] = rank;
            }
            rank++;
        }

        return arr;
    }
};