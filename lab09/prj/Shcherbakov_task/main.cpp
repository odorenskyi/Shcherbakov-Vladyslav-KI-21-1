#include <iostream>
#include <conio.h>
#include "ModulesShcherbakov.h"

using namespace std;

void menu()
{
     setlocale(LC_ALL, "");
    cout << " k - s_calculation" << endl
         << " h - Task 9.1"      << endl
         << " g - Task 9.2"      << endl
         << " f - Task 9.3"      << endl
         << " c, d, D - Вихід"   << endl
         << " m - Меню" <<  endl << endl;
}

void s_calcfunction()
{
    double x, y, z;
    cout << "Введіть x = ";
    cin >> x;
    cout << "Введіть y = ";
    cin >> y;
    cout << "Введіть z = ";
    cin >> z;
    cout << s_calculation(x, y, z) << endl;
}

void depositfunction()
{
    float summ, month;
    cout << "Введіть суму депозиту = ";
    cin >> summ;
    cout << "Введіть строк = ";
    cin >> month;
    cout << "Сума за мiсяць = " << deposit(summ, month) << endl;
}

void beaufortfunction()
{
    float wind [31];
    for(int i = 0, a = 1; i < 31, a < 32; i++, a++)
    {
        //for(int a = 1; a < 32; a++){
            cout << "Число дня місяця = " << a;
            cout << "\nВведіть показник швидкості вітру = ";
            cin >> wind[i];
   // }
    }
    cout << "Бал бофорта - " <<  beaufort(wind) << endl;
}

void bitnumfunction()
{
    int num;
    cout << "Введіть натуральне число (0 - 9008000) = " << endl;
    cin >> num;
    cout << bitnum(num) << endl;
}

int main()
{
    system("chcp 1251 && cls");
    char symbol = 'm';
    while (1)
    {
    if (symbol == 'm')
            menu();
    if (symbol == 'c')
            break;
    if (symbol == 'd')
            break;
    if (symbol == 'D')
            break;
    if (symbol == 'k')
            s_calcfunction();
    if (symbol == 'g')
            beaufortfunction();
    if (symbol == 'h')
            depositfunction();
    if (symbol == 'f')
            bitnumfunction();

    cout << "Натисніть клавішу = ";
    cin >> symbol;
    }
    return 0;
}
