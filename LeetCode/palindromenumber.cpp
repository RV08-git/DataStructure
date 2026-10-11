#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    if (x % 10 == 0 && x != 0)
        return false;

    int rev = 0;

    while (x > rev) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }

    return x == rev || x == rev / 10;
}

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (isPalindrome(x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
