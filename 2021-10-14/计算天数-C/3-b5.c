/* 2151928 ��12 ��ܷ�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int year, y, r, sum;
    // cout << "�������꣬�£���\n";
    printf("�������꣬�£���\n");
    //cin >> year >> y >> r;
    scanf("%d %d %d", &year, &y, &r);
    int a, b, c1, c2;//c1Ϊƽ����յĹ��ɣ�c2Ϊ������յĹ���
    a = (year % 4 == 0) && (year % 100 != 0) || (year % 4 == 0) && (year % 400 == 0);//����Ϊ1��ƽ��Ϊ0
    b = (y >= 1) && (y <= 12);
    c1 = (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) && (r <= 31) && (r >= 1) || (y == 2) && (r <= 28) && (r >= 1) || (y == 4 || y == 6 || y == 9 || y == 11) && (r <= 30) && (r >= 1);
    c2 = (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) && (r <= 31) && (r >= 1) || (y == 2) && (r <= 29) && (r >= 1) || (y == 4 || y == 6 || y == 9 || y == 11) && (r <= 30) && (r >= 1);
    if (b == 0) {     //�·ݲ����Ϲ���
        printf("�������-�·ݲ���ȷ\n");
    }
    if (b == 1) {         //�·ݷ��Ϲ���
        if ((a == 1) && (c2 == 0) || (a == 0) && (c1 == 0)) {  //�ղ����Ϲ���
            printf("�������-�����µĹ�ϵ�Ƿ�\n");
        }
        if ((a == 1) && (c2 == 1)) {    //���꣬���¡��շ��Ϲ���
            if (y == 1) {
                sum = r;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 2) {
                sum = r + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 3) {
                sum = r + 31 + 29;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 4) {
                sum = r + 31 + 29 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 5) {
                sum = r + 31 + 29 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 6) {
                sum = r + 31 + 29 + 31 + 30 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 7) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 8) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 9) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 10) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 11) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 12) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
        }
        if ((a == 0) && (c2 == 1)) {    //ƽ�꣬���շ��Ϲ���
            if (y == 1) {
                sum = r;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 2) {
                sum = r + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 3) {
                sum = r + 31 + 28;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 4) {
                sum = r + 31 + 28 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 5) {
                sum = r + 31 + 28 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 6) {
                sum = r + 31 + 28 + 31 + 30 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 7) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 8) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 9) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 10) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 11) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
            if (y == 12) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, y, r, year, sum);
            }
        }
    }
    return 0;
}