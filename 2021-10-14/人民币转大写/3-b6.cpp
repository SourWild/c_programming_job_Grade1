/* 2151928 ��12 ��ܷ�� */
#include <iostream>
using namespace std;
int main()
{
    double z, x, y, w;
    int a, b, c, d, e, f, g, h, i, j, k, l, u;
    cout << "������[0-100��)֮�������:\n";
    cin >> z;
    x = ((z / 10) - (int)(z / 10)) * 10;
    y = x - (int)x;
    w = y * 100;
    w += 0.5;
    u = (int)w;
    cout << "��д�����:\n";
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
            cout << "��ʰ";
            break;
        case 8:
            cout << "��ʰ";
            break;
        case 7:
            cout << "��ʰ";
            break;
        case 6:
            cout << "½ʰ";
            break;
        case 5:
            cout << "��ʰ";
            break;
        case 4:
            cout << "��ʰ";
            break;
        case 3:
            cout << "��ʰ";
            break;
        case 2:
            cout << "��ʰ";
            break;
        case 1:
            cout << "Ҽʰ";
            break;
        case 0:
            break;
    }
    switch (b) {
        case 9:
            cout << "����";
            break;
        case 8:
            cout << "����";
            break;
        case 7:
            cout << "����";
            break;
        case 6:
            cout << "½��";
            break;
        case 5:
            cout << "����";
            break;
        case 4:
            cout << "����";
            break;
        case 3:
            cout << "����";
            break;
        case 2:
            cout << "����";
            break;
        case 1:
            cout << "Ҽ��";
            break;
        case 0:
            if (a == 0) {
                cout;
            }
            else {
                cout << "��";
            }
            break;
    }
    switch (c) {
        case 9:
            cout << "��Ǫ";
            break;
        case 8:
            cout << "��Ǫ";
            break;
        case 7:
            cout << "��Ǫ";
            break;
        case 6:
            cout << "½Ǫ";
            break;
        case 5:
            cout << "��Ǫ";
            break;
        case 4:
            cout << "��Ǫ";
            break;
        case 3:
            cout << "��Ǫ";
            break;
        case 2:
            cout << "��Ǫ";
            break;
        case 1:
            cout << "ҼǪ";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //��λΪ0
                if ((d > 0) && (e > 0) && (f > 0)) {
                    cout;
                }
                if ((d > 0) && (e > 0) && (f == 0)) {
                    cout;
                }
                if ((d > 0) && (e == 0) && (f > 0)) {
                    cout;
                }
                if ((d > 0) && (e == 0) && (f == 0)) {
                    cout;
                }
                if ((d == 0) && (e > 0) && (f > 0)) {
                    cout;
                }
                if ((d == 0) && (e > 0) && (f == 0)) {
                    cout;
                }
                if ((d == 0) && (e == 0) && (f > 0)) {
                    cout;
                }
                if ((d == 0) && (e == 0) && (f == 0)) {
                    cout;
                }
            }
            else {             //*��λ��Ϊ0
                if ((d > 0) && (e > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((d > 0) && (e > 0) && (f == 0)) {
                    cout << "��";
                }
                if ((d > 0) && (e == 0) && (f > 0)) {
                    cout << "��";
                }
                if ((d > 0) && (e == 0) && (f == 0)) {
                    cout << "��";
                }
                if ((d == 0) && (e > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((d == 0) && (e > 0) && (f == 0)) {
                    cout << "��";
                }
                if ((d == 0) && (e == 0) && (f > 0)) {
                    cout << "��";
                }
                if ((d == 0) && (e == 0) && (f == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (d) {
        case 9:
            cout << "����";
            break;
        case 8:
            cout << "�ư�";
            break;
        case 7:
            cout << "���";
            break;
        case 6:
            cout << "½��";
            break;
        case 5:
            cout << "���";
            break;
        case 4:
            cout << "����";
            break;
        case 3:
            cout << "����";
            break;
        case 2:
            cout << "����";
            break;
        case 1:
            cout << "Ҽ��";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //��λΪ0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    cout << "��";
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (e == 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (e > 0) && (f > 0)) {
                    cout;
                }
                if ((c == 0) && (e > 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (e == 0) && (f > 0)) {
                    cout;
                }
                if ((c == 0) && (e == 0) && (f == 0)) {
                    cout;
                }
            }
            else {             //*��λ��Ϊ0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    cout << "��";
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (e == 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (e > 0) && (f > 0)) {
                    cout;
                }
                if ((c == 0) && (e > 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (e == 0) && (f > 0)) {
                    cout;
                }
                if ((c == 0) && (e == 0) && (f == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (e) {       //ʮ��λ
        case 9:
            cout << "��ʰ";
            break;
        case 8:
            cout << "��ʰ";
            break;
        case 7:
            cout << "��ʰ";
            break;
        case 6:
            cout << "½ʰ";
            break;
        case 5:
            cout << "��ʰ";
            break;
        case 4:
            cout << "��ʰ";
            break;
        case 3:
            cout << "��ʰ";
            break;
        case 2:
            cout << "��ʰ";
            break;
        case 1:
            cout << "Ҽʰ";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //��λΪ0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (d > 0) && (f == 0)) {
                    cout;
                }
                if ((c > 0) && (d == 0) && (f > 0)) {
                    cout;
                }
                if ((c > 0) && (d == 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (d > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c == 0) && (d > 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (d == 0) && (f > 0)) {
                    cout;
                }
            }
            else {                      //��λ��Ϊ0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (d > 0) && (f == 0)) {
                    cout;
                }
                if ((c > 0) && (d == 0) && (f > 0)) {
                    cout;
                }
                if ((c > 0) && (d == 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (d > 0) && (f > 0)) {
                    cout << "��";
                }
                if ((c == 0) && (d > 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (d == 0) && (f > 0)) {
                    cout;
                }
                if ((c == 0) && (d == 0) && (f == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (f) {       //��λ
        case 9:
            cout << "����";
            break;
        case 8:
            cout << "����";
            break;
        case 7:
            cout << "����";
            break;
        case 6:
            cout << "½��";
            break;
        case 5:
            cout << "����";
            break;
        case 4:
            cout << "����";
            break;
        case 3:
            cout << "����";
            break;
        case 2:
            cout << "����";
            break;
        case 1:
            cout << "Ҽ��";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //��λΪ0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    cout << "��";
                }
                if ((c > 0) && (d == 0) && (e > 0)) {   //00 *0
                    cout << "��";
                }
                if ((c > 0) && (d == 0) && (e == 0)) {   //00 *0
                    cout << "��";
                }
                if ((c == 0) && (d > 0) && (e > 0)) {   //00 0*
                    cout << "��";
                }
                if ((c == 0) && (d > 0) && (e == 0)) {   //00 0*
                    cout << "��";
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    cout << "��";
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    cout;
                }
            }
            else {                      //��λ��Ϊ0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    cout << "��";
                }
                if ((c > 0) && (d == 0) && (e > 0)) {
                    cout << "��";
                }
                if ((c > 0) && (d == 0) && (e == 0)) {
                    cout << "��";
                }
                if ((c == 0) && (d > 0) && (e > 0)) {
                    cout << "��";
                }
                if ((c == 0) && (d > 0) && (e == 0)) {
                    cout << "��";
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    cout << "��";
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (g) {
        case 9:
            cout << "��Ǫ";
            break;
        case 8:
            cout << "��Ǫ";
            break;
        case 7:
            cout << "��Ǫ";
            break;
        case 6:
            cout << "½Ǫ";
            break;
        case 5:
            cout << "��Ǫ";
            break;
        case 4:
            cout << "��Ǫ";
            break;
        case 3:
            cout << "��Ǫ";
            break;
        case 2:
            cout << "��Ǫ";
            break;
        case 1:
            cout << "ҼǪ";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((h == 0) && (i == 0) && (j == 0)) {
                    if ((k == 0) && (l == 0)) {
                        cout << "��";
                    }
                    if ((k > 0 || l > 0)) {
                        cout;
                    }
                }
                else {
                    cout;
                }
            }
            else {                                                      //ǰ������
                if ((h == 0) && (i == 0) && (j == 0)) {
                    cout;
                }
                else {                                             //ǰ��������hij��ȫΪ0
                    cout << "��";
                }
            }
            break;
    }
    switch (h) {
        case 9:
            cout << "����";
            break;
        case 8:
            cout << "�ư�";
            break;
        case 7:
            cout << "���";
            break;
        case 6:
            cout << "½��";
            break;
        case 5:
            cout << "���";
            break;
        case 4:
            cout << "����";
            break;
        case 3:
            cout << "����";
            break;
        case 2:
            cout << "����";
            break;
        case 1:
            cout << "Ҽ��";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    cout << "��";
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g > 0) && (i == 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (i > 0) && (j > 0)) {
                    cout;
                }
                if ((g == 0) && (i > 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (i == 0) && (j > 0)) {
                    cout;
                }
                if ((g == 0) && (i == 0) && (j == 0)) {
                    cout;
                }
            }
            else {             //*ǰ�治ȫΪ0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    cout << "��";
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g > 0) && (i == 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (i > 0) && (j > 0)) {
                    cout;
                }
                if ((g == 0) && (i > 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (i == 0) && (j > 0)) {
                    cout;
                }
                if ((g == 0) && (i == 0) && (j == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (i) {       //ʮλ
        case 9:
            cout << "��ʰ";
            break;
        case 8:
            cout << "��ʰ";
            break;
        case 7:
            cout << "��ʰ";
            break;
        case 6:
            cout << "½ʰ";
            break;
        case 5:
            cout << "��ʰ";
            break;
        case 4:
            cout << "��ʰ";
            break;
        case 3:
            cout << "��ʰ";
            break;
        case 2:
            cout << "��ʰ";
            break;
        case 1:
            cout << "Ҽʰ";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g > 0) && (h > 0) && (j == 0)) {
                    cout;
                }
                if ((g > 0) && (h == 0) && (j > 0)) {
                    cout;
                }
                if ((g > 0) && (h == 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (h > 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g == 0) && (h > 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (h == 0) && (j > 0)) {
                    cout;
                }
                if ((g == 0) && (h == 0) && (j == 0)) {
                    cout;
                }
            }
            else {             //*ǰ�治ȫΪ0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g > 0) && (h > 0) && (j == 0)) {
                    cout;
                }
                if ((g > 0) && (h == 0) && (j > 0)) {
                    cout;
                }
                if ((g > 0) && (h == 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (h > 0) && (j > 0)) {
                    cout << "��";
                }
                if ((g == 0) && (h > 0) && (j == 0)) {
                    cout;
                }
                if ((g == 0) && (h == 0) && (j > 0)) {
                    cout;
                }
                if ((g == 0) && (h == 0) && (j == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (j) {       //��λ
        case 9:
            cout << "��Բ";
            break;
        case 8:
            cout << "��Բ";
            break;
        case 7:
            cout << "��Բ";
            break;
        case 6:
            cout << "½Բ";
            break;
        case 5:
            cout << "��Բ";
            break;
        case 4:
            cout << "��Բ";
            break;
        case 3:
            cout << "��Բ";
            break;
        case 2:
            cout << "��Բ";
            break;
        case 1:
            cout << "ҼԲ";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //ǰ��ȫΪ0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    cout << "Բ";
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k > 0 || l > 0)) {
                    cout;
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k == 0) && (l == 0)) {
                    cout << "Բ��";
                }
            }
            else {             //*ǰ�治ȫΪ0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    cout << "Բ";
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    cout << "Բ";
                }
                if ((g == 0) && (h == 0) && (i == 0)) {
                    cout << "Բ";
                }
            }
            break;
    }
    if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0) && (g == 0) && (h == 0) && (i == 0) && (j == 0)) {     //ǰ��ȫΪ0
        if (l == 0) {
            switch (k) {
                case 9:
                    cout << "������";
                    break;
                case 8:
                    cout << "�ƽ���";
                    break;
                case 7:
                    cout << "�����";
                    break;
                case 6:
                    cout << "½����";
                    break;
                case 5:
                    cout << "�����";
                    break;
                case 4:
                    cout << "������";
                    break;
                case 3:
                    cout << "������";
                    break;
                case 2:
                    cout << "������";
                    break;
                case 1:
                    cout << "Ҽ����";
                    break;
                case 0:
                    cout;
                    break;
            }
        }
        else {                      //����Ϊ0����λ��Ϊ0
            switch (k) {
                case 9:
                    cout << "����";
                    break;
                case 8:
                    cout << "�ƽ�";
                    break;
                case 7:
                    cout << "���";
                    break;
                case 6:
                    cout << "½��";
                    break;
                case 5:
                    cout << "���";
                    break;
                case 4:
                    cout << "����";
                    break;
                case 3:
                    cout << "����";
                    break;
                case 2:
                    cout << "����";
                    break;
                case 1:
                    cout << "Ҽ��";
                    break;
                case 0:
                    cout;
                    break;
            }
        }
    }
    else {
        if (l == 0) {                //������Ϊ0����λΪ0
            switch (k) {
                case 9:
                    cout << "������";
                    break;
                case 8:
                    cout << "�ƽ���";
                    break;
                case 7:
                    cout << "�����";
                    break;
                case 6:
                    cout << "½����";
                    break;
                case 5:
                    cout << "�����";
                    break;
                case 4:
                    cout << "������";
                    break;
                case 3:
                    cout << "������";
                    break;
                case 2:
                    cout << "������";
                    break;
                case 1:
                    cout << "Ҽ����";
                    break;
                case 0:
                    cout << "��";
                    break;
            }
        }
        else {                 //������Ϊ0����λ��Ϊ0
            switch (k) {
                case 9:
                    cout << "����";
                    break;
                case 8:
                    cout << "�ƽ�";
                    break;
                case 7:
                    cout << "���";
                    break;
                case 6:
                    cout << "½��";
                    break;
                case 5:
                    cout << "���";
                    break;
                case 4:
                    cout << "����";
                    break;
                case 3:
                    cout << "����";
                    break;
                case 2:
                    cout << "����";
                    break;
                case 1:
                    cout << "Ҽ��";
                    break;
                case 0:
                    cout << "��";
                    break;
            }
        }
    }
    switch (l) {
        case 9:
            cout << "����";
            break;
        case 8:
            cout << "�Ʒ�";
            break;
        case 7:
            cout << "���";
            break;
        case 6:
            cout << "½��";
            break;
        case 5:
            cout << "���";
            break;
        case 4:
            cout << "����";
            break;
        case 3:
            cout << "����";
            break;
        case 2:
            cout << "����";
            break;
        case 1:
            cout << "Ҽ��";
            break;
        case 0:
            cout;
            break;
    }
    cout << endl;
    return 0;
}