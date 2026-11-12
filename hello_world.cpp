#include <iostream>
#include <string>

int main() {
    // Запрашиваем имя пользователя с клавиатуры.
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Печатаем приветствие, персонализированное по имени.
    std::cout << "Hello world from @" << name << '\n';
    return 0;
}
