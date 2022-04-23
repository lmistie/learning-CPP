/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   triangle-full.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lmistie <romaniy11052001@gmail.com>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2022/04/23 16:41:49 by lmistie      #+#   ##    ##    #+#       */
/*   Updated: 2022/04/23 16:41:50 by lmistie     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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