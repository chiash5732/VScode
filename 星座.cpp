#include <iostream>
using namespace std;
int main()
{
    int m,d;
    cout << "��J�X�ͤ��:";
	cin >> m ;
	if((m<1)||(m>12)){
		cout << "�����J���~!";
		return 0;
	}
	cout << "��J�X�ͤ��:";
	cin >> d ;
	if((m==2&&d>29)||(m==4&&d>30)||(m==6&&d>30)||(m==9&&d>30)||(m==11&&d>30)||(d<1)||(d>31)){
		cout << "�ͤ��J���~!";
	}
	else{
		switch(m){
			case 1:
				if(d>=21){
					cout << "���~�y Aquarius";
				}
				else{
					cout << "���~�y Capricorn";
				}
				break;
			case 2:
				if(d<=19){
					cout << "���~�y Aquarius";
				}
				else{
					cout << "�����y Pisces";
				}
				break;
			case 3:
				if(d<=20){
					cout << "�����y Pisces";
				}
				else{
					cout << "���Ϯy Aries";
				}
				break;
			case 4:
				if(d<=20){
					cout << "���Ϯy Aries";
				}
				else{
					cout << "�����y Taurus";
				}
				break;
			case 5:
				if(d<=21){
					cout << "�����y Taurus";
				}
				else{
					cout << "���l�y Gemini";
				}
				break;
			case 6:
				if(d<=21){
					cout << "���l�y Gemini";
				}
				else{
					cout << " ���ɮy Cancer";
				}
				break;
			case 7:
				if(d<=22){
					cout << " ���ɮy Cancer";
				}
				else{
					cout << "��l�y Leo";
				}
				break;
			case 8:
				if(d<=22){
					cout << "��l�y Leo";
				}
				else{
					cout << "�B�k�y Virgo";
				}
				break;
			case 9:
				if(d<=23){
					cout << "�B�k�y Virgo";
				}
				else{
					cout << "�ѯ��y Libra";
				}
				break;
			case 10:
				if(d<=23){
					cout << "�ѯ��y Libra";
				}
				else{
					cout << "���Ȯy Scorpio";
				}
				break;
			case 11:
				if(d<=22){
					cout << "���Ȯy Scorpio";
				}
				else{
					cout << "�g��y Sagittarius";
				}
				break;
			case 12:
				if(d<=21){
					cout << "�g��y Sagittarius";
				}
				else{
					cout << " ���~�y Capricorn";
				}
				break;
			default:
			cout << "earror";
		}
	}
 	return 0;
}