/* 2151928 ��ܷ�� ��12 */
#define _CRT_SECURE_NO_WARNINGS		//ʹ����VS��Ϊunsafe�ĺ���
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//��getch����˲���Ҫ֧��Linux
#include <string.h>	//Dev/CB��strlen��Ҫ
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

	}//��str�������ַ�����i;
	for (j = 0; substr[j] != '\0'; j++) {

	}//��substr�������ַ�����j;
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
	s[0] = { 'A',"�������ȱ�",18.5 };
	s[1] = { 'B',"���༦�ȱ�",18.5 };
	s[2] = { 'C',"�°¶��������ȱ�",19 };
	s[3] = { 'D',"�ϱ��������",17 };
	s[4] = { 'E',"������ţ��",19.5 };
	s[5] = { 'F',"����㱤",18.5 };
	s[6] = { 'G',"˱ָԭζ��(1��)",11.5 };
	s[7] = { 'H',"֥֥����������Ƥ��",12.5 };
	s[8] = { 'I',"�°¶�������(2��)",12.5 };
	s[9] = { 'J',"�������׻�",11.5 };
	s[10] = { 'K',"��������(2��)",12 };
	s[11] = { 'L',"�ٽ��޹Ǵ���(2��)",12.5 };
	s[12] = { 'M',"����ɫ��",13 };
	s[13] = { 'N',"����(С)",9 };
	s[14] = { 'O',"����(��)",12 };
	s[15] = { 'P',"����(��)",14 };
	s[16] = { 'Q',"ܽ��������",9 };
	s[17] = { 'R',"ԭζ��Ͳ������",6 };
	s[18] = { 'S',"����������",7 };
	s[19] = { 'T',"�������װ�",9 };
	s[20] = { 'U',"��ʽ��̢",8 };
	s[21] = { 'V',"���¿���(С)",7 };
	s[22] = { 'W',"���¿���(��)",9.5 };
	s[23] = { 'X',"���¿���(��)",11.5 };
	s[24] = { 'Y',"�����֭����",12.5 };
	s[25] = { 'Z',"����������",11.5 };

		cout << "=============================================================\n";
		cout << "                      KFC 2021�＾�˵�\n";
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
		m[0] = { "BMV","���༦�ȱ���ֵ�ײ�",26,38.5 };
		m[1] = { "ABCGGIIKKOUWWW","��ֵȫ��Ͱ",115,176.5};
		m[2] = { "IIJKRRUWW","�ͷ�С��Ͱ",65,87.5 };
		m[3] = { "JJ","�������׻�(2��С)",12.5,23 };
		cout << endl;
		cout << "���Ż���Ϣ����\n";

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
		cout << "\n���������˵������\n";
		cout << "ANV=�������ȱ�+����(С)+���¿���(С) / akaak=�������ȱ�*3+��������*2\n";
		cout << "��ĸ���ִ�Сд������˳�򣬵�������0���˳�����\n";
		cout << "\n��㵥:";
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
				cout << "������󣬰����������.\n";
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

		//cntΪ����Ԫ�ظ���
		//ð��
		for (int i = 0; i < cnt - 1; i++) {
			for (int j = i + 1; j < cnt; j++) {
				if (takeorder[i] > takeorder[j]) {
					p = takeorder[i];
					takeorder[i] = takeorder[j];
					takeorder[j] = p;
				}
			}
		}
		//�ĳɴ�д
		for (int i = 0; i < cnt; i++) {
			if ((int)takeorder[i] - 65 >= 0 && (int)takeorder[i] - 65 < 26) {
				count_n[(int)takeorder[i] - 65] += 1;
			}
		}

		cout << "���ĵ㵥=";
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
		//���ײ��غ��������
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
		cout << "���ƣ�" << sum << "Ԫ\n";
		cout << "�㵥��ɣ������������.\n";
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
