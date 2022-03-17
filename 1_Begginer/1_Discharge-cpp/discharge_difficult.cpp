#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    setlocale(LC_ALL,"RUS");
    cout << "\tДеление числа на разряды\n";
    int number;
    start:
    cout << "\nВведите пятизначное число: ";
    cin >> number;
    if ((number>9999) && (number<=99999))
    for (int i = 0; i < 5; i++) // Цикл, который выделяет разряды числа
        cout << i+1 << "-я цифра = " << (number/static_cast<int>(pow ( 10 , ( 4 - i ))))%10 << endl;
    else
    {
        cout << "\nВы ввели неверное число!\n";
        goto start;
    }
    int menu_num;
    menu:
    cout << "\n1 - Продолжить работу\n2 - Выход\n\nСделайте выбор (1 или 2): ";
    cin >> menu_num;
    switch (menu_num)
        {
            case 1: {goto start; break;}
            case 2: {return 0; break;}
            default: {cout << "\nБудьте внимательнее!\n"; goto menu;}
        }
    return 0;
    // system("pause");
}