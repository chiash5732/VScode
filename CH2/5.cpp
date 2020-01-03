#include<iostream>
using namespace std;

int main(){
    int y, m, d;
    cout << "有效期限年月日(以空白隔開年月日):";
    cin >> y >> m >> d;
    cout << "本貨架商品的有效期限" << y << "年" << m << "月" << d << "日";
    return 0;
}
