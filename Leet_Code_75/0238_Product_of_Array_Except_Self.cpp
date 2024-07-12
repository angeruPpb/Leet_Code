#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int pre = 1, pos = 1;
        result.push_back(pre);
        for (int i = 0; i < n-1; i++) {
            pre *= nums[i];
            result.push_back(pre);
        }
        for (int i = n-1; i > 0; i--) {
            pos *= nums[i];
            result[i-1] *= pos;
        }
        return result;
    }
};

int main() {
    Solution work;
    vector<int> input = {1,2,3,4};
    vector<int> result = work.productExceptSelf(input);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}