class Solution {
public:
    string clearDigits(string s) {
        stack<char> temp;
        string result;

        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            isdigit(s[i]) ? temp.pop() : temp.push(s[i]);
        }

        while(!temp.empty())
        {
            result += temp.top();
            temp.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};