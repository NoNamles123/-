#include <iostream>

int main()
{
    //завдання 1. 
    using namespace std;
    int nDay;
    int nMonth;
    int days_per_month = 30;
    cout << "Enter your birthday day (1-30): ";
    cin >> nDay;
    cout << "Enter your birthday month (1-12): ";
    cin >> nMonth;
    int dayOfYear = (nMonth - 1) * days_per_month + nDay;
    cout << "Your birthday is on day " << dayOfYear << " of the year!" << endl;
    //завдання 2
    int nSize;
	int byte_to_kb = 1024;
	int chars_per_page = 1200;
	cout << "Enter the size of the file in kilobytes: ";
	cin >> nSize;
	int totalChars = nSize * byte_to_kb;
	int nPages = totalChars / chars_per_page;
	cout << "Total full pages: " << nPages << endl;
	//завдання 3
	char a;
	int b;
	int number;
	cout << "Enter symbol: ";
	cin >> a;
	number = a - 'a' + 1;
	cout << "The position of the symbol in the alphabet: " << number << endl;
	cout << "Enter number (1-26): ";
	cin >> b;
	char big_letter = 'A' + b - 1;
	cout << "The symbol corresponding to the number: " << big_letter << endl;
}