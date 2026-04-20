#include <iostream>

int main() {
    int water;
    int milk;

    std::cout << "Введите количество воды в мл: \n";
    std::cin >> water;

    std::cout << "Введите количество молока в мл: \n";
    std::cin >> milk;

    int americanoCount = 0;
    int latteCount = 0;

    while (water >= 300 || (water >= 30 && milk >= 270)) {
        int choice;
        std::cout << "Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> choice;

        if (choice == 1) { 
            if (water >= 300) {
                water -= 300;
                americanoCount++;
                std::cout << "Ваш напиток готов.\n";
            } else {
                std::cout << "Не хватает воды\n";
            }
        } else if (choice == 2) { 
            if (water < 30) {
                std::cout << "Не хватает воды\n";
            } else if (milk < 270) {
                std::cout << "Не хватает молока\n";
            } else {
                water -= 30;
                milk -= 270;
                latteCount++;
                std::cout << "Ваш напиток готов.\n";
            }
        } else {
            std::cout << "Неверный выбор, попробуйте еще раз.\n";
        }
    }


    std::cout << "\n***Отчёт***\n";
    std::cout << "Ингредиенты подошли к концу.\n";
    std::cout << "Ингредиентов осталось:\n";
    std::cout << "            Вода: " << water << " мл\n";
    std::cout << "            Молоко: " << milk << " мл\n";
    std::cout << "Кружек американо приготовлено: " << americanoCount << "\n";
    std::cout << "Кружек латте приготовлено: " << latteCount << "\n";


}
