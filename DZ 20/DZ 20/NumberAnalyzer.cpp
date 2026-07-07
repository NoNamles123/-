#include "NumberAnalyzer.h"

int digitValue(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;

    return 0;
}

int getFormat(string str) {
    if (str.length() > 1 && str[0] == '0' && (str[1] == 'x' || str[1] == 'X')) {
        return 16;
    }

    if (str.length() > 1 && str[0] == '0') {
        return 8;
    }

    return 10;
}

long long toDecimal(string str) {
    int base = getFormat(str);
    int start = 0;
    long long number = 0;

    if (base == 16) {
        start = 2;
    }

    for (int i = start; i < str.length(); i++) {
        number = number * base + digitValue(str[i]);
    }

    return number;
}

bool isMoreThanT(string str, int T) {
    return toDecimal(str) > T;
}

bool isPrime(long long number) {
    if (number < 2) {
        return false;
    }

    for (long long i = 2; i <= number / i; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int decimalLength(long long number) {
    int length = 0;

    if (number == 0) {
        return 1;
    }

    while (number > 0) {
        length++;
        number /= 10;
    }

    return length;
}