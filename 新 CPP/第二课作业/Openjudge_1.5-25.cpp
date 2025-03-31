#include <iostream>

int main() {
    int a, b, c;
    int decimal_num = 0;

    for (a = 1; a <= 6; ++a) {
        for (c = 1; c <= 6; ++c) {
            b = 24 * a - 40 * c;

            if (b >= 0 && b <= 6) {
                decimal_num = a * 49 + b * 7 + c;

                std::cout << decimal_num << std::endl;
                std::cout << a << b << c << std::endl;
                std::cout << c << b << a << std::endl;

                return 0;
            }
        }
    }

    return 1;
}
