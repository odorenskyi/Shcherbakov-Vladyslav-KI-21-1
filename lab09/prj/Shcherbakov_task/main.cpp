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
         << " c, d, D - ¬их≥д"   << endl
         << " m - ћеню" <<  endl << endl;
}

void s_calcfunction()
{
    double x, y, z;
    cout << "¬вед≥ть x = ";
    cin >> x;
    cout << "¬вед≥ть y = ";
    cin >> y;
    cout << "¬вед≥ть z = ";
    cin >> z;
    cout << s_calculation(x, y, z) << endl;
}

void depositfunction()
{
    float summ, month;
    cout << "¬вед≥ть суму депозиту = ";
    cin >> summ;
    cout << "¬вед≥ть строк = ";
    cin >> month;
    cout << "—ума за мiс€ць = " << deposit(summ, month) << endl;
}

void beaufortfunction()
{
    float wind [31];
    for(int i = 0, a = 1; i < 31, a < 32; i++, a++)
    {
        //for(int a = 1; a < 32; a++){
            cout << "„исло дн€ м≥с€ц€ = " << a;
            cout << "\n¬вед≥ть показник швидкост≥ в≥тру = ";
            cin >> wind[i];
   // }
    }
    cout << "Ѕал бофорта - " <<  beaufort(wind) << endl;
}

void bitnumfunction()
{
    int num;
    cout << "¬вед≥ть натуральне число (0 - 9008000) = " << endl;
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

    cout << "Ќатисн≥ть клав≥шу = ";
    cin >> symbol;
    }
    return 0;
}
