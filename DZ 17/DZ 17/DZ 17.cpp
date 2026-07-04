#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>

using namespace std;

// Завдання 1
bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// Завдання 3
string readPassword() {
    string password;
    char ch;
    DWORD read;

    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);

    DWORD oldMode;
    GetConsoleMode(hStdin, &oldMode);

    DWORD newMode = oldMode;
    newMode = newMode & ~ENABLE_ECHO_INPUT;
    newMode = newMode & ~ENABLE_LINE_INPUT;

    SetConsoleMode(hStdin, newMode);

    while (true) {
        ReadConsoleA(hStdin, &ch, 1, &read, NULL);

        if (ch == '\r') {
            cout << endl;
            break;
        }

        if (ch == '\b') {
            if (password.length() > 0) {
                password.erase(password.length() - 1, 1);
                cout << "\b \b";
            }
        }
        else {
            password += ch;
            cout << "*";
        }
    }

    SetConsoleMode(hStdin, oldMode);

    return password;
}

int main() {
    // Завдання 1
    string str;
    char ch;


    cout << "Enter string: ";
    getline(cin, str);

    cout << "Enter vowel ch: ";
    cin >> ch;
    cin.ignore(1000, '\n');

    for (char& c : str) {
        if (isVowel(c)) {
            c = ch;
        }
    }

    cout << "Result: " << str << endl;


    // Завдання 2
    string line;
    int count[11] = {};
    int len = 0;


    cout << "Enter string: ";
    getline(cin, line);

    for (int i = 0; i <= line.length(); i++) {
        if (i < line.length() && line[i] != ' ') {
            len++;
        }
        else {
            if (len >= 2 && len <= 10) {
                count[len]++;
            }

            len = 0;
        }
    }

    cout << "Word count by length:" << endl;

    for (int i = 2; i <= 10; i++) {
        cout << i << " symbols: " << count[i] << endl;
    }


    // Завдання 3
    string correctPassword = "qwerty123";
    string password;
    int maxAttempts = 3;


    for (int attempt = 1; attempt <= maxAttempts; attempt++) {
        cout << "Enter password: ";
        password = readPassword();

        if (password == correctPassword) {
            cout << "Hello! Password is correct." << endl;
            return 0;
        }

        if (attempt < maxAttempts) {
            cout << "Error. Try again." << endl;
        }
    }

    cout << "Attempts are over." << endl;

    return 0;
}