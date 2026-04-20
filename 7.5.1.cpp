#include <iostream>

int main() {
    int buckWheat = 100; 
    int month = 0;       

    std::cout << "Всего гречки было на начало подсчёта: " << buckWheat << " кг\n";

    while (buckWheat > 0) {
        month++;         
        buckWheat -= 4;  

        if (buckWheat > 0) {
            std::cout << "После " << month << " месяца у вас в запасе останется " << buckWheat << " кг гречки\n";
        } else {
            std::cout << "После " << month << " месяца гречка закончится\n";
        }
    }


}
