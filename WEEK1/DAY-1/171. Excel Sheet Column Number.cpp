#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;  // Initialize result to store the final column number
        
        // Iterate over each character in the column title
        for (int i = 0; i < columnTitle.size(); i++) {
            // Multiply the current result by 26 (since there are 26 letters in the alphabet)
            result = result * 26;
            
            // Convert the current character to its corresponding number
            // 'A' corresponds to 1, 'B' to 2, ..., 'Z' to 26
            // Subtracting 'A' gives 0 for 'A', 1 for 'B', ..., 25 for 'Z'
            // We add 1 to align it with 1-based indexing
            result = result + (columnTitle[i] - 'A' + 1);
        }
        
        return result;  // Return the computed column number
    }
};

int main() {
    Solution solution;

    // Test case 1: "A" should return 1
    string columnTitle1 = "A";
    cout << "Column Title: " << columnTitle1 << ", Column Number: " << solution.titleToNumber(columnTitle1) << endl;

    // Test case 2: "AB" should return 28
    string columnTitle2 = "AB";
    cout << "Column Title: " << columnTitle2 << ", Column Number: " << solution.titleToNumber(columnTitle2) << endl;

    // Test case 3: "ZY" should return 701
    string columnTitle3 = "ZY";
    cout << "Column Title: " << columnTitle3 << ", Column Number: " << solution.titleToNumber(columnTitle3) << endl;

    return 0;
}
