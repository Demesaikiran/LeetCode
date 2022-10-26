//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.size() != b.size()) return false;
        
        unordered_map<char, int> hashmap;
        
        for(auto character : a)
        {

            if(hashmap.find(character) == hashmap.end())
                hashmap[character] = 1;
            else
                hashmap[character]++;
            
        }

        
        for(auto character : b)
        {
            if(hashmap.find(character) == hashmap.end() || hashmap[character] == 0) return false;
            
            hashmap[character] --;
        }
        
        return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends