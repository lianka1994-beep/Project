#include <iostream>

int main() {
    int size; 
    std::cout << "Введите размер сетки (нечетное число для симметрии): \n";
    std::cin >> size;

    int center = size / 2;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == center && j == center) {
                std::cout << "+";
            } else if (i == 0 && j == center) {
                std::cout << "^";
            } else if (i == center && j == size - 1) {
                std::cout << ">";
            } else if (i == center) {
                std::cout << "-";
            } else if (j == center) {
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }


}
