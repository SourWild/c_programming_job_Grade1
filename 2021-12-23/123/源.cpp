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
	cerr << "�������ļ��� :";
	char file[30];
	cin >> file;
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
	int i, cnt = 0;
	char str[16];
	while (!in.eof()) {
		for (i = 0; i < 16; i++) {
			str[i] = '\0';
		}
		if (!in.eof()) {
			in.read(str, 16);
		}
		if (!in.eof()) {
			cout << setw(8) << setfill('0') << setbase(16) << cnt;
		}
		else {
			if (str[0] != '\0') {
				cout << setw(8) << setfill('0') << setbase(16) << cnt;
			}
		}

		cout << "  ";
		for (i = 0; i < 8; i++) {
			if (str[i] != '\0')
				cout << setw(2) << setfill('0') << setbase(16) << (int)str[i] << " ";
			else
				cout << "  " << " ";
		}
		if (str[i] != '\0')
			cout << "- ";
		else
			cout << "  ";
		for (i = 8; i < 16; i++) {
			if (str[i] != '\0')
				cout << setw(2) << setfill('0') << setbase(16) << (int)str[i] << " ";
			else
				cout << "  " << " ";
		}
		cout << "    ";
		for (i = 0; i < 16; i++) {
			if (str[i] != '\0') {
				cnt++;
			}
			if ((int)str[i] > 126 || (int)str[i] < 33 && (int)str[i] != '\0') {
				str[i] = '.';
			}
		}
		for (i = 0; i < 16; i++) {
			if (str[i] != '\0')
				cout << str[i];
			else
				break;
		}
		cout << endl;
		for (i = 0; i < 16; i++) {
			str[i] = '\0';
		}
	}
	in.close();

	return 0;
}