#include <iostream>
#include "ModulesShcherbakov.h"
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    char *locale=setlocale(LC_ALL, "");
    cout << "Тестування функцiї до задачi 10.1\n";
    string test_cases_out[2][9] ={
                                   {{" ----------------------------------------------- "},
                                   {" Розробник: Щербаков Владислав "},
                                   {" ВНЗ: Центральний Національний Технічний Університет "},
                                   {" Рік розробки: 2022 "},
                                   {" Місто/Країна: Кропивницький/Україна "},
                                   {" --------------------------------------------------- "},
                                   {""},
                                   {"Кількість приголосних літер у слові \"Привіт\": 4"},
                                   {"Cлово \"Привіт\" відсутнє в краплинці Віталія Іващенка."}},
                                   {{" ----------------------------------------------- "},
                                   {" Розробник: Щербаков Владислав "},
                                   {" ВНЗ: Центральний Національний Технічний Університет "},
                                   {" Рік розробки: 2022 "},
                                   {" Місто/Країна: Кропивницький/Україна "},
                                   {" --------------------------------------------------- "},
                                   {""},
                                   {"Кількість приголосних літер у слові \"Кажи\": 2"},
                                   {"Cлово \"Кажи\" є в краплинці Віталія Іващенка."}}};
    string test_cases_in[2] = {{"Привіт"},
                              {"Кажи"}};
    ofstream create_file("InPut1.txt");
    create_file << test_cases_in[0];
    create_file.close();
    char OutFile1[] = "OutPut1.txt";
    char InFile1[] = "InPut1.txt";
    task_10_1(OutFile1,InFile1);
    ifstream read_from_file;
    read_from_file.open("OutPut1.txt");
    string for_compare;
    int fail = 0;
    for (int i = 0; i<9; i++)
    {
        getline(read_from_file, for_compare);
        if (test_cases_out[0][i] == for_compare)
            continue;
        else
            fail++;
    }
    read_from_file.close();
    if(fail==0)
        cout << "Test case #1 is passed!\n";
    else
        cout << "Test case #1 is failed...\n";
    fail = 0;
    ofstream create_file2("InPut2.txt");
    create_file2 << test_cases_in[1];
    create_file2.close();
    char OutFile2[] = "OutPut2.txt";
    char InFile2[] = "InPut2.txt";
    task_10_1(OutFile2,InFile2);
    ifstream read_from_file2;
    read_from_file2.open("OutPut2.txt");
    string for_compare2;
    for (int i = 0; i<9; i++)
    {
        getline(read_from_file2, for_compare2);
        if (test_cases_out[1][i] == for_compare2)
            continue;
        else
            fail++;
    }
    read_from_file2.close();
    if(fail==0)
      cout << "Test case #2 is passed!\n";
    else
      cout << "Test case #2 is failed...\n";

    cout << "Тестування функцiї до задачi 10.2\n";
    string test_cases2[2][3] = {{{"Привіт"},
                                {""},
                                {"Кількість символів: 6"},
                                },
                                {{"Кажи"},
                                {""},
                                {"Кількість символів: 4"},
                                }};
   string from_file2;
   task_10_2(InFile1,"Привіт");
   ifstream read_file;
    read_file.open("InPut1.txt");
    fail = 0;
    for (int i = 0; i<2; i++)
    {
        getline(read_file, from_file2);
        if (test_cases2[0][i] == from_file2)
            continue;
        else
            fail++;
    }
    read_file.close();
    if(fail==0)
        cout << "Test case #1 is passed!\n";
    else
        cout << "Test case #1 is failed...\n";
    string from_file2_2;
   task_10_2(InFile2,"Кажи");
   ifstream read_file2;
    read_file2.open("InPut2.txt");
    fail = 0;
    for (int i = 0; i<2; i++)
    {
        getline(read_file2, from_file2_2);
        if (test_cases2[1][i] == from_file2_2)
            continue;
        else
            fail++;
    }
    read_file2.close();
    if(fail==0)
        cout << "Test case #2 is passed!\n";
    else
        cout << "Test case #2 is failed...\n";

    cout << "Тестування функцiї до задачi 10.3\n";
    string test_cases3[2][12] = {
                                    {{" ----------------------------------------------- "},
                                    {" Розробник: Щербаков Владислав "},
                                    {" ВНЗ: Центральний Національний Технічний Університет "},
                                    {" Рік розробки: 2022 "},
                                    {" Місто/Країна: Кропивницький/Україна "},
                                    {" --------------------------------------------------- "},
                                    {""},
                                    {"Кількість приголосних літер у слові \"Привіт\": 4"},
                                    {"Cлово \"Привіт\" відсутнє в краплинці Віталія Іващенка."},
                                    {""},
                                    {"Результат виконання функції s_calculation: S = 4.36306"},
                                    {"Число 4 у двійковому коді: 00000000000000000000000000000100"}},
                                    {{" ----------------------------------------------- "},
                                    {" Розробник: Щербаков Владислав "},
                                    {" ВНЗ: Центральний Національний Технічний Університет "},
                                    {" Рік розробки: 2022 "},
                                    {" Місто/Країна: Кропивницький/Україна "},
                                    {" --------------------------------------------------- "},
                                    {""},
                                    {"Кількість приголосних літер у слові \"Кажи\": 2"},
                                    {"Cлово \"Кажи\" є в краплинці Віталія Іващенка."},
                                    {""},
                                    {"Результат виконання функції s_calculation: S = 1.30691e+08"},
                                    {"Число 8 у двійковому коді: 00000000000000000000000000001000"}},
                                };
    string from_file3_1;
   task_10_3(1, 2, 3, 4, OutFile1);
   ifstream read_file3;
    read_file3.open("output1.txt");
    fail = 0;
    for (int i = 0; i<12; i++)
    {
        getline(read_file3, from_file3_1);
        if (test_cases3[0][i] == from_file3_1)
            continue;
        else
            fail++;
    }
    read_file3.close();
    if(fail==0)
        cout << "Test case #1 is passed!\n";
    else
        cout << "Test case #1 is failed...\n";
    string from_file3_2;
   task_10_3(5, 6, 7, 8, OutFile2);
   ifstream read_file4;
    read_file4.open("output2.txt");
    fail = 0;
    for (int i = 0; i<12; i++)
    {
        getline(read_file4, from_file3_2);
        if (test_cases3[1][i] == from_file3_2)
            continue;
        else
            fail++;
    }
    read_file4.close();
    if(fail==0)
        cout << "Test case #2 is passed!\n";
    else
        cout << "Test case #2 is failed...\n";
    cin.get();
    return 0;
}
