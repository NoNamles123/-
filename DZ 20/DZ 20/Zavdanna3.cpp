#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MinMax.h"

using namespace std;

#define RANDOM_NUMBER (rand() % 100)

int main() {
    srand(time(0));

    int A = RANDOM_NUMBER;
    int B = RANDOM_NUMBER;
    int C = RANDOM_NUMBER;
    int D = RANDOM_NUMBER;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    cout << "D = " << D << endl;

    cout << "Min: " << findMin(A, B, C, D) << endl;
    cout << "Max: " << findMax(A, B, C, D) << endl;

    return 0;
}