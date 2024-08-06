#include<iostream>
#include<stack>

using namespace std;

int findMinReversals(string s) {
    int n = s.length();

    // Check if the length is odd, as it's not possible to balance
    // an odd-length string with reversals.
    if (n % 2 != 0) {
        return -1; // Cannot be balanced
    }

    stack<char> ans;

    for (int i = 0; i < n; i++) {
        char ch = s[i];
        if (ch == '{') {
            ans.push(ch);
        } else {
            if (!ans.empty() && ans.top() == '{') {
                ans.pop();
            } else {
                ans.push(ch);
            }
        }
    }

    // The stack now contains only the unbalanced braces
    int unbalancedCount = ans.size();
    // Count the number of opening and closing braces in the unbalanced set
    int openingCount = 0, closingCount = 0;

    while (!ans.empty()) {
        if (ans.top() == '{') {
            openingCount++;
        } else {
            closingCount++;
        }
        ans.pop();
    }

    // Calculate the number of reversals needed
    int reversals = (openingCount + 1) / 2 + (closingCount + 1) / 2;

    return reversals;
}

int main() {
    string s = "}}}}}}{}{}}}{{}}}}{}}{{{}{}{}{}}{{{{}}}{}}";
    int result = findMinReversals(s);

    if (result == -1) {
        cout << "The string cannot be balanced as it has odd length." << endl;
    } else {
        cout << "Minimum number of reversals needed: " << result << endl;
    }

    return 0;
}
