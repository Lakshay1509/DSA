#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 0;
    char ch = 'A';
    
    while (i < n) {
        int j = 0;
        while (j <= i) {
            cout << ch << " ";
            ch++; // Incrementing the character
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
