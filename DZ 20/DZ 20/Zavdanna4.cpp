#include <iostream>
#include <string>
#include "NumberAnalyzer.h"

using namespace std;

#define T 100

int main() {
    string str;
    long long number;
    int format;

    cout << "Enter number: ";
    getline(cin, str);

    number = toDecimal(str);
    format = getFormat(str);

    cout << "Decimal number: " << number << endl;

    if (isMoreThanT(str, T)) {
        cout << "Number is bigger than T" << endl;
    }
    else {
        cout << "Number is not bigger than T" << endl;
    }

    if (isPrime(number)) {
        cout << "Number is prime" << endl;
    }
    else {
        cout << "Number is not prime" << endl;
    }

    if (format == 10) {
        cout << "Format: decimal" << endl;
    }
    else if (format == 8) {
        cout << "Format: octal" << endl;
    }
    else {
        cout << "Format: hexadecimal" << endl;
    }

    cout << "Decimal length: " << decimalLength(number) << endl;

    return 0;
}