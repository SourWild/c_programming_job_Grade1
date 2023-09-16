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
	w = w % 7;  //0 1 2 3 4 5 6;
	return w;
}
int main()
{
	int y, m, r;
	int a;//c1为平年的日的规律，c2为闰年的日的规律
	int s, t = 1;//(d为一个月有多少天)

	while (1) {
		cout << "请输入年[1900-2100]、月\n";
		cin >> y >> m;   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		if (y >= 1900 && y <= 2100 && m >= 1 && m <= 12) {
			break;
		}
		else {
			if (cin.good() == 1) { //超范围，但是实数；
				if (y < 1900 || y>2100)
					cout << "年份不正确，请重新输入";

				else {
					cout << "月份不正确，请重新输入";
				}
				continue;
			}
			if (cin.good() == 0) {
				cout << "输入错误，请重新输入";
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
		}
	}
	cout << "\n" << y << "年" << m << "月\n";
	cout << "======================================================\n";
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六\n";
	cout << "======================================================\n";
	a = (y % 4 == 0) && (y % 100 != 0) || (y % 4 == 0) && (y % 400 == 0);//闰年为1，平年为0
	r = zeller(y, m, 1);
	s = r;                   //把r的值赋给s，对s做自减
	if ((a == 0) && (m == 2)) {      //28天
		for (; s != 0; s--) {
			cout << "        ";
		}
		for (; t >= 1 && t <= 28; ) {
			for (; (t + r) % 7 != 0 && t >= 1 && t <= 28; t++) {   //t为变动自增的"日"
				if (t < 10) {
					cout << "   " << t << "    ";
				}
				if (t >= 10) {
					cout << "  " << t << "    ";
				}
			}
			for (; (t + r) % 7 == 0 && t >= 1 && t <= 28; t++) {
				if (t < 10) {
					cout << "   " << t << "    " << endl;
				}
				if (t >= 10) {
					cout << "  " << t << "    " << endl;
				}
				continue;
			}
		}
	}
	if ((a == 1) && (m == 2)) {          //29天
		for (; s != 0; s--) {
			cout << "        ";
		}
		for (; t >= 1 && t <= 29; ) {
			for (; (t + r) % 7 != 0 && (t >= 1 && t <= 29); t++) {   //t为变动自增的"日"
				if (t < 10) {
					cout << "   " << t << "    ";
				}
				if (t >= 10) {
					cout << "  " << t << "    ";
				}
			}
			for (; (t + r) % 7 == 0 && t >= 1 && t <= 29; t++) {
				if (t < 10) {
					cout << "   " << t << "    " << endl;
				}
				if (t >= 10) {
					cout << "  " << t << "    " << endl;
				}
				continue;
			}
		}
	}
	if (m == 4 || m == 6 || m == 9 || m == 11) {   //30天
		for (; s != 0; s--) {
			cout << "        ";
		}
		for (; t >= 1 && t <= 30; ) {
			for (; (t + r) % 7 != 0 && t >= 1 && t <= 30; t++) {   //t为变动自增的"日"
				if (t < 10) {
					cout << "   " << t << "    ";
				}
				if (t >= 10) {
					cout << "  " << t << "    ";
				}
			}
			for (; (t + r) % 7 == 0 && t >= 1 && t <= 30; t++) {
				if (t < 10) {
					cout << "   " << t << "    " << endl;
				}
				if (t >= 10) {
					cout << "  " << t << "    " << endl;
				}
				continue;
			}
		}
	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {  //31天
		for (; s != 0; s--) {
			cout << "        ";
		}
		for (; t >= 1 && t <= 31; ) {
			for (; (t + r) % 7 != 0 && t >= 1 && t <= 31; t++) {   //t为变动自增的"日"
				if (t < 10) {
					cout << "   " << t << "    ";
				}
				if (t >= 10) {
					cout << "  " << t << "    ";
				}
			}
			for (; (t + r) % 7 == 0 && t >= 1 && t <= 31; t++) {
				if (t < 10) {
					cout << "   " << t << "    " << endl;
				}
				if (t >= 10) {
					cout << "  " << t << "    " << endl;
				}
				continue;
			}
		}
	}
	cout << endl;
	cout << endl;
	return 0;
}