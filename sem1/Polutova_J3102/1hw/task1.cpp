// Задача: переполнение по типу char и вывод результата в терминал

#include <iostream>

int main() {
    char ch = 127;

// Вызываем переполнение сразу при выводе, а также переводим символ в числовое значение, чтобы убедиться, что переполнение выполнилось

    std::cout << ++ch << ' ' << (int)ch;
}
