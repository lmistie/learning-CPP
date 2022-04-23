/* ********************************************************************************* */
/* * File: math.cpp                                 *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 06:27:40 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 06:27:43 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */


#include <iostream>
using namespace std;
 
int main()
{
    setlocale (LC_ALL, "rus");
    int a, b, f, x;
    cout<<"Введите цифры a, b и f: "<<endl;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"f=";
    cin>>f;
    cout<<"Вычисляем по формуле: x=(a + b - f / a) + f * a * a - (a + b)"<<endl;
    x=(a + b - f / a) + f * a * a - (a + b);
    cout<<"x="<<x<<endl;
    system ("pause>>void");
    return 0;
}