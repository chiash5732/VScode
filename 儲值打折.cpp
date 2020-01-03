#include<iostream>
using namespace std;
int main()
{
    float p;
    cout << "輸入欲儲值的點數:";
    cin >> p;
    cout << "儲值"<< p << "點，應付";
    if(p<=999)
        cout << p*0.8 << "元";
    else if(p<=2999&&p>=1000)
        cout << p*0.7 << "元";
    else if(p<=4999&&p>=3000)
        cout << p*0.6 << "元";
    else if(p>=5000)
       cout << p*0.5 << "元";
    else
        cout << "earror元";
    return 0;
}