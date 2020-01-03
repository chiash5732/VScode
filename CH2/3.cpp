#include<iostream>
using namespace std;

int main()
{
    int price, bonus;
    cout << "消費滿額價 : ";
    cin >> price;
    cout << "折價卷金額 : ";
    cin >> bonus;
    cout << "今天消費滿" << price << "元，送折價卷" << bonus << "元\n";
    return 0;
}