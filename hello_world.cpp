#include <iostream>
#include <string>

int main() {
    // Считываем имя пользователя.
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Выводим персональное приветствие.
    std::cout << "Hello world from @" << name << '\n';
    return 0;
}
