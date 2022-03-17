#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char file_name[100]; // буфер хранения пути к файлу
    cout << "Введите имя файла: ";
    cin >> file_name;
    ifstream fin(file_name); // открываем файл для чтения
 
        if (!fin.is_open()) // если файл не открыт
            cout << "Файл не может быть открыт!\n"; // сообщить об этом
        else
        {
            int counterBracketOpen = 0, // количество вхождений фигурных открывающихся скобок
                counterBracketClose = 0; // количество вхождений фигурных закрывающихся скобок
            char symbol; // временная переменная для хранения символов считанных из файла
            fin >> symbol; // предварительное считывание из файла символа
            while (fin)
            {
                if (symbol == '{')
                    counterBracketOpen++; // инкремент количества октрывающихся фигурных скобок
                if (symbol == '}')
             {
                 counterBracketClose++; // инкремент количества закрывающихся фигурных скобок
                 // если нарушен порядок следования скобок
                 if (counterBracketClose > counterBracketOpen)
                 break; // выход из цикла
             }
            fin >> symbol; // считываем символ из файла
            } // конец while
            fin.close(); // закрываем исходный файл
            ofstream fout("./log-file"); // создаём файл для записи результата проверки
            // выполнияем проверку баланса скобок
            if (counterBracketOpen == 0 && counterBracketClose == 0)
            {
                cout << "В файле нет фигурных скобок!" << endl;
                fout << "В файле нет фигурных скобок!" << endl;
            }
            else
                if (counterBracketOpen == counterBracketClose)
                {
                    cout << "Баланс скобок не нарушен!" << endl;
                    fout << "Баланс скобок не нарушен!" << endl;
                }
                else
                {
                    cout << "Баланс Скобок нарушен!" << endl;
                    fout << "Баланс Скобок нарушен!" << endl;
                }
            fout.close(); // закрываем файл результата
        }
    return 0;
}