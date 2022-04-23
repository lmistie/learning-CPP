/* ********************************************************************************* */
/* * File: triangle-full.cpp                        *      |File Checked|2|        * */
/* *                                                *                              * */
/* *                                                *   ██████╗ ██╗   ██╗████████╗ * */
/* * Last-In: 2022/04/23, 06:29:44 pm               *  ██╔═══██╗██║   ██║╚══██╔══╝ * */
/* *   In By: lmisti@romaniy11052001@gmail.com      *  ██║   ██║██║   ██║   ██║    * */
/* *                                                *  ██║   ██║██║   ██║   ██║    * */
/* * Last-Out: 2022/04/23, 06:29:46 pm              *  ╚██████╔╝╚██████╔╝   ██║    * */
/* *   Out By: lmisti@romaniy11052001@gmail.com     *   ╚═════╝  ╚═════╝    ╚═╝    * */
/* *                                                *                              * */
/* ********************************************************************************* */

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int SIZE = 6;

    for(i = 1; i <= SIZE; ++i)
    {
	    for(j = SIZE; j > i; --j)
        {
	        cout<<" ";
        }
	    for(j = 1; j < 2 * i; ++j)
        {
	        cout<<"*";
        }
	cout<<endl;
    }
}