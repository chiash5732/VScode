#include<iostream>
#include <string>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    string saa = "mkdir ";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 10; j++){
            saa = saa + "d\\d\\d";
        }
        system("pause");
    }
    cout << saa.c_str();
    system(saa.c_str());
    return 0;
}
