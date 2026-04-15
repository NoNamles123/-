#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main() {
	//завдання 1
    float angledegrees;
    float PI = 3.1415;
    cout << "Enter the angle in degrees: ";
    cin >> angledegrees;
    float angleradians = angledegrees * (PI / 180.0);
    cout << "\n--- Results for " << angledegrees << " degrees ---" << endl;
    cout << "Radians:  " << angleradians << endl;
    cout << "Sin:      " << sin(angleradians) << endl;
    cout << "Cos:      " << cos(angleradians) << endl;
    cout << "Tan:      " << tan(angleradians) << endl;
	//завдання 2
    float a;
    float b; 
    float x;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    x = (a * (b - 12)) / 2;
    cout << "\nResult x = " << x << endl;
	//завдання 3
	float x1;
	float x2;
	float y1;
	float y2;
    cout << "Enter center coordinates O (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter point coordinates A (x2 y2): ";
    cin >> x2 >> y2;
    float radius = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float diameter = 2 * radius;
    float area = PI * pow(radius, 2);
    float perimeter = 2 * PI * radius;
    cout << "\n--- Circle Results ---" << endl;
    cout << "Radius:    " << radius << endl;
    cout << "Diameter:  " << diameter << endl;
    cout << "Area:      " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
	//завдання 4
    float x11;
    float y11; 
    float x22; 
    float y22; 
    float x3; 
    float y3;
    cout << "Enter coordinates for vertex A (x1 y1): ";
    cin >> x11 >> y11;
    cout << "Enter coordinates for vertex B (x2 y2): ";
    cin >> x22 >> y22;
    cout << "Enter coordinates for vertex C (x3 y3): ";
    cin >> x3 >> y3;
    float sideAB = sqrt(pow(x22 - x11, 2) + pow(y22 - y11, 2));
    float sideBC = sqrt(pow(x3 - x22, 2) + pow(y3 - y22, 2));
    float sideCA = sqrt(pow(x11 - x3, 2) + pow(y11 - y3, 2));
    float perimeterx3 = sideAB + sideBC + sideCA;
    cout << "\n--- Triangle Results ---" << endl;
    cout << "Side AB:    " << sideAB << endl;
    cout << "Side BC:    " << sideBC << endl;
    cout << "Side CA:    " << sideCA << endl;
    cout << "------------------------" << endl;
    cout << "Total Perimeter: " << perimeterx3 << endl;
	//завдання 5
    float a1; 
    float b1; 
    float c1;
    cout << "Enter the lengths of triangle sides (a, b, c): ";
    cin >> a1 >> b1 >> c1;
    float p = (a1 + b1 + c1) / 2.0;
    float la = (2.0 / (b1 + c1)) * sqrt(b1 * c1 * p * (p - a1));
    float lb = (2.0 / (a1 + c1)) * sqrt(a1 * c1 * p * (p - b1));
    float lc = (2.0 / (a1 + b1)) * sqrt(a1 * b1 * p * (p - c1));
    cout << "\n--- Bisector Lengths ---" << endl;
    cout << "Bisector to side a : " << la << endl;
    cout << "Bisector to side b : " << lb << endl;
    cout << "Bisector to side c : " << lc << endl;
	//завдання 6
    float h;
    float g;
    float j; 
    float result_a; 
    float result_b; 
    float result_c;
    cout << "Enter x, y, z: ";
    cin >> h >> g >> j;
    result_a = (sqrt(abs(3 - pow(h, 2))) - cbrt(1 + abs(j - h))) / (1 - pow(h, 2) / 2.0 + pow(j, 2) / 4.0 - pow(g, 2) / 8.0);
    result_b = (sin(pow(h, 2)) - abs(-j + sqrt(pow(g, 4)))) /(1 - (pow(h, 2) + pow(g, 2) + pow(j, 2)) / (h * pow(g, j) + 2));
    result_c = (1.0 / (pow(h, 2) + 2) + pow(g, 2) / (pow(j, 4) + 4) - pow(h, g) / (pow(j, 6) + 6)) /(cos(pow(h, 2) - cbrt(abs(j - g)) + 3));
    cout << "\n--- Calculation Results ---" << endl;
    cout << "Result a: " << result_a << endl;
    cout << "Result b: " << result_b << endl;
    cout << "Result c: " << result_c << endl;
}
