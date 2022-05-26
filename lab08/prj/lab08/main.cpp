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
    return "© Щербаков Владислав Георгійович";
}

void inputValues(int X, int Y, int Z, int A, int B)
{
     cout << "Введіть значення x: " << endl;
        cin >> X; x = X;
    cout << "Введіть значення y: " << endl;
        cin >> Y; y = Y;
    cout << "Введіть значення z: " << endl;
        cin >> Z; z = Z;
    cout << "Введіть символ a: " << endl;
        cin >> A; a = A;
    cout << "Введіть символ b: " << endl;
        cin >> B; b = B;
}

bool Compare(int A, int B)
{
  return A + 7 == B;
}

void DecAndHex(int X, int Y, int Z)
{
    cout << "'x' в десятковій: " << dec << X << endl
         << "'y' в десятковій: " << dec << Y << endl
         << "'z' в десятковій: " << dec << Z << endl << endl;

    cout << "'x' в шістнацятковій: " << hex << X << endl
         << "'y' в шістнацятковій: " << hex << Y << endl
         << "'z' в шістнацятковій: " << hex << Z << endl;
}

int main()
{   char *locale = setlocale(LC_ALL, "ukr");
    system("chcp 1251 & cls");
    cout << Copyright() << endl << endl;
    inputValues(x, y, z, a, b);
    cout << boolalpha
         << "Результат: " << a << " + 7 =  " << b << " : " << Compare(a, b) << endl << endl;
    DecAndHex(x, y, z);
    _getch();
    cout << endl << "Результат виразу: " << s_calculation(x, y, z);
    _getch(); return 0;
}
