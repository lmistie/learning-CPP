/* ********************************************************************************* */
/* * File: degree.cpp                               *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 08:47:23 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 08:47:27 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(){
        setlocale (LC_ALL, "RUS");
        int a, n, rezult=1, i;
        cout<< "Введите возводимое в степень число: ";
        cin>>a;
        cout<< endl<< "Введите стень числа: ";
        cin>>n;
        for(i=0; i<n; i++)
                rezult *=a;
        cout<< endl<< "Результата возведения в степень "<<n<< " числа "<< a<< " = "<<rezult<< endl;
        return 0;
}