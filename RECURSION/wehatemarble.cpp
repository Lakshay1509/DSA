#include <iostream>
#include <string>

using namespace std;

bool checkMarblesPlacement(const string& binaryString) {
    int n = binaryString.size();
    for (int i = 1; i < n; ++i) {
        // Check if there are adjacent 1's
        if (binaryString[i - 1] == '1' && binaryString[i] == '1') {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string binaryString;

        cin >> binaryString;

        
        bool result = checkMarblesPlacement(binaryString);
        cout << (result ? "True" : "False") << endl;
    }

    return 0;
}
