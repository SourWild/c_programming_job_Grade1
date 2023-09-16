/* 2151928 唐芊竹 信12 */
#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	cerr << "文件名以下形式均可以:\n";
	cerr << "    a.txt                    : 不带路径形式\n";
	cerr << "    ..\\data\\b.dat          : 相对路径形式\n";
	cerr << "    C:\\Windows\\System32\\c.dat : 绝对相对路径形式\n";
	cerr << "请输入文件名 :";
	char file[30];
	unsigned char p;
	cin >> file;
	ifstream in(file, ios::in | ios::binary);
	if (!in.is_open()) {
		cout << "输入文件";
		for (int i = 0; file[i] != '\0'; i++) {
			cout << file[i];
		}
		cout << "打开失败!";
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