#include <iostream>
#include <fstream>
#include <string>
#include <ModulesShcherbakov.h>
#include <windows.h>
#include <locale.h>
#include <ctime>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char in_file[] = "input.txt";
    char out_file[] = "output.txt";

    cout << "¬вед≥ть слово украњнською мовою: ";
    string word;
    cin >> word;
    ofstream in_word("input.txt");
    in_word << word;
    in_word.close();
    task_10_1(out_file, in_file);
    task_10_2(in_file, word);
    float x, y, z, b;
    cout << "¬вед≥ть число х:";
    cin >> x;
    cout << "¬вед≥ть число y:";
    cin >> y;
    cout << "¬вед≥ть число z:";
    cin >> z;
    cout << "¬вед≥ть число b:";
    cin >> b;
    task_10_3(x, y, z, b, out_file);
    cout << "ѕерев≥рте вм≥ст файл≥в \"input.txt\" та \"output.txt\"!";
    cin.get();
    cin.get();
    return 0;
}

