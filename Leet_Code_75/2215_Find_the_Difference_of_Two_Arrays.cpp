#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Memory 95% beats
/*class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> list;
        int i= 0;
        bool rep = false;
        while (i<nums1.size()){
            for (int j = i+1; j < nums1.size(); j++){
                if(nums1[i]==nums1[j]){
                    nums1.erase(nums1.begin()+j);
                    i--;
                    break;
                }
            }
            i++;
        }
        i=0;
        while (i<nums2.size()){
            for (int j = i+1; j < nums2.size(); j++){
                if(nums2[i]==nums2[j]){
                    nums2.erase(nums2.begin()+j);
                    i--;
                    break;
                }
            }
            i++;
        }
        i=0;
        while(i<nums1.size()){
            for (int j = 0; j < nums2.size(); j++){
                if (nums1[i] == nums2[j]){
                    nums1.erase(nums1.begin()+i);
                    nums2.erase(nums2.begin()+j);
                    i--;
                    break;
                }
            }
            i++;
        }
        list = { nums1,nums2};
        return list;
    }
};*/

// Best result
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> list1(nums1.begin(), nums1.end());
        unordered_set<int> list2(nums2.begin(), nums2.end());
        nums1.clear();
        nums2.clear();
        for (int n : list1) {
            if (list2.count(n) == 0)
                nums1.push_back(n);
            else
                list2.erase(n);
        }
        for (int n : list2)
            nums2.push_back(n);
        return {nums1, nums2};
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,4,6};
    vector<vector<int>> list = sol.findDifference(nums1, nums2);
    for (int i = 0; i < list.size(); i++){
        for (int j = 0; j < list[i].size(); j++){
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}