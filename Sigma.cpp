//�{���]�p�����Ҹ�
//���c�P�_��    1.if  2.if   else   3.if     else  if    3.switch()    case
//�j��          1.for   2.while   3.do   while
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a, b, c, sum;
    cout << "�п�J�[�`�}�l��?";
    cin >> a;
    cout << "�п�J�[�`�פ��?";
    cin >> b;
    cout << "�п�J���W���?";
    cin >> c;
    for (int i = a; i <= b; i += c)
    {
        sum += i;
        cout << "i=" << i << ",sum=" << sum << "\n";
     }
     system("pause");
     return 0;
}