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
         << " c, d, D - �����"   << endl
         << " m - ����" <<  endl << endl;
}

void s_calcfunction()
{
    double x, y, z;
    cout << "������ x = ";
    cin >> x;
    cout << "������ y = ";
    cin >> y;
    cout << "������ z = ";
    cin >> z;
    cout << s_calculation(x, y, z) << endl;
}

void depositfunction()
{
    float summ, month;
    cout << "������ ���� �������� = ";
    cin >> summ;
    cout << "������ ����� = ";
    cin >> month;
    cout << "���� �� �i���� = " << deposit(summ, month) << endl;
}

void beaufortfunction()
{
    float wind [31];
    for(int i = 0, a = 1; i < 31, a < 32; i++, a++)
    {
        //for(int a = 1; a < 32; a++){
            cout << "����� ��� ����� = " << a;
            cout << "\n������ �������� �������� ���� = ";
            cin >> wind[i];
   // }
    }
    cout << "��� ������� - " <<  beaufort(wind) << endl;
}

void bitnumfunction()
{
    int num;
    cout << "������ ���������� ����� (0 - 9008000) = " << endl;
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

    cout << "�������� ������ = ";
    cin >> symbol;
    }
    return 0;
}
