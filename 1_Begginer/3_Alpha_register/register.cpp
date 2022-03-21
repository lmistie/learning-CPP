#include <iostream>
#include <locale>

using namespace std;

int main()
{
    char c;
    cout<<"Введите одну букву пожалуйста: "<<endl;
    cin>>c;
    c = c - 32;
    cout<<"Буква в вверхнем резистре: "<< c <<endl;
    return 0;
}