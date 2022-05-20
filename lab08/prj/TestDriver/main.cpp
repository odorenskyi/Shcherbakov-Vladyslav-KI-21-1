#include <iostream>
#include <iomanip>
#include <conio.h>
#include <clocale>

#include "ModulesShcherbakov.h"

using namespace std;

int main()
{
    char *locale = setlocale(LC_ALL, "ukr");
    float cX[5] = { 9, 4, 0, 1, 3 };
    float cY[5] = { 4, 4, 5, 1, -5 };
    float cZ[5] = { 1, 4, 0, 1, -7 };

    double expectedResult[5] = { 262139, 65532, 0, 0, 42874 };
    double doneResult = 0;
    double NAC = 0.00005;
    bool TestResult = false;

    for (int i = 0; i < 5; i++) {
        doneResult = s_calculation(cX[i], cY[i], cZ[i]);
        if (abs(expectedResult[i]) >= abs(doneResult))
            { TestResult = abs(expectedResult[i]) - abs(doneResult) <= NAC; }
        else
            { TestResult = abs(doneResult) - abs(expectedResult[i]) <= NAC; }

        cout << "Тестові значення №" << i + 1 << " : "
             << "X = " << cX[i]
             << "  Y = " << cY[i]
             << "  Z = " << cZ[i]
             << endl;
        cout << "Очікуваний результат: " << expectedResult[i] << endl;
        cout << "Отриманий результат : " << doneResult << endl;
        cout << boolalpha << "Тестовий результат  : " << TestResult << endl << endl;
    }
    _getch();
    return 0;
}
