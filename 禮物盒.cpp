#include<iostream>
using namespace std;
int main()
{
    int a,n,t;
    cout << "�п�J�̩��h��§����:";
    cin >> a;
    if (a % 2 != 0){
    n=(a+1)/2;
    t=((a+1)*n)/2;
    cout << "§���`��:" << t << endl;
    }
    else{
        cout << "input earror!";
    }
    return 0;
}