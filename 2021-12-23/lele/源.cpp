/* 2151928 唐芊竹 信12 */
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
#define line_x_array 8
#define line_y_array 10
int main()
{
	char array[line_x_array][line_y_array];
	double line_x, line_y;
	srand((unsigned)time(NULL));
	while (1) {
		cout << "请输入行数(5-8)：\n";
		cin >> line_x;
		if (cin.good() && line_x >= 5 && line_x <= 8) {
			break;
		}
		else {
			cin.ignore(65535, '\n');
			cin.clear();
		}
	}
	while (1) {
		cout << "请输入列数(5-10)：\n";
		cin >> line_y;
		if (cin.good() && line_y >= 5 && line_y <= 10) {
			break;
		}
		else {
			cin.ignore(65535, '\n');
			cin.clear();
		}
	}
	for (int i = 0; i < line_x; i++) {
		for (int j = 0; j < line_y; j++) {
			array[i][j] = 1;
			cout << array[i][j];
		}
	}
	cout << "\n当前数组：\n";
	cout << "  | ";
	for (int i = 0; i < line_y; i++) {
		cout << ' ' << i << ' ';
	}
	cout << endl;
	cout << "--+-";
	cout << setw((double)3 * line_y) << setfill('-') << '-';
	cout << endl;
	for (int i = 0; i < line_x; i++) {
		cout << (char)(i + 65) << " | ";
		for (int j = 0; j < line_y; j++) {
			cout << ' ' << array[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	cout << "请以字母+数字形式[例：c2]输入矩阵坐标\n";

	return 0;
}