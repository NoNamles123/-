#include <iostream>

using namespace std;

#define MIN_INT(A, B) (((A) < (B)) ? (A) : (B))

int main() {
    int A, B;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    cout << "Min: " << MIN_INT(A, B) << endl;

    return 0;
}