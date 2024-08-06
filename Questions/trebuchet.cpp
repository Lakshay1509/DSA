#include<iostream>
#include<string>
using namespace std;

int main() {

    int t;
    cin >> t;

    int sum =0;

    while (t--) {  // Loop 't' times

        string s;
        cin >> s;

        int length = s.size();
        int start = 0;
        int end = s.size() - 1;
        int digit = 0;

        while (start < end) {

            if (isdigit(s[start]) && isdigit(s[end])) {
                int num1 = int(s[start]) - 48;
                int num2 = int(s[end]) - 48;
                digit = (num1 * 10) + num2;
                sum = sum + digit;
                start++;
                end--;
                break;

            } else if(isalpha(s[start])){
                start++;
            }
            else{
                end--;

            }
        }

        if (digit == 0) {
            for (int i = 0; i < length; i++) {
                if (isdigit(s[i])) {
                    int num1 = int(s[i]) - 48;
                    int digit = (num1 * 10) + num1;
                    sum = sum + digit;
                    break;
                }
            }
        }

    }

    cout<<sum<<endl;

    return 0;
}
