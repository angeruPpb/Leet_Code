#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string result = "";
        for (int i = 0; i < s.size();i++) {
            if (s[i] == '*')
                result.erase(result.size()-1);
            else result += s[i];
        }
        return result;
    }
};

int main() {
    Solution work;
    string input = "ab**c";
    cout << work.removeStars(input) << endl;
    return 0;
}