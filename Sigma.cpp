//程式設計期末考試
//結構判斷式    1.if  2.if   else   3.if     else  if    3.switch()    case
//迴圈          1.for   2.while   3.do   while
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a, b, c, sum;
    cout << "請輸入加總開始值?";
    cin >> a;
    cout << "請輸入加總終止值?";
    cin >> b;
    cout << "請輸入遞增減值?";
    cin >> c;
    for (int i = a; i <= b; i += c)
    {
        sum += i;
        cout << "i=" << i << ",sum=" << sum << "\n";
     }
     system("pause");
     return 0;
}