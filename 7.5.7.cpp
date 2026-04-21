#include <iostream>

int main() {
    int n;
    int x;

    std::cout << "Введите количество бактерий: \n";
    std::cin >> n;
    std::cout << "Введите количество антибиотика: \n";
    std::cin >> x;

    if (n < 0 || x < 0) {
        std::cout << "Ошибка: значения не могут быть отрицательными.\n";
    } 
    else {
        int hour = 1;
        int power = 10; 

        while (n > 0 && power > 0) {
            n = n * 2; 
            n = n - (x * power); 

            if (n < 0) n = 0;   

            std::cout << "После " << hour << " часа бактерий осталось " << n << "\n";

            hour++;
            power--;
        }
    }
}
