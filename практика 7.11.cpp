// ConsoleApplication15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() 
{
    using namespace std;
    setlocale(LC_ALL, "");
    int num1, num2, userAnswer, correctAnswer;

    
    cout << "Введите первое однозначное число: ";
    cin >> num1;

    cout << "Введите второе однозначное число: ";
    cin >> num2;

    correctAnswer = num1 * num2;


    cout << "Сколько будет " << num1 << " умножить на " << num2 << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Правильно!" << std::endl;
    }
    else {
        cout << "Неправильно. Правильный ответ: " << correctAnswer << endl;
    }

    return 0;
}
