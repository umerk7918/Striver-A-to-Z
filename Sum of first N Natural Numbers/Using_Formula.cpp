#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int sumOfNaturalNumbers(int N) {
        
        return (N * (N + 1)) / 2;
    }
};


int main() {
    Solution obj;
    int N;
    cin >> N;
    cout << obj.sumOfNaturalNumbers(N) << endl;
    return 0;
}
