#include <iostream>
#include <clocale>
#include <iomanip>
#include <conio.h>
#include <cstring>

#include "ModulesShcherbakov.h"
using namespace std;

int x = 0, y = 0, z = 0;
int a = 0, b = 0;

string Copyright()
{
    return "� �������� ��������� ����������";
}

void inputValues(int X, int Y, int Z, int A, int B)
{
     cout << "������ �������� x: " << endl;
        cin >> X; x = X;
    cout << "������ �������� y: " << endl;
        cin >> Y; y = Y;
    cout << "������ �������� z: " << endl;
        cin >> Z; z = Z;
    cout << "������ ������ a: " << endl;
        cin >> A; a = A;
    cout << "������ ������ b: " << endl;
        cin >> B; b = B;
}

bool Compare(int A, int B)
{
  return A + 7 == B;
}

void DecAndHex(int X, int Y, int Z)
{
    cout << "'x' � ���������: " << dec << X << endl
         << "'y' � ���������: " << dec << Y << endl
         << "'z' � ���������: " << dec << Z << endl << endl;

    cout << "'x' � �������������: " << hex << X << endl
         << "'y' � �������������: " << hex << Y << endl
         << "'z' � �������������: " << hex << Z << endl;
}

int main()
{   char *locale = setlocale(LC_ALL, "ukr");
    system("chcp 1251 & cls");
    cout << Copyright() << endl << endl;
    inputValues(x, y, z, a, b);
    cout << boolalpha
         << "���������: " << a << " + 7 =  " << b << " : " << Compare(a, b) << endl << endl;
    DecAndHex(x, y, z);
    _getch();
    cout << endl << "��������� ������: " << s_calculation(x, y, z);
    _getch(); return 0;
}
