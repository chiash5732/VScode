#include<iostream>
using namespace std;
int main()
{
    int tall;
    cout << "�п�J�T���Ϊ���:";
    cin >> tall;
    for(int i=1;i <= tall;i++){
        for(int j=1; j<=i;j++){
            cout << "@";
        }
        cout << endl;
    }
    return 0;
}