#include <iostream>

int pow(int i, int j){
    if(j == 0){
        return 1;
    }
    int ans = i * pow(i, j - 1);
    return ans;
}

int powerOfPower(int A, int B, int C, int M) {
    int first = pow(B, C);
    int second = pow(A, first);
    return (second % M);
}

int main() {
    int A = 2, B = 2, C = 3, M = 5;
    int result = powerOfPower(A, B, C, M);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
