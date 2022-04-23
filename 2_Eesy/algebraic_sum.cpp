/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   algebraic_sum.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lmistie <romaniy11052001@gmail.com>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2022/04/23 16:50:55 by lmistie      #+#   ##    ##    #+#       */
/*   Updated: 2022/04/23 16:50:55 by lmistie     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

// algebraic_sum.cpp: определяет точку входа для консольного приложения.
 
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
setlocale(LC_ALL, "RUS");
float z, b, a, betta, x, y = 0;
int j;
 
cout << "Введите количество иксов: ";
cin >> j;
 
for(int i = 1; i <= j; i++)
{
cout << "Введите значения Z, B, A, Betta для X" << i << ":\n";
cout << "Z = ";
cin >> z;
cout << "B = ";
cin >> b;
cout << "A = ";
cin >> a;
cout << "Betta = ";
cin >> betta;
 
x = pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
y += x;
}
 
cout << "\ny = " << y << endl;
 
cin.get();
return 0;
}