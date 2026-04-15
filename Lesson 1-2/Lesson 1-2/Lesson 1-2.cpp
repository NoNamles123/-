#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Hello ITStep " << 1 << 'w' << endl;
//	cout << "2+3 = " << (2 + 3) << endl;
//	cout << "This is my new\n string\n";
//	cout << "This \tis my new\t string" << endl;
//	cout << "This is my new\b string" << endl;
//	cout << "This is my new\r string" << endl;
//	cout << "This\" is my new\' string" << endl;
//	//коментарі
//	// однострічкові коментрі
//	/*
//	багатострічкові коментарі
//	*/
//	//Українська мова
//	cout << "Привіт світ" << endl;
//	//system("pause");
//	//system("cls");
//	//system("color 86");
//	//cout << "Hello all" << endl;
//	cout << setw(10) << setfill('-') << "HELP" << endl;
//	cout << setw(50) << setfill('#') << "#" << endl;
//	cout << "#############################################" << endl;
//	//типи даних
//	//цілі числа
//	//short -32767 до +32767 (2 байти)
//	//int -2147000000 до + 2147000000 (4 байти)
//	//long long  -9 214 700 000 000 000 000 до + 9 214 700 000 000 000 000 (8 байти)
//	////дробові типи
//	//float (7 Знаків 45.12345 12345.34) (2 байти)
//	//double(15 Знаків 45.12345 12345.34) (2 байти)
//	////символи
//	//char '2', -128 до 127
//	////логічний
//	//bool true/false 1/0. 
//	////модифікатори
//	//const - 
//	//unsigned 
//	//signed
//
//	//Назви змінни
//	//1) зрозумілі назви Applecounter
//	//2) починати з великої або маленької англ літери
//	//3) Не можуть починась з цифри, але може бути в середині
//	//4) не використовуйте зарахзервовані слова
//	//5) константи пишіть великими літерами
//
//	////стилі написання
//	//1) (camelStyle) appleCounterForNewSpring
//	//2) (snakeStyle) apple_counte_for_New_spring
//
//	int number; //основна змінна для розрахунків
//	number = 100;
//	char myChar = 'q';
//	float fNumber_1, fNumber_2 = 4.5, fNUmber;
//	cout << "Enter number value : ";
//	cin >> number;
//	cout << "Your enter number = " << number << endl;
//
//	const int constValue = 234;
//	//constValue = 100;
//
//	unsigned int temp = 4;
//	cout << "Temp = " << temp << endl;
//	temp = -4;
//	cout << "Temp = " << temp << endl;
//	//проста математика\
//	//* / + - %
//	int test = 12;
//	test = test % 5;
//	cout << "Test = " << test << endl;
//}


int main() {
	////Завдання 1
	//int test1 = 12;
	//float test2 = 4.5;
	//char test3 = 'q';
	//unsigned int test4 = 4;


	//cout << "Test1 = " << test1 << endl;
	//cout << "Test2 = " << test2 << endl;
	//cout << "Test3 = " << test3 << endl;
	//cout << "Test4 = " << test4 << endl;

	//cout << "enter test1 value : ";
	//cin >> test1;
	//cout << "enter test2 value : ";
	//cin >> test2;
	//cout << "enter test3 value : ";
	//cin >> test3;
	//cout << "enter test4 value : ";
	//cin >> test4;

	//cout << "New test1 = " << test1 << endl;
	//cout << "New test2 = " << test2 << endl;
	//cout << "New test3 = " << test3 << endl;
	//cout << "New test4 = " << test4 << endl;

	////Завдання 2


	//int radius;
	//cout << "Enter the radius of the circle: ";
	//cin >> radius;

	//double diameter = 2 * radius;
	//double perimeter = 2 * 3.14 * radius;
	//double area = 3.14 * radius * radius;

	//cout << "\n--- Calculation Results ---\n";
	//cout << "Radius:" << radius << endl;
	//cout << "Diameter:" << diameter << endl;
	//cout << "Perimeter:" << perimeter << endl;
	//cout << "Area:" << area << endl;
	//cout << setw (27)<< setfill('-') << endl;

	////Завдання 3
	//int number;
	//cout << "\nEnter yor number : ";
	//cin >> number;
	//cout << "Multiplication table for the number : " <<  endl;
	//cout << number << " x 1 = " << number * 1 << endl;
	//cout << number << " x 2 = " << number * 2 << endl;
	//cout << number << " x 3 = " << number * 3 << endl;
	//cout << number << " x 4 = " << number * 4 << endl;
	//cout << number << " x 5 = " << number * 5 << endl;
	//cout << number << " x 6 = " << number * 6 << endl;
	//cout << number << " x 7 = " << number * 7 << endl;
	//cout << number << " x 8 = " << number * 8 << endl;
	//cout << number << " x 9 = " << number * 9 << endl;
	//cout << number << " x 10 = " << number * 10 << endl;

	////завдання 4
	//int delta;
	//cout << "\nEnter the number of seconds : ";
	//cin >> delta;
	//cout << "Time in hours : " << delta / 3600 << endl;
	//cout << "Time in minutes : " << (delta % 3600) / 60 << endl;
	//cout << "Time in seconds : " << delta % 60 << endl;

	////завдання 5
	//int size;
	//int speed;

	//cout << "\nEnter the size of file in Kilobytes : ";
	//cin >> size;
	//cout << "Enter the speed of internet in bits per second : ";
	//cin >> speed;
	//long long totalSeconds = (long long)((size * 1024) / speed);
	//cout << "Time to download the file : " << totalSeconds / 3600 << " hours, "<< (totalSeconds % 3600) / 60 << " minutes, "<< totalSeconds % 60 << " seconds." << endl;

	//завдання 6
	float a;
	cout << "\nEnter float value(minimum 5 after point) : ";
	cin >> a;
	int b = a*1000;
	int result = b % 10;
	cout << "Third number after point : "<<result<<endl ;
	}