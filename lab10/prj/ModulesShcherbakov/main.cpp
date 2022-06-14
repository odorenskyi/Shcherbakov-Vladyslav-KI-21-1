#include "ModulesShcherbakov.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdio>
#include <windows.h>
#include <bitset>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <cstring>
#include <string>

double s_calculation(float x, float y, float z)
{
    return abs(pow((y*z),abs(x)) - (y/3.14) - sqrt(x));
}
float deposit(float summ, short months)
{
    float monthly, a;

    if(months == 6)
    {
        a = (summ*16)/100;
        monthly = a/6;
    }
    if (months == 12)
    {
        a = (summ*18)/100;
        monthly = a/12;
    }
    return monthly;
}

int beaufort(float wind[31]){
    float max = wind[0];
    for(int i = 1;i<31;i++){
        if (wind[i] > max){
            max = wind[i];
        }
    }
    if (max < 0.3){
        return 0;
    }
    else if (max < 1.5){
        return 1;
    }
    else if (max < 3.4){
        return 2;
    }
    else if (max < 5.4){
        return 3;
    }
    else if (max < 7.9){
        return 4;
    }
    else if (max < 10.7){
        return 5;
    }
    else if (max < 13.8){
        return 6;
    }
    else if (max < 17.1){
        return 7;
    }
    else if (max < 20.7){
        return 8;
    }
    else if (max < 24.4){
        return 9;
    }
    else if (max < 28.4){
        return 10;
    }
    else if (max < 32.6){
        return 11;
    }
    else {
        return 12;
    }
}

int bitnum(int num)
{
    std::bitset<32> b_number(num);
    if(b_number[13])
    {
        return b_number.count();
    }
    return 32 - b_number.count();
}

void task_10_1(char *OutFile,char *InFile)
{
   std::ofstream outFile;
   outFile.open(OutFile);
   outFile <<   " ----------------------------------------------- \n"
                " Розробник: Щербаков Владислав \n"
                " ВНЗ: Центральний Національний Технічний Університет \n"
                " Рік розробки: 2022 \n"
                " Місто/Країна: Кропивницький/Україна \n"
                " --------------------------------------------------- \n";

   std::ifstream inFile;
   inFile.open(InFile);
   std::string fromFile;
   inFile >> fromFile;
   inFile.close();
   int consonant = 0;
   for (int i=0; i<fromFile.length(); i++)
   {
        if (!(fromFile[i] == 'А' || fromFile[i] == 'а' || fromFile[i] == 'Е' || fromFile[i] == 'е' || fromFile[i] == 'Є' || fromFile[i] == 'є' || fromFile[i] == 'І' || fromFile[i] == 'і' || fromFile[i] == 'Ї' || fromFile[i] == 'ї' || fromFile[i] == 'О' || fromFile[i] == 'о' || fromFile[i] == 'У' || fromFile[i] == 'у' || fromFile[i] == 'Ю' || fromFile[i] == 'ю' || fromFile[i] == 'И' || fromFile[i] == 'и'))
       consonant++;
   }
   outFile << "\nКількість приголосних літер у слові \"" << fromFile << "\": " << consonant << std::endl;

   std::string kraplina = "Про себе не кажи недобрих слів,"
                     "Бо має сказане таємну силу."
                     "Кажи:""Я сильний, впевнений, щасливий!"
                     "І буде сам так, як ти хотів!";

    if(kraplina.find(fromFile) != std::string::npos)
        outFile << "Cлово \"" << fromFile << "\" є в краплинці Віталія Іващенка." << std::endl;
    else
        outFile << "Cлово \"" << fromFile << "\" відсутнє в краплинці Віталія Іващенка." << std::endl;
    outFile.close();
}
void task_10_2(char *OutInFile, std::string word)
{
   std::ifstream inFile;
   inFile.open(OutInFile);
   std::string fromFile;
   inFile >> fromFile;
   inFile.close();
   std::ofstream in_File;
   in_File.open(OutInFile, std::ios::app);
    std::string line;
    int sum=0;
    inFile.open(OutInFile);
    while(!inFile.eof())
    {
    getline(inFile,line);
    int numofChars= line.length();
    for (unsigned int n = 0; n<line.length();n++)
    {
    if (line.at(n) == ' ')
    {
    numofChars--;
    }
    }
    sum=numofChars+sum;
    }
    in_File << "\n\nКількість символів: "<< sum << std::endl;
    time_t times = time(NULL);
    in_File << "\nЧас дозапису :"  << asctime (localtime( &times )) << std::endl;
    in_File.close();

}
void task_10_3(float x, float y, float z, float b, char *OutFile)
{
   std::ofstream outFile;
   outFile.open(OutFile, std::ios::app);

   outFile << "\nРезультат виконання функції s_calculation: S = " << s_calculation(x,y,z) << std::endl;


   if (b>0)
        outFile<< "Число " << b << " у двійковому коді: " << std::bitset<32>(b) << std::endl;
    else
        outFile<< "Число " << b << " не натуральне." << std::endl;
   outFile.close();
}

