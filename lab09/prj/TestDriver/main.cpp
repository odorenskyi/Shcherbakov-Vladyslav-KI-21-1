#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdio>
#include <windows.h>
#include <bitset>
#include "ModulesShcherbakov.h"

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Task 9.1" << endl;
   double input[3][2] = {4500,    12,
                         12000,   6,
                         450000,  6};

    double result[3] = {67.5,
                        320,
                        12000};

    for (int i = 0; i < 3; i++)
    {
        cout << "TC_" << i+1 << ":";
        if ((round(deposit(input[i][0], input[i][1])*1000000)/1000000.0 == result[i]))
            {
                cout << "PASSED" << endl;
            }
        else
                cout << "FAILED";
    }

    cout << "Task 9.2" << endl;
    float inpt[31][3] = {
    3,      5.1,    3,
    3.5,    3.1,    3,
    0.2,    2.2,    3,
    1.5,    4.3,    3,
    4.7,    5.1,    3,
    5.3,    5.7,    3,
    9.4,    6.7,    3,
    0,      7.5,    3,
    6,      10.5,   3,
    12.4,   9.3,    3,
    15.2,   9.7,    32,
    7.2,    10.2,   3,
    13.1,   0.3,    3,
    14,     0.6,    3,
    12,     2.4,    3,
    2.3,    2.3,    3,
    5.1,    0.4,    3,
    0,      0.5,    3,
    1,      2,      3,
    5,      3,      3,
    6,      4,      3,
    14.2,   5,      3,
    13.2,   6,      3,
    6,      7,      3,
    5,      2,      3,
    7,      2,      3,
    2.2,    3,      3,
    3,      4,      3,
    5,      1,      3,
    6,      1,      3,
    2,      1,      3};

    int expected[3] {7, 5, 11};
    for(int i = 0; i < 3; i++)
    {
        float wind[31];
        for(int t = 0; t < 31; t++)
        {
            wind[t] = inpt[t][i];
        }
        if (expected[i] == beaufort(wind))
        {
            cout <<"TC_" << i+1;
            cout <<":PASSED" << endl;
        }
        else
        {
            cout << "TC_" << i+1;
            cout <<":FAILED" << endl;
        }

    }
    cout <<"Task 9.3" << endl;
    int inputs[3] {937845, 5436732, 987653};
    int outp[3] {19, 13, 24};
    for (int i = 0; i < 3; i ++)
    {
        if (bitnum(inputs[i]) == outp[i])
        {

            cout <<"TC_" << i+1;
            cout <<":PASSED" << endl;
        }
        else
        {
            cout <<"TC_" << i+1;
            cout <<":FAILED" << endl;
        }
    }
    return 0;
}


