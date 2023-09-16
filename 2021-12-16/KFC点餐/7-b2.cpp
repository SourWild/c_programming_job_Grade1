/* 2151928 唐芊竹 信12 */
#define _CRT_SECURE_NO_WARNINGS		//使用了VS认为unsafe的函数
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//用getch，因此不需要支持Linux
#include <string.h>	//Dev/CB的strlen需要
using namespace std;
struct kfc {
	char tip;
	char name[20] = { 0 };
	double price;
};
struct sale {
	char zuhe[15];
	char name_sale[20];
	double price_sale;
	double yuanjia;
};

int tj_strstr(const char str[], const char substr[])
{
	int i, j, u, prime = 0, b, c;
	for (i = 0; str[i] != '\0'; i++) {

	}//数str数组内字符个数i;
	for (j = 0; substr[j] != '\0'; j++) {

	}//数substr数组内字符个数j;
	for (b = 0; b < i; b++) {
		prime = 0;
		u = 0;
		if (substr[u] != str[b]) {

			continue;
		}
		if (substr[u] == str[b]) {

			prime += 1;
			c = b;
			while (u < j - 1) {

				u++;
				c++;
				if (substr[u] != str[c]) {
					break;
				}
				else {
					prime++;
				}

			}
		}
		if (prime == j) {
			return (c - prime + 2);
		}
	}
	return 0;
}
int main() {
	system("mode con cols=120 lines=35");
	while (1) {
	struct kfc s[26];
	int count[4][26];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 26; j++) {
			count[i][j] = 0;
		}
	}
	s[0] = { 'A',"香辣鸡腿堡",18.5 };
	s[1] = { 'B',"劲脆鸡腿堡",18.5 };
	s[2] = { 'C',"新奥尔良烤鸡腿堡",19 };
	s[3] = { 'D',"老北京鸡肉卷",17 };
	s[4] = { 'E',"川辣嫩牛卷",19.5 };
	s[5] = { 'F',"深海鳕鱼堡",18.5 };
	s[6] = { 'G',"吮指原味鸡(1块)",11.5 };
	s[7] = { 'H',"芝芝肉酥热辣脆皮鸡",12.5 };
	s[8] = { 'I',"新奥尔良烤翅(2块)",12.5 };
	s[9] = { 'J',"劲爆鸡米花",11.5 };
	s[10] = { 'K',"香辣鸡翅(2块)",12 };
	s[11] = { 'L',"藤椒无骨大鸡柳(2块)",12.5 };
	s[12] = { 'M',"鲜蔬色拉",13 };
	s[13] = { 'N',"薯条(小)",9 };
	s[14] = { 'O',"薯条(中)",12 };
	s[15] = { 'P',"薯条(大)",14 };
	s[16] = { 'Q',"芙蓉蔬荟汤",9 };
	s[17] = { 'R',"原味花筒冰激凌",6 };
	s[18] = { 'S',"醇香土豆泥",7 };
	s[19] = { 'T',"香甜粟米棒",9 };
	s[20] = { 'U',"葡式蛋挞",8 };
	s[21] = { 'V',"百事可乐(小)",7 };
	s[22] = { 'W',"百事可乐(中)",9.5 };
	s[23] = { 'X',"百事可乐(大)",11.5 };
	s[24] = { 'Y',"九珍果汁饮料",12.5 };
	s[25] = { 'Z',"纯纯玉米饮",11.5 };

		cout << "=============================================================\n";
		cout << "                      KFC 2021秋季菜单\n";
		cout << "=============================================================\n";
		for (int i = 0, j = 1; i < 26; i++, j++) {
			if (j % 2 != 0) {
				cout << ' ' << s[i].tip << ' ';
				for (int m = 0; m < 20; m++) {
					if (s[i].name[m] != '\0') {
						cout << s[i].name[m];
					}
					if (s[i].name[m] == '\0') {
						cout << ' ';
					}
				}
				cout << setw(5) << setiosflags(ios::left) << s[i].price;
				cout << "  " << '|' << "  ";
			}
			if (j % 2 == 0) {
				cout << ' ' << s[i].tip << ' ';
				for (int m = 0; m < 20; m++) {
					if (s[i].name[m] != '\0') {
						cout << s[i].name[m];
					}
					if (s[i].name[m] == '\0') {
						cout << ' ';
					}
				}
				cout << setw(5) << setiosflags(ios::left) << s[i].price;
				cout << endl;
			}
		}
		struct sale m[4];
		m[0] = { "BMV","劲脆鸡腿堡超值套餐",26,38.5 };
		m[1] = { "ABCGGIIKKOUWWW","超值全家桶",115,176.5};
		m[2] = { "IIJKRRUWW","缤纷小吃桶",65,87.5 };
		m[3] = { "JJ","劲爆鸡米花(2份小)",12.5,23 };
		cout << endl;
		cout << "【优惠信息】：\n";

		for (int i = 0; i < 4; i++) {
			for (int h = 0; h < 15 && m[i].zuhe[h] != '\0'; h++) {
				count[i][m[i].zuhe[h] - 65] += 1;
			}
		}
		for (int i = 0; i < 4; i++) {
			cout << m[i].name_sale << "=";
			for (int h = 0, cnt = 1; h < 15 && m[i].zuhe[h] != '\0'; h++, cnt++) {
				if (cnt == 1) {
					if (count[i][m[i].zuhe[h] - 65] == 1)
						cout << s[m[i].zuhe[h] - 65].name;
					else {
						cout << s[m[i].zuhe[h] - 65].name << "*" << count[i][m[i].zuhe[h] - 65];
						h += count[i][m[i].zuhe[h] - 65] - 1;
					}
				}
				else {
					if (count[i][m[i].zuhe[h] - 65] == 1)
						cout << "+" << s[m[i].zuhe[h] - 65].name;
					else {
						cout << "+" << s[m[i].zuhe[h] - 65].name << "*" << count[i][m[i].zuhe[h] - 65];
						h += count[i][m[i].zuhe[h] - 65] - 1;
					}
				}
			}
			cout << "=" << m[i].price_sale;
			cout << endl;

		}
		cout << "\n【输入规则说明】：\n";
		cout << "ANV=香辣鸡腿堡+薯条(小)+百事可乐(小) / akaak=香辣鸡腿堡*3+香辣鸡翅*2\n";
		cout << "字母不分大小写，不限顺序，单独输入0则退出程序\n";
		cout << "\n请点单:";
		char takeorder[100];
		char p;
		cin >> takeorder;
		int cnt;
		int err = 0;
		double sum = 0;
		int count_n[26];
		for (int i = 0; i < 26; i++) {
			count_n[i] = 0;
		}
		for (cnt = 0; takeorder[cnt] != '\0'; cnt++) {

		}
		for (int n = 0; n < cnt; n++) {
			if (takeorder[n] >= 97 && takeorder[n] <= 122 || takeorder[n] >= 65 && takeorder[n] <= 90) {
				continue;
			}
			else {
				cout << "输入错误，按任意键继续.\n";
				err++;
				break;
			}
		}
		if (err != 0) {
			if (_getch() != '0') {
				system("cls");
				continue;
			}
			else {
				return 0;
			}
		}
		for (int n = 0; n < cnt; n++) {
			if (takeorder[n] >= 97 && takeorder[n] <= 122) {
				takeorder[n] = (char)(takeorder[n] - 32);
			}
		}

		//cnt为数组元素个数
		//冒泡
		for (int i = 0; i < cnt - 1; i++) {
			for (int j = i + 1; j < cnt; j++) {
				if (takeorder[i] > takeorder[j]) {
					p = takeorder[i];
					takeorder[i] = takeorder[j];
					takeorder[j] = p;
				}
			}
		}
		//改成大写
		for (int i = 0; i < cnt; i++) {
			if ((int)takeorder[i] - 65 >= 0 && (int)takeorder[i] - 65 < 26) {
				count_n[(int)takeorder[i] - 65] += 1;
			}
		}

		cout << "您的点单=";
		int num = 1;
		for (int h = 0; h < 26; h++) {
			if (count_n[h] > 0) {
				if (num == 1) {
					if (count_n[h] == 1)
						cout << s[h].name;
					if (count_n[h] > 1)
						cout << s[h].name << "*" << count_n[h];
				}
				else {
					if (count_n[h] == 1)
						cout << "+" << s[h].name;
					if (count_n[h] > 1)
						cout << "+" << s[h].name << "*" << count_n[h];
				}
				num++;
				sum += s[h].price * count_n[h];
			}
			else {
				continue;
			}
		}
		//和套餐重合情况讨论
		for (int z = 0; z < 4; z++) {
			for (int x = 0, b = 0; m[z].zuhe[x] != '\0';b++) {
				if (m[z].zuhe[x] == takeorder[b]) {
					x++;
				}
				if (takeorder[b] == '\0') {
					break;
				}
				if (m[z].zuhe[x] == '\0') {
					sum -= (m[z].yuanjia - m[z].price_sale);
					break;
				}
			}
		}
		cout << endl;
		cout << "共计：" << sum << "元\n";
		cout << "点单完成，按任意键继续.\n";
		if (_getch() != '0') {
			system("cls");
			continue;
		}
		else {
			return 0;
		}
	}
	return 0;
}
