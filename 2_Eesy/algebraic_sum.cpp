/* ********************************************************************************* */
/* * File: algebraic_sum.cpp                        *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 06:31:44 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 06:31:47 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

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