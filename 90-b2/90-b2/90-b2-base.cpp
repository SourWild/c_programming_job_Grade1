/* 2151928 唐芊竹 信12 */
#include <iostream>
#include <iomanip>
#include "90-b2.h"
#include "cmd_console_tools.h"
#include <conio.h>
#include <windows.h>
using namespace std;
void shuru(char*x,char*y, int array[][10], char array_ch[][10], int line_x, int line_y)
{
	int qk_x, qk_y;
	char crd_x, crd_y;
	cout << "请以字母+数字形式[例：c2]输入矩阵坐标：";
	while (1) {
		cin >> crd_x>> crd_y;
		if ((crd_x >= 65 && crd_x <= 64+line_x || crd_x >= 97 && crd_x <=96+line_y) && crd_y >= 48 && crd_y <= 47+line_y) {
			(crd_x >= 97 && crd_x <= 122) ? crd_x -= 32 : crd_x += 0;
			*x = crd_x;
			*y = crd_y;
			cout << "输入为" << crd_x << "行" << crd_y << "列\n";
			int nbr_chu = 0;
			//遍历整个数组查找相邻位置相同数
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					chupanduan(i, j, array[crd_x - 65][crd_y - 48], array, array_ch, &nbr_chu, line_x, line_y);
				}
			}
			if (nbr_chu > 0) {
				nbr_chu = 0;
				chupanduan(crd_x - 65, crd_y - 48, array[crd_x - 65][crd_y - 48], array, array_ch, &nbr_chu, line_x, line_y);
				if (nbr_chu == 0) {
					cout << "输入的矩阵坐标位置处无连续相同值，请重新输入\n";
					cout << "请以字母+数字形式[例：c2]输入矩阵坐标：";
					continue;
				}
				else {
					compare(crd_x, crd_y, array, array_ch, line_x, line_y);
					cout << "\n查找结果数组\n";
					print_array_ch(line_x, line_y, array_ch);
					break;
				}
			}
			else if (nbr_chu == 0) {
				cout << "游戏结束\n";
			}
		}
		else {
			cout << "输入错误，请重新输入.";
			cin.ignore(65535, '\n');
			cct_getxy(qk_x, qk_y);
			cct_gotoxy(qk_x + 18, qk_y - 1);
			cout << "                        ";
			cct_gotoxy(qk_x+18, qk_y-1);
			continue;
		}
	}
}
void compare(char crd_x, char crd_y,int array[][10],char array_ch[][10],int line_x,int line_y)
{
	int nbr = 0;
	array_ch[crd_x - 65][crd_y - 48] = '*';
	find(array[crd_x - 65][crd_y - 48], array, array_ch, &nbr, line_x, line_y);
	while (nbr != 0) {
		nbr = 0;
		find(array[crd_x - 65][crd_y - 48], array, array_ch, &nbr, line_x, line_y);
	}
	
}
void chupanduan(int x, int y, int sign, int array[][10], char array_ch[][10], int* n, int line_x, int line_y)
{
	if (x == 0 && y == 0) {
		if (array[x + 1][y] == sign) {
			(*n)++;
		}
		if (array[x][y + 1] == sign) {
			(*n)++;
		}
	}
	if (x == 0 && y == line_y - 1) {
		if (array[x + 1][y] == sign) {
			(*n)++;
		}
		if (array[x][y + 1] == sign) {
			(*n)++;
			//array_ch[x][y + 1] == '*';
		}
	}
	if (x == 0 && y >= 1 && y <= line_y - 2) {
		if (array[x + 1][y] == sign) {
			(*n)++;
			//array_ch[x + 1][y] == '*';
		}
		if (array[x][y + 1] == sign) {
			(*n)++;
			//array_ch[x][y + 1] == '*';
		}
		if (array[x][y - 1] == sign) {
			(*n)++;
			//array_ch[x][y - 1] == '*';
		}
	}
	if (x == line_x - 1 && y >= 1 && y <= line_y - 2) {
		if (array[x - 1][y] == sign) {
			(*n)++;
			
		}
		if (array[x][y + 1] == sign) {
			(*n)++;
			//array_ch[x][y + 1] == '*';
		}
		if (array[x][y - 1] == sign) {
			(*n)++;
			//array_ch[x][y - 1] == '*';
		}
	}
	if (x == line_x - 1 && y == 0) {
		if (array[x - 1][y] == sign) {
			(*n)++;
			//array_ch[x - 1][y] == '*';
		}
		if (array[x][y + 1] == sign) {
			(*n)++;
			//array_ch[x][y + 1] == '*';
		}
	}
	if (x == line_x - 1 && y == line_y - 1) {
		if (array[x - 1][y] == sign) {
			(*n)++;
			//array_ch[x - 1][y] == '*';
		}
		if (array[x][y - 1] == sign) {
			(*n)++;
			//array_ch[x][y - 1] == '*';
		}
	}
	if (x >= 1 && x <= line_x - 2 && y == 0) {
		if (array[x - 1][y] == sign) {
			(*n)++;
			//array_ch[x - 1][y] == '*';
		}
		if (array[x + 1][y] == sign) {
			(*n)++;
			//array_ch[x + 1][y] == '*';
		}
		if (array[x][y + 1] == sign) {
			(*n)++;
			//array_ch[x][y + 1] == '*';
		}
	}
	if (x >= 1 && x <= line_x - 2 && y == line_y - 1&&y>1) {
		if (array[x - 1][y] == sign) {
			(*n)++;
			//array_ch[x - 1][y] == '*';
		}
		if (array[x + 1][y] == sign) {
			(*n)++;
			//array_ch[x + 1][y] == '*';
		}
		if (array[x][y - 1] == sign) {
			(*n)++;
			//array_ch[x][y - 1] == '*';
		}
	}
	else if(x>=1&&x<=line_x-2&&y>=1&&y<=line_y-2){
		if (array[x - 1][y] == sign) {
			(*n)++;
			//array_ch[x - 1][y] == '*';
		}
		if (array[x + 1][y] == sign) {
			(*n)++;
			//array_ch[x + 1][y] == '*';
		}
		if (array[x][y - 1] == sign) {
			(*n)++;
			//array_ch[x][y - 1] == '*';
		}
		if (array[x][y + 1] == sign) {
			(*n)++;
			//array_ch[x][y + 1] == '*';
		}
	}
}
void panduan(int x, int y,int sign,int array[][10],char array_ch[][10],int line_x,int line_y)
{
	if (x == 0 && y == 0) {
		if (array[x + 1][y] == sign && array_ch[x + 1][y] != '*') {
			array_ch[x + 1][y] = '*';
			panduan(x + 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y + 1] == sign && array_ch[x][y + 1] != '*') {
			array_ch[x][y + 1] = '*';
			panduan(x, y + 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x == 0 && y == line_y - 1) {
		if (array[x + 1][y] == sign && array_ch[x + 1][y] != '*') {
			array_ch[x + 1][y] = '*';
			panduan(x + 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y - 1] == sign&& array_ch[x][y - 1] != '*') {
			array_ch[x][y - 1] = '*';
			panduan(x, y - 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x == 0 && y >= 1 && y <= line_y - 2) {
		if (array[x + 1][y] == sign&& array_ch[x + 1][y] != '*') {
			array_ch[x + 1][y] = '*';
			panduan(x + 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y + 1] == sign&& array_ch[x][y + 1] != '*') {
			array_ch[x][y + 1] = '*';
			panduan(x, y + 1, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y - 1] == sign&& array_ch[x][y - 1] != '*') {
			array_ch[x][y - 1] = '*';
			panduan(x, y - 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x == line_x - 1 && y >= 1 && y <= line_y - 2) {
		if (array[x - 1][y] == sign && array_ch[x - 1][y] != '*') {
			array_ch[x - 1][y] = '*';
			panduan(x - 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y + 1] == sign && array_ch[x][y + 1] != '*') {
			array_ch[x][y + 1] = '*';
			panduan(x, y + 1, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y - 1] == sign && array_ch[x][y - 1] != '*') {
			array_ch[x][y - 1] = '*';
			panduan(x, y - 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x == line_x - 1 && y == 0) {
		if (array[x - 1][y] == sign&& array_ch[x - 1][y] != '*') {
			array_ch[x - 1][y] = '*';
			panduan(x - 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y + 1] == sign&& array_ch[x][y + 1] != '*') {
			array_ch[x][y + 1] = '*';
			panduan(x - 1, y + 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x == line_x - 1 && y == line_y-1) {
		if (array[x - 1][y] == sign&& array_ch[x - 1][y] != '*') {
			array_ch[x - 1][y] = '*';
			panduan(x - 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y - 1] == sign&& array_ch[x][y - 1] != '*') {
			array_ch[x][y - 1] = '*';
			panduan(x, y - 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x >=1&&x<=line_x-2 && y == 0) {
		if (array[x - 1][y] == sign&& array_ch[x - 1][y] != '*') {
			array_ch[x - 1][y] = '*';
			panduan(x - 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x + 1][y] == sign&& array_ch[x + 1][y] != '*') {
			array_ch[x + 1][y] = '*';
			panduan(x + 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y + 1] == sign&& array_ch[x][y + 1] != '*') {
			array_ch[x][y + 1] = '*';
			panduan(x, y + 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x >= 1 && x <= line_x - 2 && y == line_y-1&&y>1) {
		if (array[x - 1][y] == sign&& array_ch[x - 1][y] != '*') {
			array_ch[x - 1][y] = '*';
			panduan(x - 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x + 1][y] == sign&& array_ch[x + 1][y] != '*') {
			array_ch[x + 1][y] = '*';
			panduan(x + 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y - 1] == sign&& array_ch[x][y - 1] != '*') {
			array_ch[x][y - 1] = '*';
			panduan(x, y - 1, sign, array, array_ch, line_x, line_y);
		}
		else {
			return;
		}
	}
	if (x >= 1 && x <= line_x - 2 && y >= 1 && y <= line_y - 2) {
		if (array[x - 1][y] == sign&& array_ch[x - 1][y] != '*') {
			array_ch[x - 1][y] = '*';
			panduan(x - 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x + 1][y] == sign&& array_ch[x + 1][y] != '*') {
			array_ch[x + 1][y] = '*';
			panduan(x + 1, y, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y - 1] == sign&& array_ch[x][y - 1] != '*') {
			array_ch[x][y - 1] = '*';
			panduan(x, y - 1, sign, array, array_ch,  line_x, line_y);
		}
		else if (array[x][y + 1] == sign&& array_ch[x][y + 1] != '*') {
			array_ch[x][y + 1] = '*';
			panduan(x, y + 1, sign, array, array_ch,  line_x, line_y);
		}
		else {
			return;
		}
	}
}
void find(int sign, int array[][10], char array_ch[][10], int* n, int line_x, int line_y)
{
	for (int x = 0; x < line_x; x++) {
		for (int y = 0; y < line_y; y++) {
			if (x == 0 && y == 0) {
				if (array[x][y]==sign&&array[x + 1][y] == sign&&array_ch[x+1][y]=='*'&&array_ch[x][y]!='*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y + 1] == sign&&array_ch[x][y+1]=='*'&&array_ch[x][y]!='*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
			if (x == 0 && y == line_y - 1) {
				if (array[x][y] == sign && array[x + 1][y] == sign&&array_ch[x+1][y]=='*'&&array_ch[x][y]!='*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y - 1] == sign && array_ch[x][y - 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
			if (x == 0 && y >= 1 && y <= line_y - 2) {
				if (array[x][y] == sign && array[x + 1][y] == sign && array_ch[x+1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y + 1] == sign && array_ch[x][y + 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y - 1] == sign && array_ch[x][y - 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y]= '*';
				}
			}
			if (x == line_x - 1 && y >= 1 && y <= line_y - 2) {
				if (array[x][y] == sign && array[x - 1][y] == sign && array_ch[x-1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y + 1] == sign && array_ch[x][y + 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y - 1] == sign && array_ch[x][y - 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
			if (x == line_x - 1 && y == 0) {
				if (array[x][y] == sign && array[x - 1][y] == sign && array_ch[x-1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y + 1] == sign && array_ch[x][y + 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
			if (x == line_x - 1 && y == line_y - 1) {
				if (array[x][y] == sign && array[x - 1][y] == sign && array_ch[x-1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y - 1] == sign && array_ch[x][y - 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
			if (x >= 1 && x <= line_x - 2 && y == 0) {
				if (array[x][y] == sign && array[x - 1][y] == sign && array_ch[x-1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x ][y] = '*';
				}
				if (array[x][y] == sign && array[x + 1][y] == sign && array_ch[x + 1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y + 1] == sign && array_ch[x][y + 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
			if (x >= 1 && x <= line_x - 2 && y == line_y - 1&&y>1) {
				if (array[x][y] == sign && array[x - 1][y] == sign && array_ch[x-1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x + 1][y] == sign && array_ch[x+1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y - 1] == sign && array_ch[x][y - 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
			if (x >= 1 && x <= line_x - 2 && y >= 1 && y <= line_y - 2) {
				if (array[x][y] == sign && array[x - 1][y] == sign && array_ch[x - 1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x + 1][y] == sign && array_ch[x + 1][y] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y - 1] == sign && array_ch[x][y - 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
				if (array[x][y] == sign && array[x][y + 1] == sign && array_ch[x][y + 1] == '*' && array_ch[x][y] != '*') {
					(*n)++;
					array_ch[x][y] = '*';
				}
			}
		}
	}
}
void array_draw(int array[][10],char array_ch[][10], int line_x, int line_y)
{
	cout << "\n";
	cout << "当前数组(不同色标识)\n";
	cout << "  | ";
	for (int i = 0; i < line_y; i++) {
		cout << ' ' << i << ' ';
	}
	cout << endl;
	cout << "--+-";
	cout << setw((double)line_y*3.0) << setfill('-') << '-';
	cout << endl;
	for (int i = 0; i < line_x;i++) {
		cout << (char)(i + 65) << " | ";
		for (int j = 0; j < line_y; j++) {
			cout << ' ';
			if (array_ch[i][j] == '*') {
				cct_setcolor(highlight_yellow, black);
			}
			cout<< array[i][j] ;
			if (array_ch[i][j] == '*') {
				cct_setcolor(black, white);
			}
			cout<< ' ';
		}
		cout << endl;
	}

}
void print_array(int line_x,int line_y,int array[][10])
{
	cout << "  | ";
	for (int i = 0; i < line_y; i++) {
		cout << ' ' << i << ' ';
	}
	cout << endl;
	cout << "--+-";
	cout << setw((double)line_y * 3.0) << setfill('-') << '-';
	cout << endl;
	for (int i = 0; i < line_x; i++) {
		cout << (char)(i + 65) << " | ";
		for (int j = 0; j < line_y; j++) {
			cout << ' ' << array[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}
void print_array_ch(int line_x, int line_y, char array_ch[][10])
{
	cout << "  | ";
	for (int i = 0; i < line_y; i++) {
		cout << ' ' << i << ' ';
	}
	cout << endl;
	cout << "--+-";
	cout << setw((double)line_y * 3.0) << setfill('-') << '-';
	cout << endl;
	for (int i = 0; i < line_x; i++) {
		cout << (char)(i + 65) << " | ";
		for (int j = 0; j < line_y; j++) {
			cout << ' ' << array_ch[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}
void guibing(char crd_x,char crd_y,int line_x,int line_y,int array[][10],char array_ch[][10],int *max)
{
	for (int i = 0; i < line_x; i++) {
		for (int j = 0; j < line_y; j++) {
			if (array_ch[i][j] == '*'&&!(i== crd_x - 65&&j== crd_y - 48)) {
				array[i][j] = 0;
			}
		}
	}
	array[crd_x - 65][crd_y - 48] += 1;
	//array_ch[crd_x - 65][crd_y - 48] = '0';
	if(array[crd_x - 65][crd_y - 48]>*max)
	*max= array[crd_x - 65][crd_y - 48];
}
void falldown(char crd_x,char crd_y,int line_x, int line_y, int array[][10],char array_ch[][10])
{
	int z = 0;
	int tank[line_x_array] = { 0,0,0,0,0,0,0,0 };
	for (int j = 0, z = 0; j < line_y; j++, z = 0) {
		for (int i = line_x - 1; i >= 0; i--) {
			if (array[i][j] != 0) {
				tank[z++] = array[i][j];//倒着记录
				array[i][j] = 0;
			}
			if (array[i][j] == 0) {
				array_ch[i][j] = '0';
			}
			array_ch[crd_x - 65][crd_y - 48]='0';
		}
		for (int k = 0,l=line_x-1; k < z; k++) {
			if (tank[k] != 0) {
				array[l--][j] = tank[k];
				tank[k] = 0;//容器归零
			}
		}
		for (int i = 0; i < line_x;i++) {
			if (array[i][j]== 0) {
				array_ch[i][j] = '*';
			}
		}
		if (array[crd_x - 65][crd_y - 48] == 0) {
			array_ch[crd_x - 65][crd_y - 48] = '*';
		}
	}
}
int asr_make()
{
	int ch;
	ch = _getche();
	return ch;
}
int whether_goal(int line_x,int line_y,int goal,int array[][10])
{
	int cnt = 0;
	for (int i = 0; i < line_x; i++) {
		for (int j = 0; j < line_y; j++) {
			if (array[i][j] == goal) {
				cnt++;
			}
		}
	}
	if (cnt > 0) {
		return 1;
	}
	else {
		return 0;
	}
}
void again(char crd_x, char crd_y, int line_x, int line_y, int array[][10], char array_ch[][10],int* goal,int max,int score,int *score_all)
{
	while (1) {
		cout << "\n当前数组：\n";
		print_array(line_x, line_y, array);//打印当前数组
		shuru(&crd_x, &crd_y, array, array_ch, line_x, line_y);
		int nbr = 0;
		panduan(crd_x - 65, crd_y - 48, array[crd_x - 65][crd_y - 48], array, array_ch, line_x, line_y);
		array_draw(array, array_ch, line_x, line_y);
		cout << "请确认是否把相邻的相同值合并到" << crd_x << crd_y << "中(Y / N / Q)：";
		int qk_x, qk_y;
		cct_getxy(qk_x, qk_y);
		int asr = 10;
		while (!(asr == 121 || asr == 78 || asr == 81 || asr == 89 || asr == 110 || asr == 113)) {
			asr = asr_make();
			cct_gotoxy(qk_x, qk_y);
		}
		if (asr == 'y' || asr == 'Y') {
			cout << "\n相同值归并后的数组(不同色标识)：\n";
			guibing(crd_x, crd_y, line_x, line_y, array, array_ch, &max);
			array_draw(array, array_ch, line_x, line_y);
			score = my_score(crd_x, crd_y, line_x, line_y, array, array_ch,4+48);////////此处把参数order赋为4了
			*score_all += score;
			cout << "\n本次得分：" << score << ' ' << "总得分：" << *score_all << ' ' << "合成目标：" << *goal << endl;
			char r_falldown;
			cout << "按回车键进行数组下落除0操作...\n";
			while ((r_falldown = _getch()) != '\r') {
				r_falldown = _getch();
			}
			cout << "除0后的数组(不同色标识)：\n";
			falldown(crd_x, crd_y, line_x, line_y, array, array_ch);
			array_draw(array, array_ch, line_x, line_y);
			cout << "按回车键进行新值填充...\n";
			while ((r_falldown = _getch()) != '\r') {
				r_falldown = _getch();
			}
			cout << "新值填充后的数组(不同色标识）...\n";
			rand_make(line_x, line_y, array, max);
			array_draw(array, array_ch, line_x, line_y);
			if ((whether_goal(line_x, line_y, *goal, array)) == 1) {
				cout << "本次合成结束，按回车键继续新一次的合成...\n";
				cct_getxy(qk_x, qk_y);
				cct_showstr(qk_x, qk_y, "已经合成到", COLOR_HYELLOW, COLOR_RED, 1, -1);
				cct_setcolor(COLOR_HYELLOW, COLOR_RED);
				cout << *goal;
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
				cout << "\n按回车键继续向更高目标进发...\n";
				while ((r_falldown = _getch()) != '\r') {
					r_falldown = _getch();
				}
				(*goal)++;
				for (int i = 0; i < line_x; i++) {
					for (int j = 0; j < line_y; j++) {
						array_ch[i][j] = '0';
					}
				}
				continue;
			}
			if ((whether_goal(line_x, line_y, *goal, array)) == 0) {
				cout << "本次合成结束，按回车键继续新一次的合成...\n";
				while ((r_falldown = _getch()) != '\r') {
					r_falldown = _getch();
				}
				for (int i = 0; i < line_x; i++) {
					for (int j = 0; j < line_y; j++) {
						array_ch[i][j] = '0';
					}
				}
			}
		}
		if (asr == 'n' || asr == 'N') {
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array_ch[i][j] = '0';
				}
			}
			continue;
		}
		if (asr == 'q' || asr == 'Q') {
			my_end();
			cct_cls();
			break;
		}
	}
}



