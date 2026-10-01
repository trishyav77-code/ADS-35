#include <iostream>
using namespace std;

int reverse(int n) {
    if (n == 0) {
        return 0;
    }

    cout << n % 10;   // take last digit
    reverse(n / 10);  // remove last digit
    return 0;
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    reverse(n);

    return 0;
}