//�{���]�p�����Ҹ�
//���c�P�_��    1.if  2.if   else   3.if     else  if
//4.switch() case a...b  break;     default:
//�j��          1.for   2.while   3.do   while
//����ƨ禡 floor()
//BMI�p��覡:BMI=�魫(kg)���H����(M)������
//BMI�Ȥ��Ŧp�U:
//BMI<18:�魫�L��;18<BMI<24 �魫���`  ;
//24<=<BMI<27 �魫�L�� ;27<=<BMI �魫�έD;
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    float a,b,BMI,c;
	cout<< "�п�J�魫(kg):";
	cin>>a;
	cout<< "�п�J����(M):";
	cin>>b;
    BMI=a/(b*b) ;
    c=floor(BMI);
    cout<<"BMI��"<<BMI;
    if(c<18)
        cout<<"�魫�L��";
    else if(18<=c&&c<24)
        cout<<"�魫���`";
    else if(24<=c&&c<27)
        cout<<"�魫�L��";
    else
        cout<<"�魫�έD";
    system("pause");
    return 0;
}