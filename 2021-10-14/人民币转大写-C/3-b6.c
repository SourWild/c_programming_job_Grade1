/* 2151928 ��12 ��ܷ�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double z, x, y, w;
    int a, b, c, d, e, f, g, h, i, j, k, l, u;
    printf("������[0-100��)֮�������:\n");
    scanf("%lf", &z);
    x = ((z / 10) - (int)(z / 10)) * 10;
    y = x - (int)x;
    w = y * 100;
    w += 0.5;
    u = (int)w;
    printf("��д�����:\n");
    a = (int)(z / 10) / 100000000;//ʮ��
    b = ((int)(z / 10) / 10000000) % 10;
    c = (((int)(z / 10) / 1000000) % 100) % 10;
    d = ((((int)(z / 10) / 100000) % 1000) % 100) % 10;
    e = (((((int)(z / 10) / 10000) % 10000) % 1000) % 100) % 10;
    f = ((((((int)(z / 10) / 1000) % 100000) % 10000) % 1000) % 100) % 10;
    g = (((((((int)(z / 10) / 100) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;
    h = ((((((((int)(z / 10) / 10) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;
    i = (((((((((int)(z / 10) / 1) % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;//ʮ
    j = (int)((z / 10 - (int)(z / 10) + 0.001) * 10);//Բ
    k = u / 10 % 10;
    l = u % 10;
    /*
    k = ((int)((z / 10 - (int)(z / 10)) * 100) % 10);
    l = (((int)((z / 10 + 0.0001 - (int)(z / 10)) * 1000) % 100) % 10);*/
    switch (a) {
        case 9:
            printf("��ʰ");
            break;
        case 8:
            printf("��ʰ");
            break;
        case 7:
            printf("��ʰ");
            break;
        case 6:
            printf("½ʰ");
            break;
        case 5:
            printf("��ʰ");
            break;
        case 4:
            printf("��ʰ");
            break;
        case 3:
            printf("��ʰ");
            break;
        case 2:
            printf("��ʰ");
            break;
        case 1:
            printf("Ҽʰ");
            break;
        case 0:
            break;
    }
    switch (b) {
        case 9:
            printf("����");
            break;
        case 8:
            printf("����");
            break;
        case 7:
            printf("����");
            break;
        case 6:
            printf("½��");
            break;
        case 5:
            printf("����");
            break;
        case 4:
            printf("����");
            break;
        case 3:
            printf("����");
            break;
        case 2:
            printf("����");
            break;
        case 1:
            printf("Ҽ��");
            break;
        case 0:
            if (a == 0) {
                printf;
                //cout;
            }
            else {
                printf("��");
            }
            break;
    }
    switch (c) {
        case 9:
            printf("��Ǫ");
            break;
        case 8:
            printf("��Ǫ");
            break;
        case 7:
            printf("��Ǫ");
            break;
        case 6:
            printf("½Ǫ");
            break;
        case 5:
            printf("��Ǫ");
            break;
        case 4:
            printf("��Ǫ");
            break;
        case 3:
            printf("��Ǫ");
            break;
        case 2:
            printf("��Ǫ");
            break;
        case 1:
            printf("ҼǪ");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //��λΪ0
                if ((d > 0) && (e > 0) && (f > 0)) {
                    printf;
                }
                if ((d > 0) && (e > 0) && (f == 0)) {
                    printf;
                }
                if ((d > 0) && (e == 0) && (f > 0)) {
                    printf;
                }
                if ((d > 0) && (e == 0) && (f == 0)) {
                    printf;
                }
                if ((d == 0) && (e > 0) && (f > 0)) {
                    printf;
                }
                if ((d == 0) && (e > 0) && (f == 0)) {
                    printf;
                }
                if ((d == 0) && (e == 0) && (f > 0)) {
                    printf;
                }
                if ((d == 0) && (e == 0) && (f == 0)) {
                    printf;
                }
            }
            else {             //*��λ��Ϊ0
                if ((d > 0) && (e > 0) && (f > 0)) {
                    printf("��");
                }
                if ((d > 0) && (e > 0) && (f == 0)) {
                    printf("��");
                }
                if ((d > 0) && (e == 0) && (f > 0)) {
                    printf("��");
                }
                if ((d > 0) && (e == 0) && (f == 0)) {
                    printf("��");
                }
                if ((d == 0) && (e > 0) && (f > 0)) {
                    printf("��");
                }
                if ((d == 0) && (e > 0) && (f == 0)) {
                    printf("��");
                }
                if ((d == 0) && (e == 0) && (f > 0)) {
                    printf("��");
                }
                if ((d == 0) && (e == 0) && (f == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (d) {
        case 9:
            printf("����");
            break;
        case 8:
            printf("�ư�");
            break;
        case 7:
            printf("���");
            break;
        case 6:
            printf("½��");
            break;
        case 5:
            printf("���");
            break;
        case 4:
            printf("����");
            break;
        case 3:
            printf("����");
            break;
        case 2:
            printf("����");
            break;
        case 1:
            printf("Ҽ��");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //��λΪ0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    printf("��");
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    printf("��");
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    printf("��");
                }
                if ((c > 0) && (e == 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (e > 0) && (f > 0)) {
                    printf;
                }
                if ((c == 0) && (e > 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (e == 0) && (f > 0)) {
                    printf;
                }
                if ((c == 0) && (e == 0) && (f == 0)) {
                    printf;
                }
            }
            else {             //*��λ��Ϊ0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    printf("��");
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    printf("��");
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    printf("��");
                }
                if ((c > 0) && (e == 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (e > 0) && (f > 0)) {
                    printf;
                }
                if ((c == 0) && (e > 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (e == 0) && (f > 0)) {
                    printf;
                }
                if ((c == 0) && (e == 0) && (f == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (e) {       //ʮ��λ
        case 9:
            printf("��ʰ");
            break;
        case 8:
            printf("��ʰ");
            break;
        case 7:
            printf("��ʰ");
            break;
        case 6:
            printf("½ʰ");
            break;
        case 5:
            printf("��ʰ");
            break;
        case 4:
            printf("��ʰ");
            break;
        case 3:
            printf("��ʰ");
            break;
        case 2:
            printf("��ʰ");
            break;
        case 1:
            printf("Ҽʰ");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //��λΪ0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    printf("��");
                }
                if ((c > 0) && (d > 0) && (f == 0)) {
                    printf;
                }
                if ((c > 0) && (d == 0) && (f > 0)) {
                    printf;
                }
                if ((c > 0) && (d == 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (d > 0) && (f > 0)) {
                    printf("��");
                }
                if ((c == 0) && (d > 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (d == 0) && (f > 0)) {
                    printf;
                }
            }
            else {                      //��λ��Ϊ0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    printf("��");
                }
                if ((c > 0) && (d > 0) && (f == 0)) {
                    printf;
                }
                if ((c > 0) && (d == 0) && (f > 0)) {
                    printf;
                }
                if ((c > 0) && (d == 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (d > 0) && (f > 0)) {
                    printf("��");
                }
                if ((c == 0) && (d > 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (d == 0) && (f > 0)) {
                    printf;
                }
                if ((c == 0) && (d == 0) && (f == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (f) {       //��λ
        case 9:
            printf("����");
            break;
        case 8:
            printf("����");
            break;
        case 7:
            printf("����");
            break;
        case 6:
            printf("½��");
            break;
        case 5:
            printf("����");
            break;
        case 4:
            printf("����");
            break;
        case 3:
            printf("����");
            break;
        case 2:
            printf("����");
            break;
        case 1:
            printf("Ҽ��");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //��λΪ0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    printf("��");
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    printf("��");
                }
                if ((c > 0) && (d == 0) && (e > 0)) {   //00 *0
                    printf("��");
                }
                if ((c > 0) && (d == 0) && (e == 0)) {   //00 *0
                    printf("��");
                }
                if ((c == 0) && (d > 0) && (e > 0)) {   //00 0*
                    printf("��");
                }
                if ((c == 0) && (d > 0) && (e == 0)) {   //00 0*
                    printf("��");
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    printf("��");
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    printf;
                }
            }
            else {                      //��λ��Ϊ0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    printf("��");
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    printf("��");
                }
                if ((c > 0) && (d == 0) && (e > 0)) {
                    printf("��");
                }
                if ((c > 0) && (d == 0) && (e == 0)) {
                    printf("��");
                }
                if ((c == 0) && (d > 0) && (e > 0)) {
                    printf("��");
                }
                if ((c == 0) && (d > 0) && (e == 0)) {
                    printf("��");
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    printf("��");
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (g) {
        case 9:
            printf("��Ǫ");
            break;
        case 8:
            printf("��Ǫ");
            break;
        case 7:
            printf("��Ǫ");
            break;
        case 6:
            printf("½Ǫ");
            break;
        case 5:
            printf("��Ǫ");
            break;
        case 4:
            printf("��Ǫ");
            break;
        case 3:
            printf("��Ǫ");
            break;
        case 2:
            printf("��Ǫ");
            break;
        case 1:
            printf("ҼǪ");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((h == 0) && (i == 0) && (j == 0)) {
                    if ((k == 0) && (l == 0)) {
                        printf("��");
                    }
                    if ((k > 0 || l > 0)) {
                        printf;
                    }
                }
                else {
                    printf;
                }
            }
            else {                                                      //ǰ������
                if ((h == 0) && (i == 0) && (j == 0)) {
                    printf;
                }
                else {                                             //ǰ��������hij��ȫΪ0
                    printf("��");
                }
            }
            break;
    }
    switch (h) {
        case 9:
            printf("����");
            break;
        case 8:
            printf("�ư�");
            break;
        case 7:
            printf("���");
            break;
        case 6:
            printf("½��");
            break;
        case 5:
            printf("���");
            break;
        case 4:
            printf("����");
            break;
        case 3:
            printf("����");
            break;
        case 2:
            printf("����");
            break;
        case 1:
            printf("Ҽ��");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    printf("��");
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    printf("��");
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    printf("��");
                }
                if ((g > 0) && (i == 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (i > 0) && (j > 0)) {
                    printf;
                }
                if ((g == 0) && (i > 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (i == 0) && (j > 0)) {
                    printf;
                }
                if ((g == 0) && (i == 0) && (j == 0)) {
                    printf;
                }
            }
            else {             //*ǰ�治ȫΪ0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    printf("��");
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    printf("��");
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    printf("��");
                }
                if ((g > 0) && (i == 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (i > 0) && (j > 0)) {
                    printf;
                }
                if ((g == 0) && (i > 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (i == 0) && (j > 0)) {
                    printf;
                }
                if ((g == 0) && (i == 0) && (j == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (i) {       //ʮλ
        case 9:
            printf("��ʰ");
            break;
        case 8:
            printf("��ʰ");
            break;
        case 7:
            printf("��ʰ");
            break;
        case 6:
            printf("½ʰ");
            break;
        case 5:
            printf("��ʰ");
            break;
        case 4:
            printf("��ʰ");
            break;
        case 3:
            printf("��ʰ");
            break;
        case 2:
            printf("��ʰ");
            break;
        case 1:
            printf("Ҽʰ");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    printf("��");
                }
                if ((g > 0) && (h > 0) && (j == 0)) {
                    printf;
                }
                if ((g > 0) && (h == 0) && (j > 0)) {
                    printf;
                }
                if ((g > 0) && (h == 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (h > 0) && (j > 0)) {
                    printf("��");
                }
                if ((g == 0) && (h > 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (h == 0) && (j > 0)) {
                    printf;
                }
                if ((g == 0) && (h == 0) && (j == 0)) {
                    printf;
                }
            }
            else {             //*ǰ�治ȫΪ0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    printf("��");
                }
                if ((g > 0) && (h > 0) && (j == 0)) {
                    printf;
                }
                if ((g > 0) && (h == 0) && (j > 0)) {
                    printf;
                }
                if ((g > 0) && (h == 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (h > 0) && (j > 0)) {
                    printf("��");
                }
                if ((g == 0) && (h > 0) && (j == 0)) {
                    printf;
                }
                if ((g == 0) && (h == 0) && (j > 0)) {
                    printf;
                }
                if ((g == 0) && (h == 0) && (j == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (j) {       //��λ
        case 9:
            printf("��Բ");
            break;
        case 8:
            printf("��Բ");
            break;
        case 7:
            printf("��Բ");
            break;
        case 6:
            printf("½Բ");
            break;
        case 5:
            printf("��Բ");
            break;
        case 4:
            printf("��Բ");
            break;
        case 3:
            printf("��Բ");
            break;
        case 2:
            printf("��Բ");
            break;
        case 1:
            printf("ҼԲ");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    printf("Բ");
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k > 0 || l > 0)) {
                    printf;
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k == 0) && (l == 0)) {
                    printf("Բ��");
                }
            }
            else {             //*ǰ�治ȫΪ0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    printf("Բ");
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    printf("Բ");
                }
                if ((g == 0) && (h == 0) && (i == 0)) {
                    printf("Բ");
                }
            }
            break;
    }
    if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0) && (g == 0) && (h == 0) && (i == 0) && (j == 0)) {     //ǰ��ȫΪ0
        if (l == 0) {
            switch (k) {
                case 9:
                    printf("������");
                    break;
                case 8:
                    printf("�ƽ���");
                    break;
                case 7:
                    printf("�����");
                    break;
                case 6:
                    printf("½����");
                    break;
                case 5:
                    printf("�����");
                    break;
                case 4:
                    printf("������");
                    break;
                case 3:
                    printf("������");
                    break;
                case 2:
                    printf("������");
                    break;
                case 1:
                    printf("Ҽ����");
                    break;
                case 0:
                    printf;
                    break;
            }
        }
        else {                      //����Ϊ0����λ��Ϊ0
            switch (k) {
                case 9:
                    printf("����");
                    break;
                case 8:
                    printf("�ƽ�");
                    break;
                case 7:
                    printf("���");
                    break;
                case 6:
                    printf("½��");
                    break;
                case 5:
                    printf("���");
                    break;
                case 4:
                    printf("����");
                    break;
                case 3:
                    printf("����");
                    break;
                case 2:
                    printf("����");
                    break;
                case 1:
                    printf("Ҽ��");
                    break;
                case 0:
                    printf;
                    break;
            }
        }
    }
    else {
        if (l == 0) {                //������Ϊ0����λΪ0
            switch (k) {
                case 9:
                    printf("������");
                    break;
                case 8:
                    printf("�ƽ���");
                    break;
                case 7:
                    printf("�����");
                    break;
                case 6:
                    printf("½����");
                    break;
                case 5:
                    printf("�����");
                    break;
                case 4:
                    printf("������");
                    break;
                case 3:
                    printf("������");
                    break;
                case 2:
                    printf("������");
                    break;
                case 1:
                    printf("Ҽ����");
                    break;
                case 0:
                    printf("��");
                    break;
            }
        }
        else {                 //������Ϊ0����λ��Ϊ0
            switch (k) {
                case 9:
                    printf("����");
                    break;
                case 8:
                    printf("�ƽ�");
                    break;
                case 7:
                    printf("���");
                    break;
                case 6:
                    printf("½��");
                    break;
                case 5:
                    printf("���");
                    break;
                case 4:
                    printf("����");
                    break;
                case 3:
                    printf("����");
                    break;
                case 2:
                    printf("����");
                    break;
                case 1:
                    printf("Ҽ��");
                    break;
                case 0:
                    printf("��");
                    break;
            }
        }
    }
    switch (l) {
        case 9:
            printf("����");
            break;
        case 8:
            printf("�Ʒ�");
            break;
        case 7:
            printf("���");
            break;
        case 6:
            printf("½��");
            break;
        case 5:
            printf("���");
            break;
        case 4:
            printf("����");
            break;
        case 3:
            printf("����");
            break;
        case 2:
            printf("����");
            break;
        case 1:
            printf("Ҽ��");
            break;
        case 0:
            printf;
            break;
    }
    printf("\n");
    return 0;
}