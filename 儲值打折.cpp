#include<iostream>
using namespace std;
int main()
{
    float p;
    cout << "��J���x�Ȫ��I��:";
    cin >> p;
    cout << "�x��"<< p << "�I�A���I";
    if(p<=999)
        cout << p*0.8 << "��";
    else if(p<=2999&&p>=1000)
        cout << p*0.7 << "��";
    else if(p<=4999&&p>=3000)
        cout << p*0.6 << "��";
    else if(p>=5000)
       cout << p*0.5 << "��";
    else
        cout << "earror��";
    return 0;
}