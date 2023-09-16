/* 2151928 唐芊竹 信12 */
#include "90-b2.h"
#include <iostream>
#include <iomanip>
#include "90-b2.h"
#include "cmd_console_tools.h"
#include <conio.h>
#include <windows.h>
using namespace std;
int my_score(char crd_x, char crd_y, int line_x, int line_y, int array[][10], char array_ch[][10], int order)
{
	int score = 0;
	if (order - 48 == 8 || order - 48 == 9) {
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				if (array_ch[i][j] == '*') {
					score += array[crd_x - 65][crd_y - 48] * 3;
				}
			}
		}
	}
	if (order - 48 == 3|| order - 48 == 4) {
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				if (array_ch[i][j] == '*') {
					score += (array[crd_x - 65][crd_y - 48] - 1) * 3;
				}
			}
		}
	}
	else {
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				if (array_ch[i][j] == '*') {
					score += array[crd_x - 65][crd_y - 48] * 3;
				}
			}
		}
	}
	return score;
}
void rand_make(int line_x, int line_y, int array[][10], int max)
{
	if (max == 3) {
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				array[i][j] = (rand() % 3) + 1;
			}
		}
	}
	if (max == 4) {
		int mid;
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				if (array[i][j] == 0) {
					mid = (rand() % 100) + 1;
					if (mid >= 1 && mid <= 30) {
						array[i][j] = 1;
					}
					if (mid >= 31 && mid <= 60) {
						array[i][j] = 2;
					}
					if (mid >= 61 && mid <= 90) {
						array[i][j] = 3;
					}
					if (mid >= 91 && mid <= 100) {
						array[i][j] = 4;
					}
				}
			}
		}
	}
	if (max == 5) {
		int mid;
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				if (array[i][j] == 0) {
					mid = (rand() % 100) + 1;
					if (mid >= 1 && mid <= 25) {
						array[i][j] = 1;
					}
					if (mid >= 26 && mid <= 50) {
						array[i][j] = 2;
					}
					if (mid >= 51 && mid <= 75) {
						array[i][j] = 3;
					}
					if (mid >= 76 && mid <= 90) {
						array[i][j] = 4;
					}
					if (mid >= 91 && mid <= 100) {
						array[i][j] = 5;
					}
				}
			}
		}
	}
	if (max == 6) {
		int mid;
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				if (array[i][j] == 0) {
					mid = (rand() % 100) + 1;
					if (mid >= 1 && mid <= 20) {
						array[i][j] = 1;
					}
					if (mid >= 21 && mid <= 40) {
						array[i][j] = 2;
					}
					if (mid >= 41 && mid <= 60) {
						array[i][j] = 3;
					}
					if (mid >= 61 && mid <= 80) {
						array[i][j] = 4;
					}
					if (mid >= 81 && mid <= 95) {
						array[i][j] = 4;
					}
					if (mid >= 96 && mid <= 100) {
						array[i][j] = 4;
					}
				}
			}
		}
	}
	if (max > 6) {
		int mid;
		for (int i = 0; i < line_x; i++) {
			for (int j = 0; j < line_y; j++) {
				if (array[i][j] == 0) {
					mid = (rand() % 100) + 1;
					if (mid >= 1 && mid <= 5) {
						array[i][j] = max;
					}
					else if (mid >= 6 && mid <= 10) {
						array[i][j] = max - 1;
					}
					else if (mid >= 11 && mid <= 20) {
						array[i][j] = max - 2;
					}
					else {
						array[i][j] = (rand() % (max - 3)) + 1;
					}
				}
			}
		}
	}
}
void my_end()
{
	cout << "\n本小题结束，请输入End继续...";
	int m, n;
	cct_getxy(m, n);
	char w1 = 'a', w2 = 'b', w3 = 'c';
	while (!((w1 == 'e' || w1 == 'E') && (w2 == 'n' || w2 == 'N') && (w3 == 'd' || w3 == 'D'))) {
		cct_gotoxy(m, n);
		cout << "                           ";
		cct_gotoxy(m, n);
		cin >> w1 >> w2 >> w3;
		cin.ignore(65535, '\n');
	}
	cct_cls();

}