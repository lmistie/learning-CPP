/* ********************************************************************************* */
/* * File: increasing_variables.cpp                 *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 08:04:20 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 08:07:26 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "RUS");
    int x, y, z;
    cout<<"Увеличение переменных с оператором if\n";
    cout<<endl;
    cout<<"Введите 1 число:  ";
    cin>>x;
    cout<<endl;
    cout<<"Введите 2 число:  ";
    cin>>y;
    cout<<endl;
    cout<<"Введите 3 число:  ";
    cin>>z;
    cout<<endl;
    if (x==y||x==z||y==z)
    {
        cout<<"\n1 число = "<<x+5<<"\n\n"<<"2 число = "<<y+5<<"\n\n"<<"3 число = "<<z+5<<endl;
    }
    else
    {
        cout<<"Равных нет\n";
    }
    cout<<endl;
     return 0;
}