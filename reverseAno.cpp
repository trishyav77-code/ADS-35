#include <iostream>
using namespace std;

void reverse(int n) {
    if (n == 0) {
        return;
    }

    cout << n % 10;   // take last digit
    reverse(n / 10);  // remove last digit
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    reverse(n);

    return 0;
}