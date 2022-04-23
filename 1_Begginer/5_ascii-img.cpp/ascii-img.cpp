/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ascii-img.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lmistie <romaniy11052001@gmail.com>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2022/04/23 16:41:43 by lmistie      #+#   ##    ##    #+#       */
/*   Updated: 2022/04/23 16:41:45 by lmistie     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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