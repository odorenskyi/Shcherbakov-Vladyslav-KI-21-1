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
    return "© ўербаков ¬ладислав √еорг≥йович";
}

void inputValues(int X, int Y, int Z, int A, int B)
{
     cout << "¬вед≥ть значенн€ x: " << endl;
        cin >> X; x = X;
    cout << "¬вед≥ть значенн€ y: " << endl;
        cin >> Y; y = Y;
    cout << "¬вед≥ть значенн€ z: " << endl;
        cin >> Z; z = Z;
    cout << "¬вед≥ть символ a: " << endl;
        cin >> A; a = A;
    cout << "¬вед≥ть символ b: " << endl;
        cin >> B; b = B;
}

bool Compare(int A, int B)
{
  return A + 7 == B;
}

void DecAndHex(int X, int Y, int Z)
{
    cout << "'x' в дес€тков≥й: " << dec << X << endl
         << "'y' в дес€тков≥й: " << dec << Y << endl
         << "'z' в дес€тков≥й: " << dec << Z << endl << endl;

    cout << "'x' в ш≥стнац€тков≥й: " << hex << X << endl
         << "'y' в ш≥стнац€тков≥й: " << hex << Y << endl
         << "'z' в ш≥стнац€тков≥й: " << hex << Z << endl;
}

int main()
{   char *locale = setlocale(LC_ALL, "ukr");
    system("chcp 1251 & cls");
    cout << Copyright() << endl << endl;
    inputValues(x, y, z, a, b);
    cout << boolalpha
         << "–езультат: " << a << " + 7 =  " << b << " : " << Compare(a, b) << endl << endl;
    DecAndHex(x, y, z);
    _getch();
    cout << endl << "–езультат виразу: " << s_calculation(x, y, z);
    _getch(); return 0;
}
