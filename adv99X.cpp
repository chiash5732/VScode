//程式設計期末考試
//結構判斷式    1.if {}  2.if  {}  else  {}  3.if  {}   else  if {}   3.switch(a)    case a:
//迴圈          1.for (   )    {     }         2.while {}  3.do   while
//設定寬度setw( )
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,i,j;
	cout << "請選擇:(1)遞增;(2)遞減;";
	cin >> a;
	if(a==1){
	cout << "請輸入結束值:";
	cin >> b;
	for(i=1;i<=b;i++){
		for(j=1;j<=b;j++){
			cout <<i<<"*"<<j<<"="<<i*j<<"\t";
			}
		cout <<endl;
		}
	}
	else if(a==2){
	cout << "請輸入開始值:";
	cin >> b;
	for(i=b;i>=1;i--){
		for(j=b;j>=1;j--){
			cout <<j<<"*"<<i<<"="<<i*j<<"\t";
			}
	cout <<endl;
		}
	}
	else {
	 	cout << "輸入錯誤\n";
	}
system ("pause");
	 return 0;

}

