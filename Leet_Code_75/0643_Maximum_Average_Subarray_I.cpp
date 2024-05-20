#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double result = 0;
        double resp = 0;
        double n = nums.size();
        for (int i = 0; i < k; i++) 
            result += nums[i];
        if (n == k) return result / k;
        resp = result;

        for (int i = 0, j = k;j < n;j++,i++) {
            result -= nums[i];
            result += nums[j];
            resp = max(resp,result);
        }
        return resp / k;
    }
};

int main() {
    Solution work;
    vector<int> input = {1,12,-5,-6,50,3};
    cout << work.findMaxAverage(input,4) << endl;
    return 0;
}