#include <iostream>
#include <vector>
#include <algorithm> // Para std::remove
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int cont=0;
        int tmp;
        vector<int> occur;
        while(!arr.empty()){
            tmp = arr[0];
            cont = count(arr.begin(),arr.end(),tmp);
            if (count(occur.begin(),occur.end(),cont) == 0){
                occur.push_back(cont);
                arr.erase(remove(arr.begin(),arr.end(),tmp),arr.end());
            }
            else
                return false;
        }
        return true;
    }
};

int main(){
    Solution sol;
    vector<int> arr = {1,2,2,1,1,3};
    cout << sol.uniqueOccurrences(arr) << endl;
    return 0;
}
