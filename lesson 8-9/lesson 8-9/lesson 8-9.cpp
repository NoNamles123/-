#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	//завдання 1
    int N;
    cout << "Enter N (N > 0): ";
    cin >> N;
    int sum = 0;
    int i = 1;
    while (i <= N) {
        sum += i;
        i++;
    }
    cout << "summ: " << sum << endl;
    cout << endl;
	//завдання 2
    char symbol;
    int T;
    cout << "Enter a symbol: ";
    cin >> symbol;
    cout << "Enter the number of repetitions: ";
    cin >> T;

    while (T > 0) {
        cout << symbol;
        T--;
    }
    cout << endl;
	//завдання 3
    int inch = 1;
    while (inch <= 20) {
        float cm = inch * 2.54;
        cout << inch << " inch = " << cm << " cm" << endl;
        inch++;
    }
	cout << endl;
	//завдання 4
    int first1 = -10;
    while (first1 <= 10) {
        cout << first1 << " ";
        first1++;
    }
    cout << endl;
    float second2 = 0.01;
    while (second2 < 0.1) {
        cout << second2 << " ";
        second2 += 0.01;
    }
    cout << endl;
    char third3 = 'a';
    while (third3 <= 'k') {
        cout << third3 << " ";
        third3++;
    }
    cout << endl;
	//завдання 5
    int A, B;
    cout << "enter the length of A and B (A > B): ";
    cin >> A >> B;
    int count = 0;
    while (A >= B) {
        A -= B;
        count++;
    }
    cout << "Segment B will fit " << count << " times." << endl;
    cout << "Remaining unused length: " << A << " cm." << endl;
	//завдання 6
    char ch = 0;
    cout << "Enter symbols (space to exit): " << endl;

    while ((ch = _getch()) != ' ') {
        if (ch >= 'a' && ch <= 'z') {
            cout << (char)(ch - 32);
        }
        else if (ch >= 'A' && ch <= 'Z') {
            cout << (char)(ch + 32);
        }
    }
    cout << "Program completed." << endl;
    cout  << endl;
	//завдання 7
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int evenCount = 0;
    int oddCount = 0;
    if (number < 0) number = -number;
    if (number == 0) {
        evenCount = 1;
    }
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
        number /= 10;
    }
    cout << "even - " << evenCount << "; odd - " << oddCount << endl;
	cout << endl;

	//завдання 8
    int ddsa = 0;
    cout << "numbers: ";
    while (ddsa <= 500) {
        int temp = ddsa;
        int sumEven = 0;
        int sumOdd = 0;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                sumEven += digit;
            }
            else {
                sumOdd += digit;
            }
            temp /= 10;
        }
        if (sumEven > sumOdd) {
            cout << ddsa << ", ";
        }
        ddsa++;
    }
    cout << endl;
	//завдання 9
	//завдання 10

}