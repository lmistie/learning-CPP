// algebraic_sum_N.cpp: определяет точку входа для консольного приложения.

#include <iostream>
#include <cmath>
using namespace std;
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    cout << "Введите N: ";
    unsigned n, // последний элемент суммы
             k, // степень
             sum = 0; // алгебраическая сумма
    cin >> n;
    cout << "Введите степень к: ";
    cin >> k;
 
    for (int counter = 1; counter <= n; counter++)
        sum += pow(counter, (float)k); // накапливаем сумму, согласно формуле
    cout << "Сумма: " << sum << endl;
    return 0;
}