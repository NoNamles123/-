#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int variant;
    float x, y;
    std::cout << "Choose your variant (1 - Winter, 2 - Spring, 3 - Summer, 4 - Autumn): ";
    std::cin >> variant;
    std::cout << "Enter x value: ";
    std::cin >> x;

    float PI = std::acos(-1.0);

    // завдання 1
    if (variant == 1) {
        float numerator = std::pow(std::sin(x) + 23 * x, 4);
        float denominator = std::sqrt(std::pow(std::abs(x), x - 3));
        y = numerator / denominator;
    }
    // завдання 2
    else if (variant == 2) {
        float numerator = 2 * std::cos(x) * std::pow(888 * std::pow(x, 4), 0.2);
        float denominator = std::cos(PI);
        y = numerator / denominator;
    }
    // завдання 3
    else if (variant == 3) {
        float numerator = std::pow(x, 2 * std::sqrt(std::abs(x)));
        float denominator = std::sin(x) + std::cos(PI);
        y = numerator / denominator;
    }
    // завдання 4
    else if (variant == 4) {
        float numerator = std::cos(123 * x) + std::sqrt(4 * std::abs(x));
        float denominator = std::abs(std::sin(std::pow(2, x)) + PI);
        y = numerator / denominator;
    }
    else {
        std::cout << "Invalid variant!" << std::endl;
        return 0;
    }
    std::cout << "Result y = " << y << std::endl;
    // 5 завдання: Генератор пароля
    char password[8];
    password[0] = 'a' + rand() % 26;
    password[1] = 'a' + rand() % 26;
    password[2] = 'A' + rand() % 26;
    password[3] = 'A' + rand() % 26;
    password[4] = '0' + rand() % 10;
    password[5] = '0' + rand() % 10;
    password[6] = '0' + rand() % 10;
    password[7] = '\0';
    std::cout << "Generated password: " << password << std::endl;
}