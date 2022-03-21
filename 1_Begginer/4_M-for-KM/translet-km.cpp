#include<iostream>
using namespace std;


int main()
{
setlocale(LC_ALL, "Rus");
int m;
float km;

cout << "Перевод числа из метров в километры" << endl;

cout << "Введите число в метрах:" << endl;
cin>> m;
km =(float)m / 1000;

cout<< "Число в переводе: " << km;
cout<<" Км"<<endl;
}