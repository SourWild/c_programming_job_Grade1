/* 2151928 唐芊竹 信12 */
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X = 69;	//定义*组成的边框的宽度
const int MAX_Y = 17;	//定义*组成的边框的高度

/***************************************************************************
  函数名称：
  功    能：完成与system("cls")一样的功能，但效率高
  输入参数：
  返 回 值：
  说    明：清除整个屏幕缓冲区，不仅仅是可见窗口区域(使用当前颜色)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* 取当前缓冲区信息 */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* 填充字符 */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* 填充属性 */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* 光标回到(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  函数名称：gotoxy
  功    能：将光标移动到指定位置
  输入参数：HANDLE hout ：输出设备句柄
			int X       ：指定位置的x坐标
			int Y       ：指定位置的y坐标
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  函数名称：showch
  功    能：在指定位置处打印一个指定的字符
  输入参数：HANDLE hout ：输出设备句柄
			int X       ：指定位置的x坐标
			int Y       ：指定位置的y坐标
			char ch     ：要打印的字符
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  函数名称：init_border
  功    能：显示初始的边框及随机字符
  输入参数：HANDLE hout：输出设备句柄
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//光标移回左上角(0,0)
	cout << "***********************************************************************" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "***********************************************************************" << endl;

	/* 随机显示20个大写字母，字母的值、XY坐标都随机显示
	   rand()函数的功能：随机生成一个在 0-32767 之间的整数
	   思考：在什么情况下，下面这个循环执行生成后，你看到的实际字母个数不足20个？ */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}
/*8888888888888自己写的函数88888888888888888*/
void move_by_ijkl(const HANDLE hout, int c, int x, int y)
{
	int a;
	if (c == 1) {
		while (1) {
			a = _getch();
			if (a == 105 || a == 73) {   //i/I
				if (y > 1) {
					y--;
					gotoxy(hout, x, y);
					continue;
				}
				if (y == 1) {
					continue;
				}
			}
			if (a == 107 || a == 75) {   //k/K
				if (y < 17) {
					y++;
					gotoxy(hout, x, y);
					continue;
				}
				if (y == 17) {
					continue;
				}
			}
			if (a == 108 || a == 76) {   //l/L
				if (x < 69) {
					x++;
					gotoxy(hout, x, y);
					continue;
				}
				if (x == 69) {
					continue;
				}

			}
			if (a == 106 || a == 74) {   //j/J
				if (x > 1) {
					x--;
					gotoxy(hout, x, y);
					continue;
				}
				if (x == 1) {
					continue;
				}

			}
			if (a == 113 || a == 81) {   //q/Q
				gotoxy(hout, 0, 18);
				cout << "\n\n\n\n\n游戏结束，按回车键返回菜单.";
				a = _getch();
				if (a == 13) {
					cls(hout);
					break;
				}
				else {
					while (a != 13) {
						a = _getch();
						continue;
					}
					if (a == 13) {
						cls(hout);
						break;
					}
				}
			}

			if (a == 32) {
				showch(hout, x, y, ' ');
				gotoxy(hout, x, y);
				continue;             //xin zeng
			}
			else {
				continue;
			}
		}
	}
	if (c == 2) {
		while (1) {
			a = _getch();
			if (a == 105 || a == 73) {   //i/I
				if (y > 1) {
					y--;
					gotoxy(hout, x, y);
					continue;
				}
				if (y == 1) {
					y = 17;
					gotoxy(hout, x, 17);
					continue;
				}
			}
			if (a == 107 || a == 75) {   //k/K
				if (y < 17) {
					y++;
					gotoxy(hout, x, y);
					continue;
				}
				if (y == 17) {
					y = 1;
					gotoxy(hout, x, 1);
					continue;
				}
			}
			if (a == 108 || a == 76) {   //l/L
				if (x < 69) {
					x++;
					gotoxy(hout, x, y);
					continue;
				}
				if (x == 69) {
					x = 1;
					gotoxy(hout, 1, y);
					continue;
				}
			}
			if (a == 106 || a == 74) {   //j/J
				if (x > 1) {
					x--;
					gotoxy(hout, x, y);
					continue;
				}
				if (x == 1) {
					x = 69;
					gotoxy(hout, 69, y);
					continue;
				}
			}
			if (a == 113 || a == 81) {   //q/Q
				gotoxy(hout, 0, 18);
				cout << "\n\n\n\n\n游戏结束，按回车键返回菜单.";
				a = _getch();
				if (a == 13) {
					cls(hout);
					break;
				}
				else {
					while (a != 13) {
						a = _getch();
						continue;
					}
					if (a == 13) {
						cls(hout);
						break;
					}
				}
			}
			if (a == 32) {
				showch(hout, x, y, ' ');
				gotoxy(hout, x, y);
				continue;
			}
			else {
				continue;
			}
		}
	}
}

/*8888888888888自己写的函数88888888888888888*/
void move_by_arrow(const HANDLE hout, int c, int x, int y)
{
	char a;
	unsigned char a1;

	if (c == 3) {
		while (1) {
			a1 = _getch();
			if (a1 == 224) {
				a = _getch();
				if (a == 72) {   //i/I
					if (y > 1) {
						y--;
						gotoxy(hout, x, y);
					}
					continue;
				}
				if (a == 80) {   //k/K
					if (y < 17) {
						y++;
						gotoxy(hout, x, y);
					}
					continue;
				}
				if (a == 77) {   //l/L
					if (x < 69) {
						x++;
						gotoxy(hout, x, y);
					}
					continue;
				}
				if (a == 75) {   //j/J
					if (x > 1) {
						x--;
						gotoxy(hout, x, y);
					}
					continue;
				}
				else {
					continue;
				}
			}
			if (a1 == 113 || a1 == 81) {   //q/Q
				gotoxy(hout, 0, 18);
				cout << "\n\n\n\n\n游戏结束，按回车键返回菜单.";
				a = _getch();
				if (a == 13) {
					cls(hout);
					break;
				}
				else {
					while (a != 13) {
						a = _getch();
						continue;
					}
					if (a == 13) {
						cls(hout);
						break;
					}
				}
			}
			if (a1 == 32) {
				showch(hout, x, y, ' ');
				gotoxy(hout, x, y);
				continue;
			}
			else {
				continue;
			}
		}
	}
	if (c == 4) {
		while (1) {
			a1 = _getch();
			if (a1 == 224) {
				a = _getch();
				if (a == 72) {   //i/I
					if (y > 1) {
						y--;
						gotoxy(hout, x, y);
						continue;
					}
					if (y == 1) {
						y = 17;
						gotoxy(hout, x, 17);
						continue;
					}
				}
				if (a == 80) {   //k/K
					if (y < 17) {
						y++;
						gotoxy(hout, x, y);
						continue;
					}
					if (y == 17) {
						y = 1;
						gotoxy(hout, x, 1);
						continue;
					}
				}
				if (a == 77) {   //l/L
					if (x < 69) {
						x++;
						gotoxy(hout, x, y);
						continue;
					}
					if (x == 69) {
						x = 1;
						gotoxy(hout, 1, y);
						continue;
					}
				}
				if (a == 75) {   //j/J
					if (x > 1) {
						x--;
						gotoxy(hout, x, y);
						continue;
					}
					if (x == 1) {
						x = 69;
						gotoxy(hout, 69, y);
						continue;
					}
				}
				else {
					continue;
				}
			}
			if (a1 == 113 || a1 == 81) {   //q/Q
				gotoxy(hout, 0, 18);
				cout << "\n\n\n\n\n游戏结束，按回车键返回菜单.";
				a = _getch();
				if (a == 13) {
					cls(hout);
					break;
				}
				else {
					while (a != 13) {
						a = _getch();
						continue;
					}
					if (a == 13) {
						cls(hout);
						break;
					}
				}
			}
			if (a1 == 32) {
				showch(hout, x, y, ' ');
				gotoxy(hout, x, y);
			}
			else {
				continue;
			}
		}
	}
}

int menu()
{
	char k;
	int  k0;
	cout << "1.用I、J、K、L键控制上下左右(大小写均可，边界停止)\n";
	cout << "2.用I、J、K、L键控制上下左右(大小写均可，边界回绕)\n";
	cout << "3.用箭头键控制上下左右，边界停止\n";
	cout << "4.用箭头键控制上下左右，边界回绕\n";
	cout << "0.退出\n";
	cout << "[请选择0-4] ";
	k = _getch();
	k0 = (int)k - 48;
	if (k0 >= 0 && k0 <= 4) {
		cout << k;
		return k0;
	}
	else {
		cout << k;
		return k0;
	}
}
/* -- 按需增加的若干函数可以放在此处 --*/

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数仅用于初始演示，可以按题目要求全部推翻重写
***************************************************************************/
int main()
{
	/* 生成伪随机数的种子，只需在程序开始时执行一次即可 */
	srand((unsigned int)(time(0)));
	int x, y, c;
	x = 35, y = 9;
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄
	while (1) {
		c = menu();
		if (c == 0) {
			break;
		}
		if (c == 1) {
			cls(hout);
			init_border(hout);
			gotoxy(hout, x, y);
			move_by_ijkl(hout, c, x, y);
		}
		if (c == 2) {
			cls(hout);
			init_border(hout);
			gotoxy(hout, x, y);
			move_by_ijkl(hout, c, x, y);
		}
		if (c == 3) {
			cls(hout);
			init_border(hout);
			gotoxy(hout, x, y);
			move_by_arrow(hout, c, x, y);
		}
		if (c == 4) {
			cls(hout);
			init_border(hout);
			gotoxy(hout, x, y);
			move_by_arrow(hout, c, x, y);
		}
		else {
			cls(hout);
			continue;
		}

	}
	//gotoxy(hout, 0, 23);
	//cout << "游戏结束，按回车键返回菜单." << endl;

	//暂停(此处作业要求是只能按回车退出，目前的getchar示例，是允许按任意键+回车退出，且任意键会出现在屏幕上)

	return 0;
}