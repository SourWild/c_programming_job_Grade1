/* 2151928 ��ܷ�� ��12 */
#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	cerr << "�ļ���������ʽ������:\n";
	cerr << "    a.txt                    : ����·����ʽ\n";
	cerr << "    ..\\data\\b.dat          : ���·����ʽ\n";
	cerr << "    C:\\Windows\\System32\\c.dat : �������·����ʽ\n";
	cerr << "������Ҫת����hex��ʽ�ļ��� :";
	char file[30];
	unsigned char p;
	cin >> file;
	cerr << "������ת������ļ��� :";
	char file_zh[30];
	cin >> file_zh;
	ifstream in(file, ios::in | ios::binary);
	if (!in.is_open()) {
		cout << "�����ļ�";
		for (int i = 0; file[i] != '\0'; i++) {
			cout << file[i];
		}
		cout << "��ʧ��!";
		cout << endl;
		return -1;
	}
	int i = 0, cnt = 0, ascii;
	int x, y, o = 0;
	char str[79],str_zh[16];
	for (i = 0; i < 79; i++) {
		str[i] = '\0';
	}
	i = 0;
	while (in.read((char*)&p, 1)) {
		if (cnt >= 0 && cnt < 79) {
			str[i++] = p;
		}
		else if (cnt == 79) {
			str[i++] = p;
		}
		if (cnt == 79) {
			for (x = 10, y = 11; x <= 31 && y <= 32; x += 3, y += 3) {
				if (str[y] >= 97 && str[y] <= 102 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 87);
				}
				if (str[y] >= 97 && str[y] <= 102 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 87);
				}
				if (str[y] >= 48 && str[y] <= 57 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 48);
				}
				if (str[y] >= 48 && str[y] <= 57 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 48);
				}
				str_zh[o++] = (char)ascii;
			}
			for (x = 36, y = 37; x <= 57 && y <= 58; x += 3, y += 3) {
				if (str[y] >= 97 && str[y] <= 102 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 87);
				}
				else if (str[y] >= 97 && str[y] <= 102 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 87);
				}
				else if (str[y] >= 48 && str[y] <= 57 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 48);
				}
				else if (str[y] >= 48 && str[y] <= 57 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 48);
				}
				str_zh[o++] = (char)ascii;
			}
			/*
			ofstream out(file_zh, ios::out | ios::binary);
			if (x == 60) {
				for (int j = 0; str_zh[j] != '\0' && j < 16; j++) {
					out << str_zh[j];
				}
			}
			out.close();
			*/
		}
		if (cnt == 79) {
			cnt = 0;
			for (i = 0; i < 79; i++) {
				str[i] = '\0';
			}
			i = 0;
			o = 0;
		}
		else {
			cnt++;
		}
	}
		if (cnt > 0) {
			for (x = 10, y = 11; x <= 31 && y <= 32; x += 3, y += 3) {
				if (str[y] >= 97 && str[y] <= 102 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 87);
				}
				else if (str[y] >= 97 && str[y] <= 102 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 87);
				}
				else if (str[y] >= 48 && str[y] <= 57 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 48);
				}
				else if (str[y] >= 48 && str[y] <= 57 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 48);
				}
				else if (str[x] == ' ' && str[y] == ' ') {
					break;
				}
				str_zh[o++] = (char)ascii;
			}
			for (x = 36, y = 37; x <= 57 && y <= 58; x += 3, y += 3) {
				if (str[y] >= 97 && str[y] <= 102 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 87);
				}
				else if (str[y] >= 97 && str[y] <= 102 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 87);
				}
				else if (str[y] >= 48 && str[y] <= 57 && str[x] >= 48 && str[x] <= 57) {
					ascii = (int)(str[x] - 48) * 16 + (int)(str[y] - 48);
				}
				else if (str[y] >= 48 && str[y] <= 57 && str[x] >= 97 && str[x] <= 102) {
					ascii = (int)(str[x] - 87) * 16 + (int)(str[y] - 48);
				}
				else if (str[x] == ' ' && str[y] == ' ') {
					break;
				}
				str_zh[o++] = (char)ascii;
			}
			ofstream out(file_zh, ios::out | ios::binary);
			for (int j = 0; str_zh[j] != '\0' && j < 16; j++) {
				out << str_zh[j];
			}
			out.close();
		}
		/*
		if (cnt % 16 == 0) {
			cout << setw(8) << setfill('0') << setbase(16) << cnt << " ";
		}
		if ((cnt - 8) % 16 == 0) {
			cout << " -";
		}
		cout << " ";
		cout << setw(2) << setfill('0') << setbase(16) << (int)p;

		//cout << "?" << cnt << "?";

		if ((int)p > 126 || (int)p < 33) {
			p = '.';
		}
		str[i++] = p;
		if (i == 16) {
			cout << "     ";
			for (i = 0; i < 16; i++) {
				cout << str[i];
			}
			cout << endl;
			for (i = 0; i < 16; i++) {
				str[i] = '\0';
			}
			i = 0;

		}
		cnt++;
	}
	if (i != 0) {
		if (i < 9) {
			cout << "  ";
		}
		for (i = 0; str[i] != '\0'; i++) {
		}
		for (i; i < 16; i++) {
			cout << "   ";
		}
		cout << "     ";
		for (i = 0; str[i] != '\0'; i++) {
			cout << str[i];
		}
		*/
	
	in.close();

	return 0;
}