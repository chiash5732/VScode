//程式設計期末考試
//結構判斷式    1.if  2.if   else   3.if     else  if
//4.switch() case a...b  break;     default:
//迴圈          1.for   2.while   3.do   while
//取整數函式 floor()
//BMI計算方式:BMI=體重(kg)除以身高(M)的平方
//BMI值分級如下:
//BMI<18:體重過輕;18<BMI<24 體重正常  ;
//24<=<BMI<27 體重過重 ;27<=<BMI 體重肥胖;
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    float a,b,BMI,c;
	cout<< "請輸入體重(kg):";
	cin>>a;
	cout<< "請輸入身高(M):";
	cin>>b;
    BMI=a/(b*b) ;
    c=floor(BMI);
    cout<<"BMI為"<<BMI;
    if(c<18)
        cout<<"體重過輕";
    else if(18<=c&&c<24)
        cout<<"體重正常";
    else if(24<=c&&c<27)
        cout<<"體重過重";
    else
        cout<<"體重肥胖";
    system("pause");
    return 0;
}