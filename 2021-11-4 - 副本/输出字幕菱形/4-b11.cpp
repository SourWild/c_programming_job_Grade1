/* ѧ�� �༶ ���� */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
		����   ��1����������һ�����������������������ӵĺ����в������κ���ʽ��ѭ��
				 2��������ų���
				 3������const�ͱ���

		������ ��1������ȫ�ֱ���
   ----------------------------------------------------------------------------------- */


   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ���ӡ����
	 ���������
	 �� �� ֵ��
	 ˵    ����
   ***************************************************************************/
void print_char(char start_ch, int n,char end_ch)    //��ӡһ�е��ַ�
{
	if (n == 1) {
		cout << 'A';
	}
	cout << char(n + 64);
	print_char(start_ch, n - 1,end_ch);
	cout << char(n + 64);
}
void print_blank(char start_ch, int n, char end_ch)   //��ӡһ�еĿո�
{
	int kongge;
	kongge = end_ch - n;
	cout << setw(1*(long long int)(kongge))<< ' ' << endl;

}
void print_row(char start_ch, int n ,char end_ch)     //��ӡһ��
{
	print_blank(start_ch, n, end_ch);
	print_char(start_ch, n, end_ch);
	cout << endl;
	if (n < (int)end_ch) {
		print_row(start_ch, n+1, end_ch);
	}
}
void print_rowdown(char start_ch, int n, char end_ch)     //��ӡһ��down
{
	print_blank(start_ch, n, end_ch);
	print_char(start_ch, n, end_ch);
	cout << endl;
	if (n < (int)end_ch && n>1)
		print_rowdown(start_ch, n-1, end_ch);
	
}

void print_diamond(char start_ch, char end_ch)
{
	int s, e, n;
	s = 1;
	n = 1;
	e = (int)end_ch - 64;
	print_row(s, n, e);
	n = e-1;
	print_rowdown(s, n - 1, e);
}
	

	/* ����ʵ�֣������в������κ���ʽ��ѭ�����������徲̬�ֲ����� */


/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main����������...�����޸ģ�����λ�ò�׼�޸�
***************************************************************************/
int main()
{
	char end_ch;

	/* ������������ַ�(����д��Ч) */
	cout << "����������ַ�(A~Z)" << endl;
	end_ch = getchar();
	/* ����(�м�ΪA) */
	cout << setw(2 * ((long long int)(end_ch) - 64) - 1) << setfill('=') << '=' << endl;/* ��������������=(��������ѭ��) */
	cout << "����(" << end_ch << "->A)" << endl;
	cout << setw(2 * ((long long int)(end_ch) - 64) - 1) << setfill('=') << '=' << endl;/* ��������������=(��������ѭ��) */
	print_diamond('A', end_ch);
	cout << endl;
	return 0;
}