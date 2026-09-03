/* Brute Force Approach 

Algorithms 
- Initialize a variable to store the sum as 0.
- Start a loop from 1 and go up to the given number.
- In each iteration, add the current number to the sum.
- After the loop finishes, the sum variable will hold the result.
- Return or print the sum.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
        int sumOfNaturalNumbers(int N) {
        
        int sum = 0;

        
        for (int i = 1; i <= N; i++) {
            
            sum += i;
        }

        
        return sum;
    }
};
int main() {
    
    Solution obj;

    
    int N;
    cin >> N;

    
    int result = obj.sumOfNaturalNumbers(N);

   
    cout << result << endl;
    return 0;
}