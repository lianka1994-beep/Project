#include <iostream>

int main() {
    int a= 8;
    int b = 10;
    char command;

    while (true) {
        std::cout << "[Программа]: Марсоход находится на позиции " << a<< ", " << b << ", введите команду: ";
        std::cin >> command;

        if (command == 'w') command = 'W';
        if (command == 's') command = 'S';
        if (command == 'a') command = 'A';
        if (command == 'd') command = 'D';

        if (command == 'W') { 
            if (b < 20) b++;
        } 
        else if (command == 'S') { 
            if (b > 1) b--;
        } 
        else if (command == 'A') { 
            if (a> 1) a--;
        } 
        else if (command == 'D') { 
            if (a< 15) a++;
        } 
        else {
            std::cout << "[Ошибка]: Неверная команда! Используйте W, A, S, D.\n";
        }
    }


}
