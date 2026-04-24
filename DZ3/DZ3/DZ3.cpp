#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    //завдання 1
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    cin.ignore(1000, '\n');
    if (ch >= '0' && ch <= '9') {
        cout << "numbers" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "big chars" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "smal chars" << endl;
    }
    else {
        cout << "another symbols" << endl;
    }
    cout << endl;
    //завдання 2
    int a = rand() % 100 + 1;
    int b = rand() % 100 + 1;
    int c = rand() % 100 + 1;
    cout << "not sorted numbers: " << a << ", " << b << ", " << c << endl;
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    cout << "sorted numbers: " << a << ", " << b << ", " << c << endl;
    cout << endl;
    //завдання 3
    int low = 1;
    int high = 16;
    int mid;
    char ans;
    mid = (low + high) / 2;
    cout << "number is bigger for " << mid << "? (y/n): ";
    cin >> ans;
    switch (ans) {
    case 'y': low = mid + 1; break;
    case 'n': high = mid; break;
    }
    mid = (low + high) / 2;
    cout << "number is bigger for " << mid << "? (y/n): ";
    cin >> ans;
    switch (ans) {
    case 'y': low = mid + 1; break;
    case 'n': high = mid; break;
    }
    mid = (low + high) / 2;
    cout << "number is bigger for " << mid << "? (y/n): ";
    cin >> ans;
    switch (ans) {
    case 'y': low = mid + 1; break;
    case 'n': high = mid; break;
    }
    mid = (low + high) / 2;
    cout << "number is bigger for " << mid << "? (y/n): ";
    cin >> ans;
    switch (ans) {
    case 'y': low = mid + 1; break;
    case 'n': high = mid; break;
    }
    cout << "Guesset number: " << low << endl;
}