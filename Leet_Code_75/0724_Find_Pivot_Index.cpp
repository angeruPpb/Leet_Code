#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum = 0, right_sum = 0;
        for (int i = 0; i < nums.size(); i++)
            right_sum += nums[i];
        for (int i = 0; i < nums.size(); i++) {
            if (right_sum - nums[i] == left_sum) return i;
            right_sum -= nums[i];
            left_sum += nums[i]; 
        }
         return -1;   
    }
};

int main() {
    Solution work;
    vector<int> input = {1,7,3,6,5,6};
    cout << work.pivotIndex(input) << endl;
    return 0;
}