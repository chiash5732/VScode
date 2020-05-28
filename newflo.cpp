#include<iostream>
#include <string>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    string saa = "mkdir tree\\d";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 10; j++){
            saa = saa + "d\\dd\\d";
        }
    }
    saa = saa + "d tree\\a";
        for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 10; j++){
            saa = saa + "a\\aa\\a";
        }
    }
    saa = saa + "a tree\\b";
        for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 10; j++){
            saa = saa + "b\\bb\\b";
        }
    }
    saa = saa + "b tree\\c";
        for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 10; j++){
            saa = saa + "c\\cc\\c";
        }
    }
    saa = saa + "c";
    // cout << saa.c_str() << endl;
    system("pause");
    system(saa.c_str());
    return 0;
}
