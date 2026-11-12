#include <iostream>
#include <string>

int
main()
{
  // Считываем имя целиком, включая пробелы.
  std::string name;
  std::cout << "Введите имя: ";
  std::getline(std::cin, name);

  if (name.empty()) {
    std::cerr << "Имя не должно быть пустым.\n";
    return 1;
  }

  // Формируем приветствие с именем пользователя.
  std::cout << "Hello world from @" << name << '\n';
  return 0;
}
