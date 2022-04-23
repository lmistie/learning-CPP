/* ********************************************************************************* */
/* * File: number_comparison.cpp                    *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 07:58:54 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 07:58:58 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */


#include <iostream>

using namespace std;
int main()
{
    setlocale (LC_ALL, "RUS");
    int num1, num2;
    cout<<"Сравнение чисел используя оператор ветвления\n";
    cout<<endl;
    cout<<"Введите 1 число:  ";
    cin>>num1;
    cout<<endl;
    cout<<"Введите 2 число:  ";
    cin>>num2;
    cout<<endl;
    if (num1>num2)
    {
        cout<<"Число 1 \t БОЛЬШЕ"<<endl;
    }
    else if (num1<num2)
    {
    cout<<"Число 1 \t МЕНЬШЕ"<<endl;
    }
    else
    {
    cout<<"Число 1 и число 2\t РАВНЫ"<<endl;
    }
    cout<<endl;
     return 0;
}