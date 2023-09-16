/* 2151928 唐芊竹 信12 */
#include <iostream>
#include <iomanip>
#include "90-b2.h"
#include "cmd_console_tools.h"
#include <conio.h>
#include <windows.h>
using namespace std;
void HLIGHT_square(int p, int q, int base_x, int base_y, int array[][10])
{
	if (array[q][p] == 0) {
		return;
	}
	cct_gotoxy(p * 8 + base_x, base_y + q * 4);
	cct_setcolor(array[q][p], COLOR_WHITE);
	cout << "┏━┓\n";
	cct_gotoxy(base_x + p * 8, base_y + q * 4 + 1);
	cout << "┃" << array[q][p] << " " << "┃";
	cct_gotoxy(base_x + p * 8, base_y + q * 4 + 2);
	cout << "┗━┛\n";
}
void CANCEL_HLIGHT_square(int p, int q, int base_x, int base_y, int array[][10])
{
	if (array[q][p] == 0) {
		return;
	}
	cct_gotoxy(p * 8 + base_x, base_y + q * 4);
	cct_setcolor(array[q][p], COLOR_BLACK);
	cout << "┏━┓\n";
	cct_gotoxy(base_x + p * 8, base_y + q * 4 + 1);
	cout << "┃" << array[q][p] << " " << "┃";
	cct_gotoxy(base_x + p * 8, base_y + q * 4 + 2);
	cout << "┗━┛\n";
}
void squares_clean(int p, int q, int line_x, int line_y, int base_x, int base_y, int array[][10], char array_ch[][10])
{
	/*实现guibing函数的功能*/
	for (int i = 0; i < line_x; i++) {
		for (int j = 0; j < line_y; j++) {
			if (array_ch[i][j] == '*' && !(i == q && j == p)) {
				array[i][j] = 0;
			}
		}
	}
	array[q][p] += 1;
	/*擦除需要合并的色块，升级选中色块*/
	for (int i = 0; i < line_x; i++) {
		for (int j = 0; j < line_y; j++) {
			if (array[i][j] == 0) {
				cct_gotoxy(j * 8 + base_x, base_y + i * 4);
				cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
				cout << "      \n";
				cct_gotoxy(base_x + j * 8, base_y + i * 4 + 1);
				cout << "  " << "  " << "  ";
				cct_gotoxy(base_x + j * 8, base_y + i * 4 + 2);
				cout << "      \n";
			}
			HLIGHT_square(p, q, base_x, base_y, array);
		}
	}
}
void print_square(int x, int y, int base_x, int base_y, int array[][10], int order)
//打印每一个数字对应的小方块
{
	if (order - 48 == 5) {
		cct_gotoxy(base_x + y * 6, base_y + x * 3);
		cct_setcolor(array[x][y], COLOR_BLACK);
		cout << "┏━┓\n";
		cct_gotoxy(base_x + y * 6, base_y + x * 3 + 1);
		cout << "┃" << array[x][y] << " " << "┃";
		cct_gotoxy(base_x + y * 6, base_y + x * 3 + 2);
		cout << "┗━┛\n";
	}
	if (order - 48 == 6 || order - 48 == 7 || order - 48 == 8 || order - 48 == 9) {
		if (array[x][y] == 0) {
			cct_gotoxy(y * 8 + base_x, base_y + x * 4);
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "      \n";
			cct_gotoxy(base_x + y * 8, base_y + x * 4 + 1);
			cout << "  " << "  " << "  ";
			cct_gotoxy(base_x + y * 8, base_y + x * 4 + 2);
			cout << "      \n";
		}
		else {
			cct_gotoxy(base_x + y * 8, base_y + x * 4);
			cct_setcolor(array[x][y], COLOR_BLACK);
			cout << "┏━┓\n";
			cct_gotoxy(base_x + y * 8, base_y + x * 4 + 1);
			cout << "┃" << array[x][y] << " " << "┃";
			cct_gotoxy(base_x + y * 8, base_y + x * 4 + 2);
			cout << "┗━┛\n";
		}
	}
}
int xy_judge(int MX, int MY, int line_x, int line_y, int& p, int& q)
{
	for (int i = 0; i < line_x; i++) {
		for (int j = 0; j < line_y; j++) {
			if (MX >= j * 8 + 4 && MX <= j * 8 + 9 && MY >= i * 4 + 3 && MY <= i * 4 + 5) {
				p = j;
				q = i;
				return 1;
			}
		}
	}
	return 0;
}