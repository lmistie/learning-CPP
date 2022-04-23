/* ********************************************************************************* */
/* * File: angle_of_ancidence.cpp                   *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 08:28:50 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 08:36:56 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "RUS");
    double V, T, param, result;
    const double Pi = asin(1.0), g = 9.8;
    cout<<"Программа считает угол падения тела в пространстве"<<endl;
    cout << "Введите расстояние V = ";
    cin >> V;
 
    cout<<endl << "Введите время полета T = ";
    cin >> T;
 
 if(1 < fabs(g*T/(2*V)))
        cout<<"Неправильная запись введите значения еще раз"<<endl;
    else
    {
        param = asin(g*T/(2*V));
        cout<<"\nУгол падения = "<<param*(90/Pi)<<endl;
    }

return 0;
}