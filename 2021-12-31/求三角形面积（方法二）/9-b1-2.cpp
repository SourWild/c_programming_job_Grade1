/* 2151928 ��ܷ�� ��12 */
#include <iostream>
#include <cmath>
using namespace std;

class triangle;  //�����ǰ������˼��һ�£����������Ŀ����Ϊʲô
class point {
private:
	int x;
	int y;
public:
	/* �������ڴ����һ����Ա����������1����,Ҫ������ʵ�� */
	void set(int p_x, int p_y)
	{
		x = p_x;
		y = p_y;
	}
	/* ������������Ǹ���Ա�����⣬������������κε����ݳ�Ա�ͳ�Ա�����������Ը�����Ҫ����������� */
	friend triangle;
};

class triangle {
private:
	point p1;
	point p2;
	point p3;
public:
	/* ������Ҫ������Ӧ���������area����(�β�Ϊ�գ���׼��)��Ҫ����������ܹ��������Σ��򷵻���������򷵻� -1 */
	double area()
	{
		//���㶼���غ�
		if (!(p1.x == p2.x && p1.y == p2.y || p1.x == p3.x && p1.y == p3.y || p2.x == p3.x && p2.y == p3.y) &&
			!(((double)p2.x - (double)p1.x) * ((double)p3.y - (double)p1.y) == ((double)p3.x - (double)p1.x) * ((double)p2.y - (double)p1.y))) {
			double S = (0.5 * (((double)p2.x - (double)p1.x) * ((double)p3.y - (double)p1.y) - ((double)p3.x - (double)p1.x) * ((double)p2.y - (double)p1.y)));
			return S > 0 ? S : (-S);
		}
		else {
			return -1;
		}
		//���㲻����
	}
	/* ���캯�� */
	triangle(int p1_x, int p1_y, int p2_x, int p2_y, int p3_x, int p3_y)
	{
		/* ��p1/p2/p3������ֱ�x,y����ֵ */
		p1.set(p1_x, p1_y);
		p2.set(p2_x, p2_y);
		p3.set(p3_x, p3_y);
	}
	/* ���Զ�����Ҫ�ĳ�Ա�������������ޣ��������ڷ�ʽʵ�֣�������������ݳ�Ա */

};

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
***************************************************************************/
int main()
{
	if (1) {
		triangle tr(0, 0, 0, 1, 1, 0);  //������Ϊ(0,0) (0,1) (1,0)�������
		cout << "���������Ӧ���ǣ�0.5��ʵ���ǣ�" << tr.area() << endl;
	}

	if (1) {
		triangle tr(0, 2, -1, -1, 1, -1);  //������Ϊ(0,2) (-1,-1) (1,-1)�������
		cout << "���������Ӧ���ǣ�3��  ʵ���ǣ�" << tr.area() << endl;
	}

	if (1) {
		triangle tr(5, 5, -3, 1, 9, -2);  //������Ϊ(5,5) (-3,1) (9,-2)�������
		cout << "���������Ӧ���ǣ�36�� ʵ���ǣ�" << tr.area() << endl;
	}

	if (1) {
		triangle tr(0, 0, 1, 1, 2, 2);  //���㹲��
		cout << "���������Ӧ���ǣ�-1�� ʵ���ǣ�" << tr.area() << endl;
	}

	return 0;
}

