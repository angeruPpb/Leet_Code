#include <iostream>
#include <vector>
using namespace std;

// Two pointer
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVal = 0;
        int start = 0;
        int end = height.size()-1;
        while (start != end){
            maxVal = max(maxVal,min(height[start],height[end])*(end-start));
            if (height[start] < height[end])
                start++;
            else
                end--;
        }
        return maxVal;
    }
};

int main() {
    Solution work;
    vector<int> input = {1,8,6,2,5,4,8,3,7};
    cout << work.maxArea(input) << endl;
    return 0;
}