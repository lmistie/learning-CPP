/* ********************************************************************************* */
/* * File: days.cpp                                 *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 08:49:59 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 08:54:28 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

#include <ctype.h>
#include <iostream>
using namespace std;
int main()
{
    int num;
    bool flag = true;
    setlocale(LC_ALL, "Rus");
    cout << "1. Понедельник\n";
    cout << "2. Вторник\n";
    cout << "3. Среда\n";
    cout << "4. Четверг\n";
    cout << "5. Пятница\n";
    cout << "6. Суббота\n";
    cout << "7. Воскресенье\n" << endl;

    cout<<"Введите число по порядку недели: "<<endl;
    cin >> num;

    switch (num) {
    case 1:
        cout << "Понедельник"<< endl;
    break;
    case 2:
        cout << "Вторник"<< endl;
    break;
    case 3:
        cout << "Среда"<< endl;
    break;
    case 4:
        cout << "Четверг"<< endl;
    break;
    case 5:
        cout << "Пятница"<< endl;
    break;

    case 6:
    cout << "Суббота"<< endl;
    break;
    case 7:
        cout << "Воскресенье"<< endl;
    break;
}

return 0;
}