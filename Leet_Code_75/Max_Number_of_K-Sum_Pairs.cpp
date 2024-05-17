#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int op = 0;
        int start = 0, end = nums.size()-1;
        while (start < end) {
            int sum = nums[start] + nums[end];
            if (sum == k) {
                op++;
                start++; end--;
            }
            else if (sum < k) start++;
            else end--;
        }
        return op;
    }
};

int main() {
    Solution work;
    vector<int> input = {1,2,3,4};
    cout << work.maxOperations(input,5) << endl;
    return 0;
}