/* ********************************************************************************* */
/* * File: ascii-img.cpp                            *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 06:29:29 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 06:29:32 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */


#include<iostream>
using namespace std;

int main()
{
    char ch;
    int i;
    cout<<"Character\t\tASCII Value\n";
    for(i=0; i<255; i++)
    {
        ch = i;
        cout<<ch<<"\t\t\t"<<i<<endl;
    }
    cout<<endl;
    return 0;
}