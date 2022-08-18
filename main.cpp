#include <iostream>
#include <cstdlib>

using namespace std;
int multi2Numbers(const string& someOutputToUser) {
    cout << someOutputToUser << endl;
    int x, y;
    cin >> x >> y;
    int multiplication = x * y;

    return multiplication;
}

int sumAllNumbersFromNTillOne(int n) {

    if (n > 1) {
        return n + sumAllNumbersFromNTillOne(n - 1);
    } else {
        return 1;
    }
}


int main() {
    // Multiplication algorithm.

    int result = multi2Numbers("Please enter two numbers to multiply!");
    cout << "Result = " << result << endl;

    int number;
    cout << "Please enter a valid integer." << endl;
    cin >> number;
    cout <<  "sum of numbers between " << number << " and 1 = " << sumAllNumbersFromNTillOne(number) << endl;


    return 0;
}
