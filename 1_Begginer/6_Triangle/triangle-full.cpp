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