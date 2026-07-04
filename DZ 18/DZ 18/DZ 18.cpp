#include <iostream>
#include <string>

using namespace std;

int mystrcmp(string str1, string str2) {
    if (str1 == str2) {
        return 0;
    }

    if (str1 > str2) {
        return 1;
    }

    return -1;
}

int StringToNumber(string str) {
    int number = 0;

    for (int i = 0; i < str.length(); i++) {
        number = number * 10 + (str[i] - '0');
    }

    return number;
}

string NumberToString(int number) {
    string str = "";

    if (number == 0) {
        return "0";
    }

    while (number > 0) {
        char digit = number % 10 + '0';
        str = digit + str;
        number /= 10;
    }

    return str;
}

string Uppercase(string str1) {
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = str1[i] - 32;
        }
    }

    return str1;
}

string Lowercase(string str1) {
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }
    }

    return str1;
}

string mystrrev(string str1) {
    string result = "";

    for (int i = str1.length() - 1; i >= 0; i--) {
        result += str1[i];
    }

    return result;
}

int main() {
    string str1, str2;
    string numberString;
    int number;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    cout << "mystrcmp result: " << mystrcmp(str1, str2) << endl;

    cout << endl;

    cout << "Enter number as string: ";
    getline(cin, numberString);

    cout << "StringToNumber result: " << StringToNumber(numberString) << endl;

    cout << endl;

    cout << "Enter number: ";
    cin >> number;
    cin.ignore();

    cout << "NumberToString result: " << NumberToString(number) << endl;

    cout << endl;

    cout << "Uppercase result: " << Uppercase(str1) << endl;
    cout << "Lowercase result: " << Lowercase(str1) << endl;
    cout << "mystrrev result: " << mystrrev(str1) << endl;

    return 0;
}