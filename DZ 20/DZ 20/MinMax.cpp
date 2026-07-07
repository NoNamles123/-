#include "MinMax.h"

int findMin(int A, int B, int C, int D) {
    int min = A;

    if (B < min) min = B;
    if (C < min) min = C;
    if (D < min) min = D;

    return min;
}

int findMax(int A, int B, int C, int D) {
    int max = A;

    if (B > max) max = B;
    if (C > max) max = C;
    if (D > max) max = D;

    return max;
}