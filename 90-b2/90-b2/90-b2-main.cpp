/* 2151928 ��ܷ�� ��12 */
#include <iostream>
#include "90-b2.h"
#include "cmd_console_tools.h"
#include <time.h>
#include <cstdlib>
#include<conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;
#define line_x_array 8
#define line_y_array 10
int menu()
{
	int order;
	cout << "---------------------------------------"<<endl;
	cout << "1.�������ҳ��ɺϳ����ʶ���ǵݹ飩" << endl;
	cout << "2.�������ҳ��ɺϳ����ʶ���ݹ飩" << endl;
	cout << "3.���������һ�κϳɣ��ֲ�����ʾ��" << endl;
	cout << "4.�����������棨�ֲ�����ʾ��" << endl;
	cout << "5.αͼ�ν�����ʾ��ʼ���飨�޷ָ��ߣ�" << endl;
	cout << "6.αͼ�ν�����ʾ��ʼ���飨�зָ��ߣ�" << endl;
	cout << "7.αͼ�ν������ü�ͷ��/���ѡ��ǰɫ��" << endl;
	cout << "8.αͼ�ν������һ�κϳɣ��ֲ��裩" << endl;
	cout << "9.αͼ�ν���������(֧�����)" << endl;
	cout << "---------------------------------------" << endl;
	cout << "0.�˳�" << endl;
	cout << "---------------------------------------" << endl;
	cout << "[��ѡ��:]";

	do {
		order = _getch();
	} while (!(order >= 48 && order <= 57||order>=65&&order<=67||order>=97&&order<=99));
	if(order-48!=0)
	cct_cls();
	return order;
}
int main()
{
	int order;
	int array[line_x_array][line_y_array];
	char array_ch[line_x_array][line_y_array];
	char crd_x = '0', crd_y = '0';
	int line_x, line_y;
	int goal;
	int base_x = 4, base_y = 3;
	srand((unsigned)time(NULL));
	while (1) {
		
		order = menu();
		if (order - 48 == 0) {
			cout << "\n\n\n\n\n�밴���������...\n";
			char char_end;
			while (char_end = _getch()) {
				return 0;
			}
		}
		while (1) {
			cout << "����������(5-8)��\n";
			cin >> line_x;
			if (cin.good() && line_x >= 5 && line_x <= 8) {
				break;
			}
			else {
				cin.clear();
				cin.ignore(65535, '\n');
			}
		}
		while (1) {
			cout << "����������(5-10)��\n";
			cin >> line_y;
			if (cin.good() && line_y >= 5 && line_y <= 10) {
				break;
			}
			else {
				cin.clear();
				cin.ignore(65535, '\n');

			}
		}
		///1111111111111111111
		
		if (order - 48 == 1) {
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array[i][j] = 0;
				}
			}
			rand_make(line_x, line_y, array, 3);//��������
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array_ch[i][j] = '0';
				}
			}
			cout << "\n��ǰ���飺\n";
			print_array(line_x, line_y, array);//��ӡ��ǰ����
			shuru(&crd_x, &crd_y, array, array_ch, line_x, line_y);
			/**/
			int nbr = 0;
			array_ch[crd_x - 65][crd_y - 48] = '*';
			find(array[crd_x - 65][crd_y - 48], array, array_ch, &nbr, line_x, line_y);
			while (nbr != 0) {
				nbr = 0;
				find(array[crd_x - 65][crd_y - 48], array, array_ch, &nbr, line_x, line_y);
			}
			array_draw(array, array_ch, line_x, line_y);
			/**/
			my_end();
			continue;
		}
		if (order - 48 == 2) {
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array[i][j] = 0;
				}
			}
			rand_make(line_x, line_y, array, 3);//��������
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array_ch[i][j] = '0';
				}
			}
			cout << "\n��ǰ���飺\n";
			print_array(line_x, line_y, array);//��ӡ��ǰ����
			shuru(&crd_x, &crd_y, array, array_ch, line_x, line_y);
			int nbr = 0;
			panduan(crd_x - 65, crd_y - 48, array[crd_x - 65][crd_y - 48], array, array_ch,  line_x, line_y);
			array_draw(array, array_ch, line_x, line_y);
			my_end();
			continue;
		}
		if (order - 48 == 3) {
			int score = 0, score_all = 0;
			int max = 3;
			while (1) {
				cout << "������ϳ�Ŀ��(5-20)��\n";
				cin >> goal;
				if (cin.good() && goal >= 5 && goal <= 20) {
					break;
				}
				else {
					cin.clear();
					cin.ignore(65535, '\n');

				}
			}
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array[i][j] = 0;
				}
			}
			rand_make(line_x, line_y, array, 3);//��������
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array_ch[i][j] = '0';
				}
			}
			cout << "\n��ǰ���飺\n";
			print_array(line_x, line_y, array);//��ӡ��ǰ����
			shuru(&crd_x, &crd_y, array, array_ch, line_x, line_y);
			int nbr = 0;
			panduan(crd_x - 65, crd_y - 48, array[crd_x - 65][crd_y - 48], array, array_ch, line_x, line_y);
			//find_hanoi(array[crd_x - 65][crd_y - 48], array, array_ch, &nbr, line_x, line_y);
			array_draw(array, array_ch, line_x, line_y);
			cout << "��ȷ���Ƿ�����ڵ���ֵͬ�ϲ���" << crd_x << crd_y << "��(Y / N / Q)��";
			int qk_x, qk_y;
			cct_getxy(qk_x, qk_y);
			int asr = 10;
			while (!(asr == 121 || asr == 78 || asr == 81 || asr == 89 || asr == 110 || asr == 113)) {
				asr = asr_make();
				cct_gotoxy(qk_x, qk_y);
			}
			if (asr == 'y' || asr == 'Y') {
				cout << "\n��ֵͬ�鲢�������(��ͬɫ��ʶ)��\n";
				guibing(crd_x, crd_y, line_x, line_y, array, array_ch, &max);
				array_draw(array, array_ch, line_x, line_y);
				score = my_score(crd_x, crd_y, line_x, line_y, array, array_ch,order);
				score_all += score;
				cout << "\n���ε÷֣�" << score << ' ' << "�ܵ÷֣�" << score_all << ' ' << "�ϳ�Ŀ�꣺" << goal << endl;
				char r_falldown;
				cout << "���س����������������0����...\n";
				while ((r_falldown = _getch()) != '\r') {
					r_falldown = _getch();
				}
				cout << "��0�������(��ͬɫ��ʶ)��\n";
				falldown(crd_x, crd_y, line_x, line_y, array, array_ch);
				array_draw(array, array_ch, line_x, line_y);
				my_end();
				continue;
			}
			if (asr == 'n' || asr == 'N') {
				my_end();
				cct_cls();
				continue;
			}
			if (asr == 'q' || asr == 'Q') {
				my_end();
				cct_cls();
				continue;
			}
		}
		if (order - 48 == 4) {
			int score = 0, score_all = 0;
			int max = 3;
			while (1) {
				cout << "������ϳ�Ŀ��(5-20)��\n";
				cin >> goal;
				if (cin.good() && goal >= 5 && goal <= 20) {
					break;
				}
				else {
					cin.clear();
					cin.ignore(65535, '\n');
				}
			}
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array[i][j] = 0;
				}
			}
			rand_make(line_x, line_y, array, max);//��������
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array_ch[i][j] = '0';
				}
			}
			again(crd_x, crd_y, line_x, line_y, array, array_ch, &goal, max, score, &score_all);
		}
		if (order - 48 == 5) {

			cct_cls();
			cout << "��Ļ��ǰ����Ϊ��" << 8 + line_x * 3 << "��" << 7 + 6 * line_y << "��\n";
			cct_setconsoleborder(line_y * 6 + 7, 8 + line_x * 3, 7 + 6 * line_y, 8 + line_x * 3);
			cout << "��Ļ��ǰ����Ϊ��" << 8 + line_x * 3 << "��" << line_y * 6 + 7 << "��\n";
			cout << "    ";
			for (int i = 0; i < line_y; i++) {
				cout << "  ";
				cout << i;
				cout << "   ";
			}
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cout << "\n  ";
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "��";
			for (int i = 0; i < line_y; i++) {
				cout << "������";
			}
			cout << "��" << endl;
			for (int i = 0; i < line_x; i++) {

				for (int z = 0; z < 3; z++) {
					if (z == 1) {
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << (char)(i + 65) << " ";
					}
					else {
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "  ";
					}
					cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
					cout << "��";
					for (int j = 0; j < line_y; j++) {
						cout << "      ";
					}
					cout << "��" << endl;
				}
				Sleep(50);
			}
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cout << "  ";
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "��";
			for (int i = 0; i < line_y; i++) {
				cout << "������";
			}
			cout << "��" << endl;

			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array[i][j] = 0;
				}
			}
			rand_make(line_x, line_y, array, 3);//��������
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array_ch[i][j] = '0';
				}
			}
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					//��ӡÿһ�����ֶ�Ӧ��С����
					print_square(i, j, base_x, base_y, array, order);
				}
			}
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cout << endl;
			my_end();
			continue;
		}
		if (order - 48 == 6 || order - 48 == 7 || order - 48 == 8|| order - 48 == 9) {
			int score = 0, score_all = 0;
			int max = 3;
			if (order - 48 == 9) {
				while (1) {
					cout << "������ϳ�Ŀ��(5-20)��\n";
					cin >> goal;
					if (cin.good() && goal >= 5 && goal <= 20) {
						break;
					}
					else {
						cin.clear();
						cin.ignore(65535, '\n');
					}
				}
			}
			cct_cls();
			cout << "��Ļ��ǰ����Ϊ��" << 8 + line_x * 4 << "��" << 7 + 8 * line_y << "��\n";
			cct_setconsoleborder(line_y * 8 + 7, 8 + line_x * 4, 7 + 8 * line_y, 8 + line_x * 4);
			cout << "��Ļ��ǰ����Ϊ��" << 8 + line_x * 4 << "��" << line_y * 6 + 8 << "��\n";

			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array[i][j] = 0;
				}
			}
			rand_make(line_x, line_y, array, max);//��������
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					array_ch[i][j] = '0';
				}
			}

			cout << "    ";
			for (int i = 0; i < line_y; i++) {
				cout << "  ";
				cout << i;
				cout << "     ";
			}
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cout << "\n  ";
			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
			cout << "��";
			for (int i = 0; i < line_y; i++) {
				cout << "������";
				if (i != line_y - 1) {
					cout << "��";
				}
			}
			cout << "��" << endl;
			for (int i = 0; i < line_x; i++) {
				for (int z = 0; z < 4; z++) {
					if (z == 1) {
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << (char)(i + 65) << " ";
					}
					else {
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "  ";
					}
					cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
					if (z == 3) {
						if (i != line_x - 1) {
							cout << "��";
							for (int j = 0; j < line_y; j++) {
								if (j == line_y - 1) {
									cout << "������";
								}
								else {
									cout << "��������";
								}
							}
							cout << "��" << endl;
						}
						else {
							cout << "��";
							for (int j = 0; j < line_y; j++) {
								if (j == line_y - 1) {
									cout << "������";
								}
								else {
									cout << "��������";
								}
							}
							cout << "��" << endl;
						}
					}
					else {
						for (int j = 0; j < line_y; j++) {
							cout << "��";
							cout << "      ";
						}
						cout << "��" << endl;
					}

				}
				Sleep(200);
			}
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			for (int i = 0; i < line_x; i++) {
				for (int j = 0; j < line_y; j++) {
					//��ӡÿһ�����ֶ�Ӧ��С����
					print_square(i, j, base_x, base_y, array, order);
				}
			}
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cout << endl;
			if (order - 48 == 7) {
				int p = 0, q = 0;
				HLIGHT_square(p, q, base_x, base_y, array);
				cct_gotoxy(0, 3 + line_x * 4);
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
				cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���";
				cct_enable_mouse();//
				int MX, MY, MAction, keycode1, keycode2;
				while (1) {
					cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
					cct_gotoxy(0, 3 + line_x * 4);
					cct_setcolor(COLOR_BLACK, COLOR_WHITE);
					cout << "                                                ";
					cct_gotoxy(0, 3 + line_x * 4);
					if (keycode1 == 224 && keycode2 == 72) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (q == 0) {
							q = line_x - 1;
						}
						else {
							q--;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 224 && keycode2 == 80) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (q == line_x - 1) {
							q = 0;
						}
						else {
							q++;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 224 && keycode2 == 75) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (p == 0) {
							p = line_y - 1;
						}
						else {
							p--;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 224 && keycode2 == 77) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (p == line_y - 1) {
							p = 0;
						}
						else {
							p++;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 13) {
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cct_gotoxy(0, 3 + line_x * 4);
						cout << "                              ";
						cct_gotoxy(0, 3 + line_x * 4);
						cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
						break;
					}
					else {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "                              ";
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "[��ǰ���] " << (char)(q + 65) << "��" << p << "��";
							//cout << "[��ǰ���] " << MX << "��" << MY << "��";
							HLIGHT_square(p, q, base_x, base_y, array);
						}
						if (xy_judge(MX, MY, line_x, line_y, p, q) == 0) {
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "[��ǰ���] λ�÷Ƿ�";
							//CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
							continue;
						}
						if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
							if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
								cct_setcolor(COLOR_BLACK, COLOR_WHITE);
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "                              ";
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
								break;
							}
							else {
								continue;
							}
						}
					}
				}
			}
			if (order - 48 == 8) {
				int p = 0, q = 0;
				int xuanzhong = 0;
				goal = 5;
				HLIGHT_square(p, q, base_x, base_y, array);
				cct_gotoxy(0, 3 + line_x * 4);
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
				cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���";
				cct_enable_mouse();//
				int MX, MY, MAction, keycode1, keycode2;
				while (1) {
					xuanzhong = 0;
					/*char�����ʼ��*/
					for (int i = 0; i < line_x; i++) {
						for (int j = 0; j < line_y; j++) {
							array_ch[i][j] = '0';
						}
					}
					cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
					cct_gotoxy(0, 3 + line_x * 4);
					cct_setcolor(COLOR_BLACK, COLOR_WHITE);
					cout << "                                                           ";
					cct_gotoxy(0, 3 + line_x * 4);
					if (keycode1 == 224 && keycode2 == 72) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (q == 0) {
							q = line_x - 1;
						}
						else {
							q--;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 224 && keycode2 == 80) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (q == line_x - 1) {
							q = 0;
						}
						else {
							q++;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 224 && keycode2 == 75) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (p == 0) {
							p = line_y - 1;
						}
						else {
							p--;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 224 && keycode2 == 77) {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (p == line_y - 1) {
							p = 0;
						}
						else {
							p++;
						}
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
						HLIGHT_square(p, q, base_x, base_y, array);
					}
					else if (keycode1 == 13) {
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cct_gotoxy(0, 3 + line_x * 4);
						cout << "                              ";
						cct_gotoxy(0, 3 + line_x * 4);
						cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
						xuanzhong = 1;
					}
					else {
						CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
						if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "                              ";
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "[��ǰ���] " << (char)(q + 65) << "��" << p << "��";
							//cout << "[��ǰ���] " << MX << "��" << MY << "��";
							HLIGHT_square(p, q, base_x, base_y, array);
						}
						if (xy_judge(MX, MY, line_x, line_y, p, q) == 0) {
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "[��ǰ���] λ�÷Ƿ�";
							//CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
							continue;
						}
						if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
							if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
								cct_setcolor(COLOR_BLACK, COLOR_WHITE);
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "                              ";
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
								xuanzhong = 1;
							}
							else {
								xuanzhong = 0;
								continue;
							}
						}
					}
					if (xuanzhong == 1) {
						int old_p = p, old_q = q;
						int nbr = 0;
						chupanduan(q, p, array[q][p], array, array_ch, &nbr, line_x, line_y);
						array_ch[q][p] = '*';
						if (nbr == 0) {//��������û����ֵͬ
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "                                           ";
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_YELLOW);
							cout << "��Χ����ֵͬ,";
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cout << "��ͷ�� / ����ƶ����س��� / �������ѡ��Q / �����Ҽ�����";
							while (1) { 
								cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
								xy_judge(MX, MY, line_x, line_y, p, q);
								if ((xy_judge(MX, MY, line_x, line_y, p, q)) == 0) {
									break;
								}
								if (!(old_p == p && old_q == q)) {
									break;
								}
							}
							continue;
						}
						if (nbr != 0) {//������������ֵͬ
							int md = 0;
							array_ch[q][p] = '*';
							find(array[q][p], array, array_ch, &md, line_x, line_y);
							while (md != 0) {
								md = 0;
								find(array[q][p], array, array_ch, &md, line_x, line_y);
							}
							for (int i = 0; i < line_x; i++) {
								for (int j = 0; j < line_y; j++) {
									if (array_ch[i][j] == '*') {
										HLIGHT_square(j, i, base_x, base_y, array);
									}
								}
							}
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);

							cout << "��ͷ�� / ����ƶ�ȡ����ǰѡ�񣬻س��� / ��������ϳ�";
							while (1) {
								cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
								/*��������*/
								if (keycode1 == 224 && keycode2 == 72) {
									xuanzhong = 0;
									for (int i = 0; i < line_x; i++) {
										for (int j = 0; j < line_y; j++) {
											if (array_ch[i][j] == '*') {
												CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
											}
										}
									}
									if (q == 0) {
										q = line_x - 1;
									}
									else {
										q--;
									}
									cct_gotoxy(0, 3 + line_x * 4);
									cct_setcolor(COLOR_BLACK, COLOR_WHITE);
									cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
									HLIGHT_square(p, q, base_x, base_y, array);
									break;
								}
								else if (keycode1 == 224 && keycode2 == 80) {
									xuanzhong = 0;
									for (int i = 0; i < line_x; i++) {
										for (int j = 0; j < line_y; j++) {
											if (array_ch[i][j] == '*') {
												CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
											}
										}
									}
									if (q == line_x - 1) {
										q = 0;
									}
									else {
										q++;
									}
									cct_gotoxy(0, 3 + line_x * 4);
									cct_setcolor(COLOR_BLACK, COLOR_WHITE);
									cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
									HLIGHT_square(p, q, base_x, base_y, array);
									break;
								}
								else if (keycode1 == 224 && keycode2 == 75) {
									xuanzhong = 0;
									for (int i = 0; i < line_x; i++) {
										for (int j = 0; j < line_y; j++) {
											if (array_ch[i][j] == '*') {
												CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
											}
										}
									}
									if (p == 0) {
										p = line_y - 1;
									}
									else {
										p--;
									}
									cct_gotoxy(0, 3 + line_x * 4);
									cct_setcolor(COLOR_BLACK, COLOR_WHITE);
									cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
									HLIGHT_square(p, q, base_x, base_y, array); 
									break;
								}
								else if (keycode1 == 224 && keycode2 == 77) {
									xuanzhong = 0;
									for (int i = 0; i < line_x; i++) {
										for (int j = 0; j < line_y; j++) {
											if (array_ch[i][j] == '*') {
												CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
											}
										}
									}
									if (p == line_y - 1) {
										p = 0;
									}
									else {
										p++;
									}
									cct_gotoxy(0, 3 + line_x * 4);
									cct_setcolor(COLOR_BLACK, COLOR_WHITE);
									cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
									HLIGHT_square(p, q, base_x, base_y, array);
									break;
								}
								else if (keycode1 == 13) {
									cct_setcolor(COLOR_BLACK, COLOR_WHITE);
									cct_gotoxy(0, 3 + line_x * 4);
									cout << "                              ";
									cct_gotoxy(0,0);
									cout << "                              ";
									score = my_score(q+65, p+48, line_x, line_y, array, array_ch,order);
									score_all += score;
									cct_gotoxy(0, 0);
									cout << "���ε÷֣�" << score << ' ' << "�ܵ÷֣�" << score_all << ' ' << "�ϳ�Ŀ�꣺" << goal;
									cct_gotoxy(0, 3 + line_x * 4);
									cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
									squares_clean(p, q, line_x, line_y, base_x, base_y, array, array_ch);
									HLIGHT_square(p, q, base_x, base_y, array);
									Sleep(200);
									CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
									Sleep(50);
									HLIGHT_square(p, q, base_x, base_y, array);
									Sleep(50);
									CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
									Sleep(50);
									if (keycode1 == 13) {
										int cnt = 0, hs = 1;
										int m, n, n0;
										for (int j = 0; j < line_y;) {
											cnt = 0;
											for (int i = 0; i < line_x; i++) {
												if (array[i][j] != 0 && array[i + 1][j] == 0) {
													cnt++;
													hs = 1;
													m = j * 8 + base_x;
													n = base_y + i * 4;
													n0 = base_y + i * 4;
													while ((n - n0) != base_y) {
														cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
														cct_gotoxy(m, n);
														cout << "      ";
														cct_gotoxy(m, n + 1);
														cout << "      ";
														cct_gotoxy(m, n + 2);
														cout << "      ";
														n += 1;
														if (hs == 3) {
															cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
															cct_gotoxy(m, n);
															cout << "������";
														}
														cct_setcolor(array[i][j], COLOR_BLACK);
														cct_gotoxy(m, n + 1);
														cout << "������";
														cct_gotoxy(m, n + 2);
														cout << "��" << array[i][j] << " " << "��";
														cct_gotoxy(m, n + 3);
														cout << "������";
														//ssssssssssss
														cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
														cct_gotoxy(m, n + 4);
														cout << "������";
														//ssssssssssssssss
														hs++;
														Sleep(5);
													}
													array[i + 1][j] = array[i][j];
													array[i][j] = 0;
													//cct_gotoxy(y * 8 + base_x, base_y + x * 4);
												}
											}
											if (cnt == 0)
												j++;
										}
									}
									cct_gotoxy(0, 3 + line_x * 4);
									cct_setcolor(COLOR_BLACK, COLOR_WHITE);
									cout << "                                                    ";
									cct_gotoxy(0, 3 + line_x * 4);
									cout << "����0��ɣ��س���/������������ֵ";
									while (1) {
										cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
										if (MAction == MOUSE_LEFT_BUTTON_CLICK || keycode1 == 13) {
											falldown(q + 65, p + 48, line_x, line_y, array, array_ch);
											rand_make(line_x, line_y, array, 4);
											for (int i = 0; i < line_x; i++) {
												for (int j = 0; j < line_y; j++) {
													if (array_ch[i][j] == '*')
														print_square(i, j, base_x, base_y, array, order);
												}
											}
											cct_gotoxy(0, 3 + line_x * 4);
											cct_setcolor(COLOR_BLACK, COLOR_WHITE);
											cout << "                                                    ";
											cct_gotoxy(0, 3 + line_x * 4);
											cct_setcolor(COLOR_BLACK, COLOR_HYELLOW);
											cout << "���κϳɽ�������C/�������������һ�εĺϳ�";
											while (1) {
												cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
												if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {
													cct_gotoxy(0, 3 + line_x * 4);
													cct_setcolor(COLOR_BLACK, COLOR_WHITE);
													cout << "                                                    ";
													cct_gotoxy(0, 3 + line_x * 4);
													break;
												}
												
											}
											
											if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {
												my_end();
												break;
											}

										}

									}
									if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {

										break;
									}
									//break;
								}
								else {
									xy_judge(MX, MY, line_x, line_y, p, q);
									if (!(old_p == p && old_q == q)) {
										xuanzhong = 0;
										for (int i = 0; i < line_x; i++) {
											for (int j = 0; j < line_y; j++) {
												if (array_ch[i][j] == '*') {
													CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
												}
											}
										}
										break;
										
									}
									else {
										if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
											if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
												cct_setcolor(COLOR_BLACK, COLOR_WHITE);
												cct_gotoxy(0, 0);
												cout << "                              ";
												score = my_score(q + 65, p + 48, line_x, line_y, array, array_ch,order);
												score_all += score;
												cct_gotoxy(0, 0);
												cout << "���ε÷֣�" << score << ' ' << "�ܵ÷֣�" << score_all << ' ' << "�ϳ�Ŀ�꣺" << goal;
												cct_setcolor(COLOR_BLACK, COLOR_WHITE);
												cct_gotoxy(0, 3 + line_x * 4);
												cout << "                                             ";
												cct_gotoxy(0, 3 + line_x * 4);
												cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
												squares_clean(p, q, line_x, line_y, base_x, base_y, array, array_ch);
												HLIGHT_square(p, q, base_x, base_y, array);
												Sleep(200);
												CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
												Sleep(50);
												HLIGHT_square(p, q, base_x, base_y, array);
												Sleep(50);
												CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
												Sleep(50);

												if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
													int cnt = 0, hs = 1;
													int m, n, n0;
													for (int j = 0; j < line_y;) {
														cnt = 0;
														for (int i = 0; i < line_x; i++) {
															if (array[i][j] != 0 && array[i + 1][j] == 0) {
																cnt++;
																hs = 1;
																m = j * 8 + base_x;
																n = base_y + i * 4;
																n0 = base_y + i * 4;
																while ((n - n0) != base_y) {
																	cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
																	cct_gotoxy(m, n);
																	cout << "      ";
																	cct_gotoxy(m, n + 1);
																	cout << "      ";
																	cct_gotoxy(m, n + 2);
																	cout << "      ";
																	n += 1;
																	if (hs == 3) {
																		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
																		cct_gotoxy(m, n);
																		cout << "������";
																	}
																	cct_setcolor(array[i][j], COLOR_BLACK);
																	cct_gotoxy(m, n + 1);
																	cout << "������";
																	cct_gotoxy(m, n + 2);
																	cout << "��" << array[i][j] << " " << "��";
																	cct_gotoxy(m, n + 3);
																	cout << "������";
																	cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
																	cct_gotoxy(m, n + 4);
																	cout << "������";
																	hs++;
																	Sleep(5);
																}
																array[i + 1][j] = array[i][j];
																array[i][j] = 0;
																//cct_gotoxy(y * 8 + base_x, base_y + x * 4);
															}
														}
														if (cnt == 0)
															j++;
													}
												}
												cct_gotoxy(0, 3 + line_x * 4);
												cct_setcolor(COLOR_BLACK, COLOR_WHITE);
												cout << "                                                    ";
												cct_gotoxy(0, 3 + line_x * 4);
												cout << "����0��ɣ��س���/������������ֵ";
												while (1) {
													cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
													if (MAction == MOUSE_LEFT_BUTTON_CLICK|| keycode1 == 13) {
														falldown(q + 65, p + 48, line_x, line_y, array, array_ch);
														rand_make(line_x, line_y, array, 4);
														for (int i = 0; i < line_x; i++) {
															for (int j = 0; j < line_y; j++) {
																if (array_ch[i][j] == '*')
																	print_square(i, j, base_x, base_y, array, order);
															}
														}
														cct_gotoxy(0, 3 + line_x * 4);
														cct_setcolor(COLOR_BLACK, COLOR_WHITE);
														cout << "                                                    ";
														cct_gotoxy(0, 3 + line_x * 4);
														cct_setcolor(COLOR_BLACK, COLOR_HYELLOW);
														cout << "���κϳɽ�������C/�������������һ�εĺϳ�";
														while (1) {
															cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
															if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {
																cct_gotoxy(0, 3 + line_x * 4);
																cct_setcolor(COLOR_BLACK, COLOR_WHITE);
																cout << "                                                    ";
																cct_gotoxy(0, 3 + line_x * 4);
																break;
															}
														}
														if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {
															my_end();
															break;
														}
													}
												}
												if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {
													
													break;
												}
											}
											else {
												continue;
											}
										}
									}
								}
							}
							if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {

								break;
							}
							/*��������*/
						}
					}
				}
				if (keycode1 == 67 || keycode1 == 99 || MAction == MOUSE_LEFT_BUTTON_CLICK) {

					continue;
				}

			}
			if (order - 48 == 9) {
				int p = 0, q = 0;
				int xuanzhong = 0;
				while (max<goal) {
					p = 0, q = 0;
					xuanzhong = 0;
					HLIGHT_square(p, q, base_x, base_y, array);
					cct_gotoxy(0, 3 + line_x * 4);
					cct_setcolor(COLOR_BLACK, COLOR_WHITE);
					cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���";
					cct_enable_mouse();//
					int MX, MY, MAction, keycode1, keycode2;
					while (1) {
						xuanzhong = 0;
						/*char�����ʼ��*/
						for (int i = 0; i < line_x; i++) {
							for (int j = 0; j < line_y; j++) {
								array_ch[i][j] = '0';
							}
						}
						cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
						cct_gotoxy(0, 3 + line_x * 4);
						cct_setcolor(COLOR_BLACK, COLOR_WHITE);
						cout << "                                                           ";
						cct_gotoxy(0, 3 + line_x * 4);
						if (keycode1 == 224 && keycode2 == 72) {
							CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
							if (q == 0) {
								q = line_x - 1;
							}
							else {
								q--;
							}
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
							HLIGHT_square(p, q, base_x, base_y, array);
						}
						else if (keycode1 == 224 && keycode2 == 80) {
							CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
							if (q == line_x - 1) {
								q = 0;
							}
							else {
								q++;
							}
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
							HLIGHT_square(p, q, base_x, base_y, array);
						}
						else if (keycode1 == 224 && keycode2 == 75) {
							CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
							if (p == 0) {
								p = line_y - 1;
							}
							else {
								p--;
							}
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
							HLIGHT_square(p, q, base_x, base_y, array);
						}
						else if (keycode1 == 224 && keycode2 == 77) {
							CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
							if (p == line_y - 1) {
								p = 0;
							}
							else {
								p++;
							}
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
							HLIGHT_square(p, q, base_x, base_y, array);
						}
						else if (keycode1 == 13) {
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "                                                    ";
							cct_gotoxy(0, 3 + line_x * 4);
							cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
							xuanzhong = 1;
						}
						else {
							CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
							if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
								cct_setcolor(COLOR_BLACK, COLOR_WHITE);
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "                                                               ";
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "[��ǰ���] " << (char)(q + 65) << "��" << p << "��";
								//cout << "[��ǰ���] " << MX << "��" << MY << "��";
								HLIGHT_square(p, q, base_x, base_y, array);
							}
							if (xy_judge(MX, MY, line_x, line_y, p, q) == 0) {
								cct_setcolor(COLOR_BLACK, COLOR_WHITE);
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "[��ǰ���] λ�÷Ƿ�";
								//CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
								continue;
							}
							if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
								if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
									cct_setcolor(COLOR_BLACK, COLOR_WHITE);
									cct_gotoxy(0, 3 + line_x * 4);
									cout << "                                                             ";
									cct_gotoxy(0, 3 + line_x * 4);
									cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
									xuanzhong = 1;
								}
								else {
									xuanzhong = 0;
									continue;
								}
							}
						}
						if (xuanzhong == 1) {
							int old_p = p, old_q = q;
							int nbr = 0;
							chupanduan(q, p, array[q][p], array, array_ch, &nbr, line_x, line_y);
							array_ch[q][p] = '*';
							if (nbr == 0) {//��������û����ֵͬ
								cct_setcolor(COLOR_BLACK, COLOR_WHITE);
								cct_gotoxy(0, 3 + line_x * 4);
								cout << "                                                          ";
								cct_gotoxy(0, 3 + line_x * 4);
								cct_setcolor(COLOR_BLACK, COLOR_YELLOW);
								cout << "��Χ����ֵͬ,";
								cct_setcolor(COLOR_BLACK, COLOR_WHITE);
								cout << "��ͷ�� / ����ƶ����س��� / �������ѡ��Q / �����Ҽ�����";
								while (1) {
									cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
									xy_judge(MX, MY, line_x, line_y, p, q);
									if ((xy_judge(MX, MY, line_x, line_y, p, q)) == 0) {
										break;
									}
									if (!(old_p == p && old_q == q)) {
										break;
									}
								}
								continue;
							}
							if (nbr != 0) {//������������ֵͬ
								int md = 0;
								array_ch[q][p] = '*';
								find(array[q][p], array, array_ch, &md, line_x, line_y);
								while (md != 0) {
									md = 0;
									find(array[q][p], array, array_ch, &md, line_x, line_y);
								}
								for (int i = 0; i < line_x; i++) {
									for (int j = 0; j < line_y; j++) {
										if (array_ch[i][j] == '*') {
											HLIGHT_square(j, i, base_x, base_y, array);
										}
									}
								}
								cct_gotoxy(0, 3 + line_x * 4);
								cct_setcolor(COLOR_BLACK, COLOR_WHITE);

								cout << "��ͷ�� / ����ƶ�ȡ����ǰѡ�񣬻س��� / ��������ϳ�";
								while (1) {
									cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
									/*��������*/
									if (keycode1 == 224 && keycode2 == 72) {
										xuanzhong = 0;
										for (int i = 0; i < line_x; i++) {
											for (int j = 0; j < line_y; j++) {
												if (array_ch[i][j] == '*') {
													CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
												}
											}
										}
										if (q == 0) {
											q = line_x - 1;
										}
										else {
											q--;
										}
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
										HLIGHT_square(p, q, base_x, base_y, array);
										break;
									}
									else if (keycode1 == 224 && keycode2 == 80) {
										xuanzhong = 0;
										for (int i = 0; i < line_x; i++) {
											for (int j = 0; j < line_y; j++) {
												if (array_ch[i][j] == '*') {
													CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
												}
											}
										}
										if (q == line_x - 1) {
											q = 0;
										}
										else {
											q++;
										}
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
										HLIGHT_square(p, q, base_x, base_y, array);
										break;
									}
									else if (keycode1 == 224 && keycode2 == 75) {
										xuanzhong = 0;
										for (int i = 0; i < line_x; i++) {
											for (int j = 0; j < line_y; j++) {
												if (array_ch[i][j] == '*') {
													CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
												}
											}
										}
										if (p == 0) {
											p = line_y - 1;
										}
										else {
											p--;
										}
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
										HLIGHT_square(p, q, base_x, base_y, array);
										break;
									}
									else if (keycode1 == 224 && keycode2 == 77) {
										xuanzhong = 0;
										for (int i = 0; i < line_x; i++) {
											for (int j = 0; j < line_y; j++) {
												if (array_ch[i][j] == '*') {
													CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
												}
											}
										}
										if (p == line_y - 1) {
											p = 0;
										}
										else {
											p++;
										}
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cout << "��ǰ����" << (char)(q + 65) << "��" << p << "��";
										HLIGHT_square(p, q, base_x, base_y, array);
										break;
									}
									else if (keycode1 == 13) {
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cct_gotoxy(0, 3 + line_x * 4);
										cout << "                                                          ";
										cct_gotoxy(0, 0);
										cout << "                                                          ";
										score = my_score(q + 65, p + 48, line_x, line_y, array, array_ch, order);
										score_all += score;
										cct_gotoxy(0, 0);
										cout << "���ε÷֣�" << score << ' ' << "�ܵ÷֣�" << score_all << ' ' << "�ϳ�Ŀ�꣺" << goal;
										cct_gotoxy(0, 3 + line_x * 4);
										cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
										max = array[q][p] + 1 > max ? array[q][p] + 1 : max;
										squares_clean(p, q, line_x, line_y, base_x, base_y, array, array_ch);
										
										HLIGHT_square(p, q, base_x, base_y, array);
										Sleep(200);
										CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
										Sleep(50);
										HLIGHT_square(p, q, base_x, base_y, array);
										Sleep(50);
										CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
										Sleep(50);
										if (keycode1 == 13) {
											int cnt = 0, hs = 1;
											int m, n, n0;
											for (int j = 0; j < line_y;) {
												cnt = 0;
												for (int i = 0; i < line_x; i++) {
													if (array[i][j] != 0 && array[i + 1][j] == 0) {
														cnt++;
														hs = 1;
														m = j * 8 + base_x;
														n = base_y + i * 4;
														n0 = base_y + i * 4;
														while ((n - n0) != base_y) {
															cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
															cct_gotoxy(m, n);
															cout << "      ";
															cct_gotoxy(m, n + 1);
															cout << "      ";
															cct_gotoxy(m, n + 2);
															cout << "      ";
															n += 1;
															if (hs == 3) {
																cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
																cct_gotoxy(m, n);
																cout << "������";
															}
															cct_setcolor(array[i][j], COLOR_BLACK);
															cct_gotoxy(m, n + 1);
															cout << "������";
															cct_gotoxy(m, n + 2);
															cout << "��" << array[i][j] << " " << "��";
															cct_gotoxy(m, n + 3);
															cout << "������";
															//ssssssssssss
															cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
															cct_gotoxy(m, n + 4);
															cout << "������";
															//ssssssssssssssss
															hs++;
															Sleep(5);
														}
														array[i + 1][j] = array[i][j];
														array[i][j] = 0;
														//cct_gotoxy(y * 8 + base_x, base_y + x * 4);
													}
												}
												if (cnt == 0)
													j++;
											}
										}
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cout << "                                                    ";
										cct_gotoxy(0, 3 + line_x * 4);
										falldown(q + 65, p + 48, line_x, line_y, array, array_ch);
										rand_make(line_x, line_y, array, 4);
										for (int i = 0; i < line_x; i++) {
											for (int j = 0; j < line_y; j++) {
												if (array_ch[i][j] == '*')
													print_square(i, j, base_x, base_y, array, order);
											}
										}
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cout << "                                                    ";
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_YELLOW);
										cct_gotoxy(0, 3 + line_x * 4);
										cct_setcolor(COLOR_BLACK, COLOR_WHITE);
										cout << "                                                    ";
										cct_gotoxy(0, 3 + line_x * 4);
										//break;
									}
									else {
										xy_judge(MX, MY, line_x, line_y, p, q);
										if (!(old_p == p && old_q == q)) {
											xuanzhong = 0;
											for (int i = 0; i < line_x; i++) {
												for (int j = 0; j < line_y; j++) {
													if (array_ch[i][j] == '*') {
														CANCEL_HLIGHT_square(j, i, base_x, base_y, array);
													}
												}
											}
											break;

										}
										else {
											if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
												if (xy_judge(MX, MY, line_x, line_y, p, q) == 1) {
													cct_setcolor(COLOR_BLACK, COLOR_WHITE);
													cct_gotoxy(0, 0);
													cout << "                                                          ";
													score = my_score(q + 65, p + 48, line_x, line_y, array, array_ch, order);
													score_all += score;
													cct_gotoxy(0, 0);
													cout << "���ε÷֣�" << score << ' ' << "�ܵ÷֣�" << score_all << ' ' << "�ϳ�Ŀ�꣺" << goal;
													cct_setcolor(COLOR_BLACK, COLOR_WHITE);
													cct_gotoxy(0, 3 + line_x * 4);
													cout << "                                                          ";
													cct_gotoxy(0, 3 + line_x * 4);
													cout << "ѡ����" << (char)(q + 65) << "��" << p << "��";
													max = (array[q][p] + 1 > max ? array[q][p] + 1 : max);
													squares_clean(p, q, line_x, line_y, base_x, base_y, array, array_ch);
													
													HLIGHT_square(p, q, base_x, base_y, array);
													Sleep(200);
													CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
													Sleep(50);
													HLIGHT_square(p, q, base_x, base_y, array);
													Sleep(50);
													CANCEL_HLIGHT_square(p, q, base_x, base_y, array);
													Sleep(50);
													if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
														int cnt = 0, hs = 1;
														int m, n, n0;
														for (int j = 0; j < line_y;) {
															cnt = 0;
															for (int i = 0; i < line_x; i++) {
																if (array[i][j] != 0 && array[i + 1][j] == 0) {
																	cnt++;
																	hs = 1;
																	m = j * 8 + base_x;
																	n = base_y + i * 4;
																	n0 = base_y + i * 4;
																	while ((n - n0) != base_y) {
																		cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
																		cct_gotoxy(m, n);
																		cout << "      ";
																		cct_gotoxy(m, n + 1);
																		cout << "      ";
																		cct_gotoxy(m, n + 2);
																		cout << "      ";
																		n += 1;
																		if (hs == 3) {
																			cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
																			cct_gotoxy(m, n);
																			cout << "������";
																		}
																		cct_setcolor(array[i][j], COLOR_BLACK);
																		cct_gotoxy(m, n + 1);
																		cout << "������";
																		cct_gotoxy(m, n + 2);
																		cout << "��" << array[i][j] << " " << "��";
																		cct_gotoxy(m, n + 3);
																		cout << "������";
																		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
																		cct_gotoxy(m, n + 4);
																		cout << "������";
																		hs++;
																		Sleep(5);
																	}
																	array[i + 1][j] = array[i][j];
																	array[i][j] = 0;
																	//cct_gotoxy(y * 8 + base_x, base_y + x * 4);
																}
															}
															if (cnt == 0)
																j++;
														}
													}
													cct_gotoxy(0, 3 + line_x * 4);
													cct_setcolor(COLOR_BLACK, COLOR_WHITE);
													cout << "                                                    ";
													cct_gotoxy(0, 3 + line_x * 4);
													falldown(q + 65, p + 48, line_x, line_y, array, array_ch);
													rand_make(line_x, line_y, array, 4);
													for (int i = 0; i < line_x; i++) {
														for (int j = 0; j < line_y; j++) {
															if (array_ch[i][j] == '*')
																print_square(i, j, base_x, base_y, array, order);
														}
													}
													break;
												}
												else {
													break;
												}
											}
										}
									}

								}
								/*��������*/
							}
						}
						if (max == goal) {
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cout << "                                                          ";
							cct_gotoxy(0, 3 + line_x * 4);
							cct_setcolor(COLOR_BLACK, COLOR_HYELLOW);
							cout << "�Ѿ��ϳɵ�" << goal<<"��";
							cct_setcolor(COLOR_BLACK, COLOR_WHITE);
							cout << "���س���/����������������Ŀ�����";
							break;
							
						}
					}
					while (1) {
						cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
						if (keycode1 == 13 || MAction == MOUSE_LEFT_BUTTON_CLICK) {
							goal += 1;
							break;
						}
						if (keycode1 == 81 ||keycode1==113 ) {
							break;
						}
					}
					if (keycode1 == 13 || MAction == MOUSE_LEFT_BUTTON_CLICK) {
						continue;
					}
					else {
						break;
					}
				}
				my_end();
				continue;

			}
			my_end();
		}
	}
	return 0;
}
