/* ********************************************************************************* */
/* * File: no_pow.cpp                               *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/26, 11:31:43 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/26, 11:43:11 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

#include <iostream>
#include<cmath>
using namespace std;

double xTemp;
int m;
void stepen();

void stepen()
    {
        int i;
        double xTemp1;
        xTemp1 = xTemp;
        for(i=0;i<m-1;++i)
        {
        xTemp = xTemp * xTemp1;
        }
    }

int main()
{
    setlocale(LC_ALL, "RUS");
    double x, z;
    for (x=-1.1;x<=0.3;x=x+0.2)
    {
        for (m=1;m<=4;m++)
        {
            xTemp = x;
            stepen();
            z = xTemp;
            xTemp = sin(x * m);
            stepen();
            z = z * xTemp;
            cout << "Значение функции = " << z << "\tПри m = "<< m <<endl;
        }
    cout << "Вычесления при x = " << x << endl;
    }
    return 0;
}