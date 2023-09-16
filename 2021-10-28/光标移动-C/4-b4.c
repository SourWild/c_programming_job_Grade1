/* 2151928 ��ܷ�� ��12 */
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�

/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
			char ch     ��Ҫ��ӡ���ַ�
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
	printf("***********************************************************************\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("***********************************************************************\n");

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}
/*8888888888888�Լ�д�ĺ���88888888888888888*/
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
				printf("\n\n\n\n\n��Ϸ���������س������ز˵�.");
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
				printf("\n\n\n\n\n��Ϸ���������س������ز˵�.");
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

/*8888888888888�Լ�д�ĺ���88888888888888888*/
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
				printf("\n\n\n\n\n��Ϸ���������س������ز˵�.");
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
				printf("\n\n\n\n\n��Ϸ���������س������ز˵�.");
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
	printf("1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)\n");
	printf("2.��I��J��K��L��������������(��Сд���ɣ��߽����)\n");
	printf("3.�ü�ͷ�������������ң��߽�ֹͣ\n");
	printf("4.�ü�ͷ�������������ң��߽����\n");
	printf("0.�˳�\n");
	printf("[��ѡ��0-4] ");
	k = _getch();
	k0 = k - 48;
	if (k0 >= 0 && k0 <= 4) {
		printf("%c", k);
		return k0;
	}
	else {
		printf("%c", k);
		return k0;
	}
}
/* -- �������ӵ����ɺ������Է��ڴ˴� --*/

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
***************************************************************************/
int main()
{
	/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
	srand((unsigned int)(time(0)));
	int x, y, c;
	x = 35, y = 9;
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��
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
	return 0;
}