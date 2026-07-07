#include <iostream>
#include <cmath>

using namespace std;

#define SUM(A, B) ((A) + (B))
#define SUB(A, B) ((A) - (B))
#define MUL(A, B) ((A) * (B))
#define DIV(A, B) ((double)(A) / (B))
#define POW(A, B) (pow((A), (B)))

int main() {
    int A, B;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Sum: " << SUM(A, B) << endl;
    cout << "Sub: " << SUB(A, B) << endl;
    cout << "Mul: " << MUL(A, B) << endl;

    if (B != 0) {
        cout << "Div: " << DIV(A, B) << endl;
    }
    else {
        cout << "Div: impossible" << endl;
    }

    cout << "Pow: " << POW(A, B) << endl;

    return 0;
}