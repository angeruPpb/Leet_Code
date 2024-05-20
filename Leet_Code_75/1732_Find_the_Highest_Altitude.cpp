#include <iostream>
#include <vector>
using namespace std;

// Preffix sum
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int Altitude = 0;
        int Max = Altitude;
        for (int i = 0; i < gain.size(); i++){
            Altitude += gain[i];
            Max = max(Max,Altitude);
        }
        return Max;
    }
};

int main() {
    Solution work;
    vector<int> input = {-5,1,5,0,-7};
    cout << work.largestAltitude(input) << endl;
    return 0;
}