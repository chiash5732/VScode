//�{���]�p�����Ҹ�       
//���c�P�_��    1.if {}  2.if  {}  else  {}  3.if  {}   else  if {}   3.switch(a)    case a:
//�j��          1.for (   )    {     }         2.while {}  3.do   while   
//�]�w�e��setw( )
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,i,j;
	cout << "�п��:(1)���W;(2)����;";
	cin >> a;
	if(a==1){
	cout << "�п�J������:"; 
	cin >> b;
	for(i=1;i<=b;i++){
		for(j=1;j<=b;j++){
			cout <<i<<"*"<<j<<"="<<i*j<<"\t";
			}
		cout <<endl;
		}
	}
	else if(a==2){
	cout << "�п�J�}�l��:"; 
	cin >> b;
	for(i=b;i>=1;i--){
		for(j=b;j>=1;j--){
			cout <<j<<"*"<<i<<"="<<i*j<<"\t";
			}
	cout <<endl;
		}
	}
	else {
	 	cout << "��J���~\n"; 
	}
system ("pause");
	 return 0;

}

