class Solution {
public:
    string addBinary(string a, string b) {
       
        int i = a.size() - 1;
        int j = b.size() - 1;
        string result;

        for(int carry = 0; i >=0 || j >= 0 || carry; i--, j--)
        {
            carry += (i >=0 ? a[i] - '0' : 0) + (j>=0 ? b[j] - '0' : 0);
            result.push_back((carry % 2) + '0');
            carry /= 2;
        }
        reverse(result.begin(), result.end());

        return result;

    }
};