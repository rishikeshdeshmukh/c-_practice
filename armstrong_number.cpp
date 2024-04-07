#include <iostream>
#include <cmath> // Include cmath for pow function
using namespace std;

void armstrong(int first, int last) {
    for (int i = first; i <= last; i++) {
        int num = i;
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
}

int main() {
    int first, last;
    cout << "Enter the first digit: ";
    cin >> first;
    cout << "Enter the last digit: ";
    cin >> last;
    armstrong(first, last);
    return 0;
}
