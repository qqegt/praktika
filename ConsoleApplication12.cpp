// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {
    setlocale(LC_ALL, "");
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << "Сумма чисел от 1 до " << n << " равна " << sum << std::endl;

    return 0;
}