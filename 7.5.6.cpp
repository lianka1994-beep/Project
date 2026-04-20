#include <iostream>
#include <string>

int main() {
    int total, signs;
    std::cout << "Длина и количество знаков: \n";
    std::cin >> total >> signs;

    if (signs > total) {
        std::cout << "Ошибка!";
        return 0;
    }

    int left = (total - signs) / 2;
    int right = total - signs - left;

    std::cout << std::string(left, '~') << std::string(signs, '!') << std::string(right, '~');


}
