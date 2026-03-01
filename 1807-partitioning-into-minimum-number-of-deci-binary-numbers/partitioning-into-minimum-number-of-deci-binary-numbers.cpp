class Solution {
public:
    int minPartitions(string n) {
        int result = 0;

        for(char ch : n)
        {
            result = ch - '0' > result ? ch -'0' : result; 
        }

        return result;
    }
};