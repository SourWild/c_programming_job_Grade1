/* 2151928 唐芊竹 信12 */
#include <iostream>
using namespace std;
int zeller(int y, int m, int d)
{
	int w, c;
	if (m == 1) {
		m = 13, y--;
	}
	if (m == 2) {
		m = 14, y--;
	}
	c = y / 100; //世纪-1
	y = y % 100;
	w = y + y / 4 + c / 4 - 2 * c + (26 * (m + 1) / 10) / 1 + d - 1;
	for (w; w <= 0;) {
		w += 7;
	}
	w = w % 7;
	return w;
}
int main()
{
	int y, m, d, k;
	while (1) {
		cout << "请输入年[1900-2100]、月、日：\n";
		cin >> y >> m >> d;   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		int a1, a2, a3, a4, a5;//a3为平年的日的规律，a4为闰年的日的规律
		a1 = (y % 4 == 0) && (y % 100 != 0) || (y % 4 == 0) && (y % 400 == 0);//闰年a1为1，平年a1为0
		a2 = (m >= 1) && (m <= 12);           //月的规律
		a3 = (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) && (d >= 1) || (m == 2) && (d <= 28) && (d >= 1) || (m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30) && (d >= 1);
		a4 = (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) && (d >= 1) || (m == 2) && (d <= 29) && (d >= 1) || (m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30) && (d >= 1);
		a5 = y >= 1900 && y <= 2100;
		if (cin.fail() != 0) {
			cout << "输入错误，请重新输入" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		if (a5 == 0 && cin.fail() == 0) {     //年份不符合规律
			cout << "年份不正确，请重新输入" << endl;
			continue;
		}
		else {          //年份符合规律
			if (a2 == 0 && cin.fail() == 0) {         //年符合规律，月份不符合规律
				cout << "月份不正确，请重新输入" << endl;
				continue;
			}
			else {                  //月符合规律
				if (((a1 == 1 && a4 == 0) || (a1 == 0 && a3 == 0)) && cin.fail() == 0) {  //日不符合规律
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
		}
		if (a5 == 1 && a2 == 1 && ((a1 == 1 && a4 == 1) || (a1 == 0 && a3 == 1)) && cin.fail() == 0) {
			break;
		}
	}
	if (zeller(y, m, d) == 0)
		cout << "星期日" << endl;
	if (zeller(y, m, d) == 1)
		cout << "星期一" << endl;
	if (zeller(y, m, d) == 2)
		cout << "星期二" << endl;
	if (zeller(y, m, d) == 3)
		cout << "星期三" << endl;
	if (zeller(y, m, d) == 4)
		cout << "星期四" << endl;
	if (zeller(y, m, d) == 5)
		cout << "星期五" << endl;
	if (zeller(y, m, d) == 6)
		cout << "星期六" << endl;
	return 0;
}
