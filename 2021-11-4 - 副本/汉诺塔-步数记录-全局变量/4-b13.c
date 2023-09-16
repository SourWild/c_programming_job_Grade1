/* 2151928 ��ܷ�� ��12 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2��������һ��ȫ�ֱ������������徲̬�ֲ�����
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
int count=1;
void hanoi(int n, char src, char tmp, char dst)
{
    if (n >= 1) {
        hanoi(n - 1, src, dst, tmp);
        printf("%5d:%3d# %c-->%c\n", count++, n, src, dst);
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
    int n,ret;
    char src, tmp, dst;
    while (1) {
        printf("�����뺺ŵ���Ĳ���(1-16)\n");
        ret=scanf("%d", &n);
        if (ret!=0) {
            if (n >= 1 && n <= 16) {
                setbuf(stdin, NULL);
                break;
            }
            else {

                setbuf(stdin, NULL);
                continue;
            }
        }
        else {
            clearerr(stdin);
            setbuf(stdin, NULL);
            continue;
        }
    }
    while (1) {
        printf("��������ʼ��(A-C)\n");
        scanf("%c", &src);
        setbuf(stdin, NULL);
        if (src == 'a' || src == 'b' || src == 'c' || src == 'A' || src == 'B' || src == 'C') {
            break;
        }
        else {
            continue;
        }
    }
   
    while (1) {
        printf("������Ŀ����(A-C)\n");
        scanf("%c", &dst);
        setbuf(stdin, NULL);
        if (dst == 'a' || dst == 'b' || dst == 'c' || dst == 'A' || dst == 'B' || dst == 'C') {    //�ڷ�Χ��
            if (dst == src || ((int)src - (int)dst == 32)|| ((int)src - (int)dst == -32)) {       //�غ�
                if (src == 'a' || src == 'A') {
                    printf("Ŀ����(A)��������ʼ��(A)��ͬ\n");
                    continue;
                }
                if (src == 'b' || src == 'B') {
                    printf("Ŀ����(B)��������ʼ��(B)��ͬ\n");
                    continue;
                }
                if (src == 'c' || src == 'C') {
                    printf("Ŀ����(C)��������ʼ��(C)��ͬ\n");
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
    printf("�ƶ�����Ϊ:\n");
    hanoi(n, src, tmp, dst);
    return 0;
}