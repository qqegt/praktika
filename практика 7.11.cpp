// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "");

    int num1, num2;

    // Ввод двух однозначных чисел
    cout << "Введите первое однозначное число: ";
    cin >> num1;

    cout << "Введите второе однозначное число: ";
    cin >> num2;

    // Подсчет правильного ответа
    int correctAnswer = num1 * num2;

    // Вопрос пользователю
    cout << "Сколько будет " << num1 << " умножить на " << num2 << "? ";

    int userAnswer;
    cin >> userAnswer;

    // Проверка ответа пользователя
    if (userAnswer == correctAnswer) {
        cout << "Правильно! Ответ: " << correctAnswer << endl;
    }
    else {
        cout << "Неправильно. Правильный ответ: " << correctAnswer << endl;
    }

    return 0;
}
