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

void kongge(char start_ch, char end_ch)
{
	int kongge;
	kongge = end_ch - start_ch;
	cout <<setw(kongge) << " ";
	//cout << setw(1 * (long long int)(kongge)) << ' ';
}

void zimu(char start_ch, char end_ch)
{
	cout <<end_ch;
	if (end_ch - start_ch > 0) {
		zimu(start_ch, char(end_ch - 1));
		cout << end_ch;
	}

}

   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ���ӡ����
	 ���������
	 �� �� ֵ��
	 ˵    ����
   ***************************************************************************/
void print_diamond(char start_ch, char end_ch)
{

	char zhongzhi = start_ch;
	//kongge(start_ch, start_ch);
	if (zhongzhi == start_ch) {
		zimu(start_ch, zhongzhi);
		zhongzhi++;
	}
	zimu(start_ch, zhongzhi);
	if (zhongzhi < end_ch&&zhongzhi>start_ch) {
		zimu(start_ch, zhongzhi++);
	}
	/*if (start_ch < end_ch)
		print_diamond(start_ch, start_ch + 1);
	cout<<endl;
	/* ����ʵ�֣������в������κ���ʽ��ѭ�����������徲̬�ֲ����� */
}

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
	
	cout << "����(" << end_ch << "->A)" << endl;
	print_diamond('A', end_ch);
	cout << endl;

	return 0;
}