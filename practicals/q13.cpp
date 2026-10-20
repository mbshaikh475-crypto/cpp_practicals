
#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fact = 1;

    cout << "Enter a number (0 to 20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number between 0 and 20";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout << "Factorial = " << fact;
    return 0;
}
