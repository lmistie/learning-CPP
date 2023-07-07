/* ********************************************************************************* */
/* * File: width_vector.cpp                         *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/26, 11:23:26 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/26, 11:30:39 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

#include <iostream>
#include <locale>
#include <cmath>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL,"Russian");
    
    double dX(0.0), dY(0.0), dZ(0.0);
    double dVectorLength(0.0);
    
    cout << "\n Введите Х: ";
    cin >> dX;
    
    cout << "\n Введите Y: ";
    cin >> dY;
    
    cout << "\n Введите Z: ";
    cin >> dZ;
    
    cout << "\n Вы ввели следующие числа: X = " << dX << "; Y = " << dY << "; Z = " << dZ <<endl;
    
    dVectorLength = sqrt(dX*dX + dY*dY + dZ*dZ);
    
    cout << "\n Длина вектора: " << dVectorLength << ". \n\n\a";
 
return 0;
}