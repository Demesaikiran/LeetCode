class Solution {
public:
    int minPartitions(string n) {
        int result = 0;

        for(char ch : n)
        {
            int num = ch - 48;
            if(num > result) result = num;
            else
                continue;
        }

        return result;
    }
};