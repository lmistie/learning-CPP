/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   discharge_difficult.cpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lmistie <romaniy11052001@gmail.com>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2022/04/23 16:41:11 by lmistie      #+#   ##    ##    #+#       */
/*   Updated: 2022/04/23 16:41:12 by lmistie     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	setlocale(LC_ALL,"RUS");
    int ctr = 0; // счетчик символов в строке
    char str[10]; // символьная строка
	start:
	cout<<"Введите пожалуйста число: "<<endl;
	cin>>str;
    while (str[ctr])  // пока не конец строки
    {
    	if (isalpha(str[ctr])) // если текущий символ строки буква
	  			break;
      	ctr++; // инкремент счётчика
    } // конец while
	int a = atoi(str);
    if (a == 0 && a<=9999 || a>=100000)
    {
        cout<<"Вы ввели неверное число либо не число вовсе. Число должно быть пятизначным.\n\n";
    }
    else
    {
        if (a>=100000)
        {
            cout<<"Вы ввели неверное число либо не число вовсе. Число должно быть пятизначным.\n\n";
        }
        else
        {
            cout<<endl;
            cout<<"1 цифра равна "<<(a/10000)<<"\n";
            cout<<"2 цифра равна "<<(a/1000)%10<<"\n";  
            cout<<"3 цифра равна "<<(a/100)%10<<"\n";
            cout<<"4 цифра равна "<<(a/10)%10<<"\n";
            cout<<"5 цифра равна "<<a%10<<"\n";
            cout<<endl;
        }
    }
	int menu_number;
    menu:
    cout << "\n1 - Продолжить работу\n2 - Выход\n\nСделайте выбор (1 или 2): ";
    cin >> menu_number;
    switch (menu_number)
        {
            case 1: {goto start;}
            case 2: {return 0; break;}
            default: {cout << "\nБудьте внимательнее!\n"; goto menu;}
        }
    return 0;
}