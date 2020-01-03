#include<iostream>
using namespace std;

int main(){
    int y, m, d;
    cout << "有效期限 西元年份:";
    cin >> y;
    cout << "有效期限 月份:";
    cin >> m;
    cout << "有效期限 日期:";
    cin >> d;
    cout << "本貨架商品的有效期限" << y << "年" << m << "月" << d << "日";
    return 0;
}
