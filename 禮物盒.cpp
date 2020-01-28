#include<iostream>
using namespace std;
int main()
{
    int a,n,t;
    cout << "請輸入最底層的禮盒數:";
    cin >> a;
    if (a % 2 != 0){
    n=(a+1)/2;
    t=((a+1)*n)/2;
    cout << "禮盒總數:" << t << endl;
    }
    else{
        cout << "input earror!";
    }
    return 0;
}