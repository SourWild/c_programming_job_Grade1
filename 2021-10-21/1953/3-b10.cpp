/* 2151928 ��12 ��ܷ�� */
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //ȡϵͳʱ��
using namespace std;
int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//��ü�����Ƶ��
	QueryPerformanceCounter(&begin);	//��ó�ʼӲ������������

	/* �˴�����ĳ���ʼ */
	int x, y, z, e, a1, b1, c1, a2, b2, c2, a3, b3, c3;   //e����number
	e = 1;
	for (x = 123; (x > 100) && (x < 999); x++) {
		for (y = 124; (y > 100) && (y < 999); y++) {
			z = 1953 - x - y;
			a1 = x / 100, b1 = (x - 100 * a1) / 10, c1 = x % 10;
			a2 = y / 100, b2 = (y - 100 * a2) / 10, c2 = y % 10;
			a3 = z / 100, b3 = (z - 100 * a3) / 10, c3 = z % 10;
			if (((a1 == b1) == 0) && ((a1 == c1) == 0) && ((a1 == a2) == 0) && ((a1 == b2) == 0) && ((a1 == c2) == 0) && ((a1 == a3) == 0) && ((a1 == b3) == 0) && ((a1 == c3) == 0) && ((b1 == c1) == 0) && ((b1 == a2) == 0) && ((b1 == b2) == 0) && ((b1 == c2) == 0) && ((b1 == a3) == 0) && ((b1 == b3) == 0) && (
				(b1 == c3) == 0) && ((c1 == a2) == 0) && ((c1 == b2) == 0) && ((c1 == c2) == 0) && ((c1 == a3) == 0) && ((c1 == b3) == 0) && ((c1 == c3) == 0) && ((a2 == b2) == 0) && ((a2 == c2) == 0) && ((a2 == a3) == 0) && ((a2 == b3) == 0) && ((a2 == c3) == 0) && ((b2 == c2) == 0) && ((b2 == a3) == 0) && ((b2 == b3) == 0) && ((b2 == c3) == 0) && ((c2 == a3) == 0) && ((c2 == b3) == 0) && ((c2 == c3) == 0) && ((a3 == b3) == 0) && ((a3 == c3) == 0) && ((b3 == c3) == 0)) {
				if (((a1 * b1 * c1 * a2 * b2 * c2 * a3 * b3 * c3 == 0) == 0) && (x < y) && (y < z) && (z > 100) && (z < 999)) {
					if (e < 10) {
						cout << "No.  " << e << " : " << x << "+" << y << "+" << z << "=1953" << "\n";
					}
					if ((e >= 10) && (e < 100)) {
						cout << "No. " << e << " : " << x << "+" << y << "+" << z << "=1953" << "\n";
					}
					if (e >= 100) {
						cout << "No." << e << " : " << x << "+" << y << "+" << z << "=1953" << "\n";
					}
					e++;
				}
			}
			else {
				continue;
			}
		}
	}
	/* �˴�����ĳ������ */

	QueryPerformanceCounter(&end);		//�����ֹӲ������������

	printf("������Ƶ�� : %lldHz\n", tick.QuadPart);
	printf("���������� : %lld\n", end.QuadPart - begin.QuadPart);
	printf("%.6f��\n", (double)(end.QuadPart - begin.QuadPart) / tick.QuadPart);
	return 0;
}