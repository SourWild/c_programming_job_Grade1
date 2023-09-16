/* 2151928 ��ܷ�� ��12 */
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�����
   3������������������������ʼ/Ŀ�����ĺ���������������ʹ��ѭ�������������
   4����������ú������У���main�в���������κ���ʽ��ѭ��
      ���������main�н��У���main���������ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
   ***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 1) {
        cout << " 1# " << src << "-->" << dst << endl;
    }
    else {
        hanoi(n - 1, src, dst, tmp);
        cout << setfill(' ') << setw(2) << n << "# " << src << "-->" << dst << endl;
        hanoi(n - 1, tmp, src, dst);
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    �����������(��������뺯��)�����õݹ麯��
***************************************************************************/
int main()
{
    int n;
    char src, tmp, dst;
    while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-16)\n";
        cin >> n;
        if (cin.good()) {
            if (n >= 1 && n <= 16) {
                cin.ignore(65536, '\n');
                break;
            }
            else {
                cin.ignore(65536, '\n');
                continue;
            }
        }
        else {
            cin.clear();
            cin.ignore(65536, '\n');
            continue;
        }
    }
    while (1) {
        cout << "��������ʼ��(A-C)\n";
        cin >> src;
        cin.ignore(65536, '\n');
        if (src == 'a' || src == 'b' || src == 'c' || src == 'A' || src == 'B' || src == 'C') {
            break;
        }
        else {
            continue;
        }
    }
    while (1) {
        cout << "������Ŀ����(A-C)\n";
        cin >> dst;
        cin.ignore(65536, '\n');
        if (dst == 'a' || dst == 'b' || dst == 'c' || dst == 'A' || dst == 'B' || dst == 'C') {    //�ڷ�Χ��
            if (dst == src || fabs((int)src - (int)dst) == 32) {       //�غ�
                if (src == 'a' || src == 'A') {
                    cout << "Ŀ����(A)��������ʼ��(A)��ͬ\n";
                    continue;
                }
                if (src == 'b' || src == 'B') {
                    cout << "Ŀ����(B)��������ʼ��(B)��ͬ\n";
                    continue;
                }
                if (src == 'c' || src == 'C') {
                    cout << "Ŀ����(C)��������ʼ��(C)��ͬ\n";
                    continue;
                }
            }
            else {              //���غ�
                break;
            }
        }
        else {                 //�����Ŀ�������ڷ�Χ
            continue;
        }
    }
    if (src == 'a')
        src = 'A';
    if (src == 'b')
        src = 'B';
    if (src == 'c')
        src = 'C';
    if (dst == 'a')
        dst = 'A';
    if (dst == 'b')
        dst = 'B';
    if (dst == 'c')
        dst = 'C';
    if (src != 'A' && dst != 'A')
        tmp = 'A';
    if (src != 'B' && dst != 'B')
        tmp = 'B';
    if (src != 'C' && dst != 'C')
        tmp = 'C';
    cout << "�ƶ�����Ϊ;\n";
    hanoi(n, src, tmp, dst);
    return 0;
}