#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int n);

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "The sum of its natural numbers is: " << sumOfNaturalNumbers(n);

    return 0;
}

int sumOfNaturalNumbers(int n) {
    if(n != 0)
        return n + sumOfNaturalNumbers(n - 1);
    return 0;
}