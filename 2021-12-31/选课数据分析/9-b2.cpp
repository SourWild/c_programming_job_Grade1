/* 2151928 ��12 ��ܷ�� */
#include <fstream>
#include <iomanip>
/* ���������ϵͳ�ĺ궨�塢��Ҫ��ͷ�ļ��� */
#include <iostream>
using namespace std;

#define MAX_STU_NUM			256	//Լ���������Ϊ256�ˣ����ֵ��ܺͣ�������ѡ����ѡ��
#define MAX_NAME_LEN			32	//ѧ����������󳤶Ȳ�����16������
#define MAX_FILENAME_LEN		256	//�ļ�������󳤶�
#define in_first 3
#define in_second 6
/* stu_info ����ÿ��ѧ������Ϣ������ѧ�š�������������Ҫ��˽����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_info {
private:
	int  stu_no;			//ѧ��
	char stu_name[MAX_NAME_LEN];	//����
	char stu_fst;
	int stu_fst_tk;//�˿��ж�
	friend class stu_list;
	/* ���������private���ݳ�Ա����Ա�����Լ�������Ҫ������ */

public:
	/* ���಻�������κεĹ������ݳ�Ա����Ա���� */
};

/* stu_list ������ѡ����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_list {
private:
	stu_info stu[MAX_STU_NUM + 1];
	stu_info stuplus[MAX_STU_NUM + 1];
	/* ���������private���ݳ�Ա�ͳ�Ա���� */

public:
	int read(const char* filename, const int append = 0);	//���ļ��ж���ѡ����Ϣ�����д�����2������ֵΪ0��ʾ���Ƿ�ʽ��1��ʾ׷�ӷ�ʽ
	int print(const char* prompt = NULL);			//��ӡ��ǰ�����ѡ������

	/* �������������public��Ա���� */

};
int stu_list::read(const char* filename, const int append)
{
	int  j, judge = 0;
	static int i = 0;

	if (append == 0) {
		ifstream in(filename, ios::in);
		//for (i; i < MAX_STU_NUM && !in.eof(); i++) {
			while (!in.eof()) {
				in >> stu[i].stu_no >> stu[i].stu_name;
				stu[i].stu_fst = 'Y';
				stu[i].stu_fst_tk = 1;
				i++;
			}
			i--;
		in.close();
	}
	if (append == 1) {
		ifstream in(filename, ios::in);
		while (!in.eof()) {
			in >> stu[i].stu_no >> stu[i].stu_name;
			judge = 0;
			for (j = 0; j < i; j++) {
				if (stu[j].stu_no == stu[i].stu_no) {
					judge = 1;     //����һ���غϣ���1
					break;
				}
			}
			if (judge == 1) {
				stu[j].stu_fst_tk = 0;//��ԭֵΪ1������˵��û�˿Σ����ζ������ˡ�
				stu[i].stu_no = 0;
				continue;
			}
			else {
				stu[i].stu_fst = '/'; //��һ��δѡ���ڶ��ֲ�ѡ
				stu[i].stu_fst_tk = 2;//��ѡ��2
				i++;
			}
		}
		i--;
		in.close();
		int m, n;
		for (m = 0; stu[m].stu_name[0] != '\0'; m++) {
			for (n = m + 1; stu[n].stu_name[0] != '\0'; n++) {
				if (stu[m].stu_no > stu[n].stu_no) {
					stu[MAX_STU_NUM] = stu[m];
					stu[m] = stu[n];
					stu[n] = stu[MAX_STU_NUM];
				}
			}
		}
	}
	//i--;
	return 1;
}
int stu_list::print(const char* prompt)
{
	cout << prompt << endl;
	cout << "===========================================\n";
	cout << "��� ѧ��    ����             ��һ�� �ڶ���\n";
	cout << "===========================================\n";
	for (int i = 0; stu[i].stu_name[0]!='\0'; i++) {
		cout<<setiosflags(ios::left)<<setw(5)<<(i+1)<< stu[i].stu_no << ' '<<setw(17)<< stu[i].stu_name<<setw(7)<<stu[i].stu_fst;
		if (stu[i].stu_fst_tk == 0) {
			cout << 'Y' << endl;
		}
		if (stu[i].stu_fst_tk == 1) {
			cout << "�˿�\n";
		}
		if (stu[i].stu_fst_tk == 2) {
			cout << "��ѡ\n";
		}
	}
	cout << "===========================================\n";
	return 1;
}
/* --- �˴���������������ĳ�Ա����������ʵ�� --- */


/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
***************************************************************************/
int main()
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "������ǰһ��ѡ�ε������ļ� : ";
	cin >> file1;
	cout << "�������һ��ѡ�ε������ļ� : ";
	cin >> file2;

	stu_list list;

	/* �����һ�������ļ� */
	if (list.read(file1) < 0)
		return -1;

	/* ����ڶ��������ļ�������2��ֵΪ1��ʾ׷�ӷ�ʽ */
	if (list.read(file2, 1) < 0)
		return -1;

	list.print("����ѡ������");

	return 0;
}
