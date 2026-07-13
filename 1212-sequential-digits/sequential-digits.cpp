class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";

        vector<int> result;

        int min_len = to_string(low).size();
        int max_len = to_string(high).size();

        for(int len = min_len; len <= max_len; len++)
        {
            for(int i = 0; i + len <= 9; i++)
            {
                int num = stoi(digits.substr(i, len));

                if(num >= low && num <= high)
                    result.push_back(num);
            }
        }

        return result;
    }
};