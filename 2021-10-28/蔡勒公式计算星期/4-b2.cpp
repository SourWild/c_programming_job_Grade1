/* 2151928 ��ܷ�� ��12 */
#include <iostream>
using namespace std;
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
	int y, m, d, k;
	while (1) {
		cout << "��������[1900-2100]���¡��գ�\n";
		cin >> y >> m >> d;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		int a1, a2, a3, a4, a5;//a3Ϊƽ����յĹ��ɣ�a4Ϊ������յĹ���
		a1 = (y % 4 == 0) && (y % 100 != 0) || (y % 4 == 0) && (y % 400 == 0);//����a1Ϊ1��ƽ��a1Ϊ0
		a2 = (m >= 1) && (m <= 12);           //�µĹ���
		a3 = (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) && (d >= 1) || (m == 2) && (d <= 28) && (d >= 1) || (m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30) && (d >= 1);
		a4 = (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) && (d >= 1) || (m == 2) && (d <= 29) && (d >= 1) || (m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30) && (d >= 1);
		a5 = y >= 1900 && y <= 2100;
		if (cin.fail() != 0) {
			cout << "�����������������" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		if (a5 == 0 && cin.fail() == 0) {     //��ݲ����Ϲ���
			cout << "��ݲ���ȷ������������" << endl;
			continue;
		}
		else {          //��ݷ��Ϲ���
			if (a2 == 0 && cin.fail() == 0) {         //����Ϲ��ɣ��·ݲ����Ϲ���
				cout << "�·ݲ���ȷ������������" << endl;
				continue;
			}
			else {                  //�·��Ϲ���
				if (((a1 == 1 && a4 == 0) || (a1 == 0 && a3 == 0)) && cin.fail() == 0) {  //�ղ����Ϲ���
					cout << "�ղ���ȷ������������" << endl;
					continue;
				}
			}
		}
		if (a5 == 1 && a2 == 1 && ((a1 == 1 && a4 == 1) || (a1 == 0 && a3 == 1)) && cin.fail() == 0) {
			break;
		}
	}
	if (zeller(y, m, d) == 0)
		cout << "������" << endl;
	if (zeller(y, m, d) == 1)
		cout << "����һ" << endl;
	if (zeller(y, m, d) == 2)
		cout << "���ڶ�" << endl;
	if (zeller(y, m, d) == 3)
		cout << "������" << endl;
	if (zeller(y, m, d) == 4)
		cout << "������" << endl;
	if (zeller(y, m, d) == 5)
		cout << "������" << endl;
	if (zeller(y, m, d) == 6)
		cout << "������" << endl;
	return 0;
}
