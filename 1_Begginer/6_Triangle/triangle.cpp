#include <iostream>

using namespace std;

int main()
{
    for(int h = 1; h <= 7; h++)
    {
        for(int w = 1; w <= h; w++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}