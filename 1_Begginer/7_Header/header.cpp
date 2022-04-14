#include <iostream>
using namespace std;
 
//размер русского символа 2 байта, а латинского - 1 байт...
//из-за этого различия стандартные метода типа .length() и strlen()...
//в некоторых компиляторах выдают неверные результаты...
//это актуально, например, для GCC 4.9.2
 
int mystrlen(string); //функция для замены стандартных методов
 
class Titletable{
    string templts[3]{"* Лабораторная работа № 1","* Выполнил(а): ","* " };
    int maxlen = 0;
public:
    Titletable(string l, string n, string p, string g);
    int find_max_len();
    void draw_table(int);
    int get_max_len()
    {
        return maxlen;
    }
};
 
int main()
{
    string l,n,p,g;
    cout << "Введите Фамилию: ";
    cin >> l;
    cout << "Введите Имя: ";
    cin >> n;
    cout << "Введите Отчество: ";
    cin >> p;
    cout << "Введите номер группы: ";
    cin >> g;
    Titletable cTitletable(l,n,p,g);
    cTitletable.draw_table(cTitletable.get_max_len());
}
 
Titletable::Titletable(string l, string n, string p, string g){
    templts[1]+=g;
    templts[2] = templts[2]+l+" "+n+" "+p;
    maxlen = find_max_len();
}
 
void Titletable::draw_table(int){
    for(int i=0;i<maxlen;i++) cout << "*";
    cout << "**\n";
    for(int i=0;i<3;i++){
        cout << templts[i];
        int spaces = maxlen - mystrlen(templts[i]);
        for(int counter = 0;counter<spaces;counter++ ) cout << " ";
        cout << " *\n";
    }
    for(int i=0;i<maxlen;i++) cout << "*";
    cout << "**\n";
}
 
int Titletable::find_max_len(){
    int max = 0;
    for(int i=0;i<3;i++) if(mystrlen(templts[i]) > max) max=mystrlen(templts[i]);
    return max;
}
 
int mystrlen(string str){
     
    int counter = 0;
    for(int i=0;str[i];){
        (static_cast<int>(str[i])<0)? i+=2 : i++;
        counter++;
    }
    return counter;  
}