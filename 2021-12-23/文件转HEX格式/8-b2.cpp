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
	unsigned char p;
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
	int i = 0, cnt = 0;
	char str[16];
	for (i = 0; i < 16; i++) {
		str[i] = '\0';
	}
	i = 0;
	while (in.read((char*)&p, 1)) {
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
	}
	in.close();

	return 0;
}