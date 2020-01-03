#include <iostream>
using namespace std;
int main()
{
    int m,d;
    cout << "輸入出生月份:";
	cin >> m ;
	if((m<1)||(m>12)){
		cout << "月份輸入錯誤!";
		return 0;
	}
	cout << "輸入出生日期:";
	cin >> d ;
	if((m==2&&d>29)||(m==4&&d>30)||(m==6&&d>30)||(m==9&&d>30)||(m==11&&d>30)||(d<1)||(d>31)){
		cout << "生日輸入錯誤!";
	}
	else{
		switch(m){
			case 1:
				if(d>=21){
					cout << "水瓶座 Aquarius";
				}
				else{
					cout << "摩羯座 Capricorn";
				}
				break;
			case 2:
				if(d<=19){
					cout << "水瓶座 Aquarius";
				}
				else{
					cout << "雙魚座 Pisces";
				}
				break;
			case 3:
				if(d<=20){
					cout << "雙魚座 Pisces";
				}
				else{
					cout << "杜羊座 Aries";
				}
				break;
			case 4:
				if(d<=20){
					cout << "杜羊座 Aries";
				}
				else{
					cout << "金牛座 Taurus";
				}
				break;
			case 5:
				if(d<=21){
					cout << "金牛座 Taurus";
				}
				else{
					cout << "雙子座 Gemini";
				}
				break;
			case 6:
				if(d<=21){
					cout << "雙子座 Gemini";
				}
				else{
					cout << " 巨蟹座 Cancer";
				}
				break;
			case 7:
				if(d<=22){
					cout << " 巨蟹座 Cancer";
				}
				else{
					cout << "獅子座 Leo";
				}
				break;
			case 8:
				if(d<=22){
					cout << "獅子座 Leo";
				}
				else{
					cout << "處女座 Virgo";
				}
				break;
			case 9:
				if(d<=23){
					cout << "處女座 Virgo";
				}
				else{
					cout << "天秤座 Libra";
				}
				break;
			case 10:
				if(d<=23){
					cout << "天秤座 Libra";
				}
				else{
					cout << "天蠍座 Scorpio";
				}
				break;
			case 11:
				if(d<=22){
					cout << "天蠍座 Scorpio";
				}
				else{
					cout << "射手座 Sagittarius";
				}
				break;
			case 12:
				if(d<=21){
					cout << "射手座 Sagittarius";
				}
				else{
					cout << " 摩羯座 Capricorn";
				}
				break;
			default:
			cout << "earror";
		}
	}
 	return 0;
}