/* ��12 2151928 ��ܷ�� */
#include "hanoi.h"
#include "cmd_console_tools.h"
#include <iostream>
using namespace std;
//#define chushi my_menu()
/* ----------------------------------------------------------------------------------

     ���ļ����ܣ�
	1����main����
	2����ʼ����Ļ
	3�����ò˵�������hanoi_menu.cpp�У�������ѡ��
	4������ѡ����ò˵������Ӧ��ִ�к�����hanoi_multiple_solutions.cpp�У�

     ���ļ�Ҫ��
	1����������ȫ�ֱ��������ⲿȫ�ֺ;�̬ȫ�֣�const��#define�������Ʒ�Χ�ڣ�
	2����̬�ֲ����������������ƣ���ʹ��׼��Ҳ�ǣ����á����á��ܲ��þ�������
	3���������ϵͳͷ�ļ����Զ���ͷ�ļ��������ռ��

   ----------------------------------------------------------------------------------- */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	int chushi=10;
	/* demo������ִ�д˾䣬��cmd��������Ϊ40��x120�У����������120�У�����9000�У���cmd�����Ҳ���д�ֱ�����ˣ�*/
	cct_setconsoleborder(120, 40, 120, 9000);
	while (chushi < 49 || chushi>58) {
		chushi = my_menu();
		cout << "\n\n\n";
		if (chushi == 49) {
			_solution1(chushi);
		}
		if (chushi == 50) {
			_solution2(chushi);
		}
		if (chushi == 51) {
			_solution3(chushi);
		}
		if (chushi == 52) {
			_solution4(chushi);
		}
		if (chushi == 53) {
			_solution5(chushi);
		}
		if (chushi == 54) {
			_solution6(chushi);
		}
		if (chushi == 55) {
			_solution7(chushi);
		}
		if (chushi == 56) {
			_solution8(chushi);
		}
		if (chushi == 57) {
			_solution9(chushi);
		}
		if (chushi == 58) {
			return 0;
		}
	}
}
