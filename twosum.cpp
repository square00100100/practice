#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> s_vec(s.begin(), s.end());
        vector<char> t_vec(t.begin(), t.end());
        sort(s_vec.begin(), s_vec.end());
        sort(t_vec.begin(), t_vec.end());
        return s_vec == t_vec;
        
        
    }
};

int main() {
    string s = "a";
    string t = "ab";
    Solution solution;
    bool result = solution.isAnagram(s, t);
    if (result == true) {
        cout << "answer is an anagram";
    }
    else {
        cout << "answer is false";
    }
}
