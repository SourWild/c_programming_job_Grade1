/* ��12 2151928 ��ܷ�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int zeller(int y, int m, int d)
{
	int w, c;
	if (m == 1) {
		m = 13, y--;
	}
	if (m == 2) {
		m = 14, y--;
	}
	c = y / 100; //����-1
	y = y % 100;
	w = y + y / 4 + c / 4 - 2 * c + (26 * (m + 1) / 10) / 1 + d - 1;
	for (w; w <= 0;) {
		w += 7;
	}
	w = w % 7;
	return w;
}
int main()
{
	int y, m, d, k, ret;
	while (1) {
		printf("��������[1900-2100]���¡��գ�\n");
		ret = scanf("%d %d %d", &y, &m, &d); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
		int a1, a2, a3, a4, a5;//a3Ϊƽ����յĹ��ɣ�a4Ϊ������յĹ���
		a1 = (y % 4 == 0) && (y % 100 != 0) || (y % 4 == 0) && (y % 400 == 0);//����a1Ϊ1��ƽ��a1Ϊ0
		a2 = (m >= 1) && (m <= 12);           //�µĹ���
		a3 = (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) && (d >= 1) || (m == 2) && (d <= 28) && (d >= 1) || (m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30) && (d >= 1);
		a4 = (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) && (d >= 1) || (m == 2) && (d <= 29) && (d >= 1) || (m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30) && (d >= 1);
		a5 = y >= 1900 && y <= 2100;
		if (ret != 3) {
			printf("�����������������\n");
			clearerr(stdin);
			while ((y = getchar()) != '\n' && (m = getchar()) != '\n' && (d = getchar()) != '\n');
			continue;
		}
		if (a5 == 0 && ret == 3) {     //��ݲ����Ϲ���
			printf("��ݲ���ȷ������������\n");
			continue;
		}
		else {          //��ݷ��Ϲ���
			if (a2 == 0 && ret == 3) {         //����Ϲ��ɣ��·ݲ����Ϲ���
				printf("�·ݲ���ȷ������������\n");
				continue;
			}
			else {                  //�·��Ϲ���
				if (((a1 == 1 && a4 == 0) || (a1 == 0 && a3 == 0)) && ret == 3) {  //�ղ����Ϲ���
					printf("�ղ���ȷ������������\n");
					continue;
				}
			}
		}
		if (a5 == 1 && a2 == 1 && ((a1 == 1 && a4 == 1) || (a1 == 0 && a3 == 1)) && ret == 3) {
			break;
		}
	}
	if (zeller(y, m, d) == 0)
		printf("������\n");
	if (zeller(y, m, d) == 1)
		printf("����һ\n");
	if (zeller(y, m, d) == 2)
		printf("���ڶ�\n");
	if (zeller(y, m, d) == 3)
		printf("������\n");
	if (zeller(y, m, d) == 4)
		printf("������\n");
	if (zeller(y, m, d) == 5)
		printf("������\n");
	if (zeller(y, m, d) == 6)
		printf("������\n");
	return 0;
}


/******
int y, m, d;
cin >> y >> m >> d;
if((y=1582&&y>=10&&d>=15)||(y>1582&&1<=y&&y<=12&&
***********/