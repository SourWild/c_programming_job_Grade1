/* 2151928 ÐÅ12 ÌÆÜ·Öñ */
#include <iostream>
using namespace std;
int main()
{
    double z, x, y, w;
    int a, b, c, d, e, f, g, h, i, j, k, l, u;
    cout << "ÇëÊäÈë[0-100ÒÚ)Ö®¼äµÄÊý×Ö:\n";
    cin >> z;
    x = ((z / 10) - (int)(z / 10)) * 10;
    y = x - (int)x;
    w = y * 100;
    w += 0.5;
    u = (int)w;
    cout << "´óÐ´½á¹ûÊÇ:\n";
    a = (int)(z / 10) / 100000000;//Ê®ÒÚ
    b = ((int)(z / 10) / 10000000) % 10;
    c = (((int)(z / 10) / 1000000) % 100) % 10;
    d = ((((int)(z / 10) / 100000) % 1000) % 100) % 10;
    e = (((((int)(z / 10) / 10000) % 10000) % 1000) % 100) % 10;
    f = ((((((int)(z / 10) / 1000) % 100000) % 10000) % 1000) % 100) % 10;
    g = (((((((int)(z / 10) / 100) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;
    h = ((((((((int)(z / 10) / 10) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;
    i = (((((((((int)(z / 10) / 1) % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;//Ê®
    j = (int)((z / 10 - (int)(z / 10) + 0.001) * 10);//Ô²
    k = u / 10 % 10;
    l = u % 10;
    /*
    k = ((int)((z / 10 - (int)(z / 10)) * 100) % 10);
    l = (((int)((z / 10 + 0.0001 - (int)(z / 10)) * 1000) % 100) % 10);*/
    switch (a) {
        case 9:
            cout << "¾ÁÊ°";
            break;
        case 8:
            cout << "°ÆÊ°";
            break;
        case 7:
            cout << "ÆâÊ°";
            break;
        case 6:
            cout << "Â½Ê°";
            break;
        case 5:
            cout << "ÎéÊ°";
            break;
        case 4:
            cout << "ËÁÊ°";
            break;
        case 3:
            cout << "ÈþÊ°";
            break;
        case 2:
            cout << "·¡Ê°";
            break;
        case 1:
            cout << "Ò¼Ê°";
            break;
        case 0:
            break;
    }
    switch (b) {
        case 9:
            cout << "¾ÁÒÚ";
            break;
        case 8:
            cout << "°ÆÒÚ";
            break;
        case 7:
            cout << "ÆâÒÚ";
            break;
        case 6:
            cout << "Â½ÒÚ";
            break;
        case 5:
            cout << "ÎéÒÚ";
            break;
        case 4:
            cout << "ËÁÒÚ";
            break;
        case 3:
            cout << "ÈþÒÚ";
            break;
        case 2:
            cout << "·¡ÒÚ";
            break;
        case 1:
            cout << "Ò¼ÒÚ";
            break;
        case 0:
            if (a == 0) {
                cout;
            }
            else {
                cout << "ÒÚ";
            }
            break;
    }
    switch (c) {
        case 9:
            cout << "¾ÁÇª";
            break;
        case 8:
            cout << "°ÆÇª";
            break;
        case 7:
            cout << "ÆâÇª";
            break;
        case 6:
            cout << "Â½Çª";
            break;
        case 5:
            cout << "ÎéÇª";
            break;
        case 4:
            cout << "ËÁÇª";
            break;
        case 3:
            cout << "ÈþÇª";
            break;
        case 2:
            cout << "·¡Çª";
            break;
        case 1:
            cout << "Ò¼Çª";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //ÒÚÎ»Îª0
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
            else {             //*ÒÚÎ»²»Îª0
                if ((d > 0) && (e > 0) && (f > 0)) {
                    cout << "Áã";
                }
                if ((d > 0) && (e > 0) && (f == 0)) {
                    cout << "Áã";
                }
                if ((d > 0) && (e == 0) && (f > 0)) {
                    cout << "Áã";
                }
                if ((d > 0) && (e == 0) && (f == 0)) {
                    cout << "Áã";
                }
                if ((d == 0) && (e > 0) && (f > 0)) {
                    cout << "Áã";
                }
                if ((d == 0) && (e > 0) && (f == 0)) {
                    cout << "Áã";
                }
                if ((d == 0) && (e == 0) && (f > 0)) {
                    cout << "Áã";
                }
                if ((d == 0) && (e == 0) && (f == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (d) {
        case 9:
            cout << "¾Á°Û";
            break;
        case 8:
            cout << "°Æ°Û";
            break;
        case 7:
            cout << "Æâ°Û";
            break;
        case 6:
            cout << "Â½°Û";
            break;
        case 5:
            cout << "Îé°Û";
            break;
        case 4:
            cout << "ËÁ°Û";
            break;
        case 3:
            cout << "Èþ°Û";
            break;
        case 2:
            cout << "·¡°Û";
            break;
        case 1:
            cout << "Ò¼°Û";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //ÒÚÎ»Îª0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    cout << "Áã";
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    cout << "Áã";
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    cout << "Áã";
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
            else {             //*ÒÚÎ»²»Îª0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    cout << "Áã";
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    cout << "Áã";
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    cout << "Áã";
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
    switch (e) {       //Ê®ÍòÎ»
        case 9:
            cout << "¾ÁÊ°";
            break;
        case 8:
            cout << "°ÆÊ°";
            break;
        case 7:
            cout << "ÆâÊ°";
            break;
        case 6:
            cout << "Â½Ê°";
            break;
        case 5:
            cout << "ÎéÊ°";
            break;
        case 4:
            cout << "ËÁÊ°";
            break;
        case 3:
            cout << "ÈþÊ°";
            break;
        case 2:
            cout << "·¡Ê°";
            break;
        case 1:
            cout << "Ò¼Ê°";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //ÒÚÎ»Îª0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    cout << "Áã";
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
                    cout << "Áã";
                }
                if ((c == 0) && (d > 0) && (f == 0)) {
                    cout;
                }
                if ((c == 0) && (d == 0) && (f > 0)) {
                    cout;
                }
            }
            else {                      //ÒÚÎ»²»Îª0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    cout << "Áã";
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
                    cout << "Áã";
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
    switch (f) {       //ÍòÎ»
        case 9:
            cout << "¾ÁÍò";
            break;
        case 8:
            cout << "°ÆÍò";
            break;
        case 7:
            cout << "ÆâÍò";
            break;
        case 6:
            cout << "Â½Íò";
            break;
        case 5:
            cout << "ÎéÍò";
            break;
        case 4:
            cout << "ËÁÍò";
            break;
        case 3:
            cout << "ÈþÍò";
            break;
        case 2:
            cout << "·¡Íò";
            break;
        case 1:
            cout << "Ò¼Íò";
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //ÒÚÎ»Îª0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    cout << "Íò";
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    cout << "Íò";
                }
                if ((c > 0) && (d == 0) && (e > 0)) {   //00 *0
                    cout << "Íò";
                }
                if ((c > 0) && (d == 0) && (e == 0)) {   //00 *0
                    cout << "Íò";
                }
                if ((c == 0) && (d > 0) && (e > 0)) {   //00 0*
                    cout << "Íò";
                }
                if ((c == 0) && (d > 0) && (e == 0)) {   //00 0*
                    cout << "Íò";
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    cout << "Íò";
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    cout;
                }
            }
            else {                      //ÒÚÎ»²»Îª0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    cout << "Íò";
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    cout << "Íò";
                }
                if ((c > 0) && (d == 0) && (e > 0)) {
                    cout << "Íò";
                }
                if ((c > 0) && (d == 0) && (e == 0)) {
                    cout << "Íò";
                }
                if ((c == 0) && (d > 0) && (e > 0)) {
                    cout << "Íò";
                }
                if ((c == 0) && (d > 0) && (e == 0)) {
                    cout << "Íò";
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    cout << "Íò";
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    cout;
                }
            }
            break;
    }
    switch (g) {
        case 9:
            cout << "¾ÁÇª";
            break;
        case 8:
            cout << "°ÆÇª";
            break;
        case 7:
            cout << "ÆâÇª";
            break;
        case 6:
            cout << "Â½Çª";
            break;
        case 5:
            cout << "ÎéÇª";
            break;
        case 4:
            cout << "ËÁÇª";
            break;
        case 3:
            cout << "ÈþÇª";
            break;
        case 2:
            cout << "·¡Çª";
            break;
        case 1:
            cout << "Ò¼Çª";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //Ç°ÃæÈ«Îª0
                if ((h == 0) && (i == 0) && (j == 0)) {
                    if ((k == 0) && (l == 0)) {
                        cout << "Áã";
                    }
                    if ((k > 0 || l > 0)) {
                        cout;
                    }
                }
                else {
                    cout;
                }
            }
            else {                                                      //Ç°ÃæÓÐÊý
                if ((h == 0) && (i == 0) && (j == 0)) {
                    cout;
                }
                else {                                             //Ç°ÃæÓÐÊý£¬hij²»È«Îª0
                    cout << "Áã";
                }
            }
            break;
    }
    switch (h) {
        case 9:
            cout << "¾Á°Û";
            break;
        case 8:
            cout << "°Æ°Û";
            break;
        case 7:
            cout << "Æâ°Û";
            break;
        case 6:
            cout << "Â½°Û";
            break;
        case 5:
            cout << "Îé°Û";
            break;
        case 4:
            cout << "ËÁ°Û";
            break;
        case 3:
            cout << "Èþ°Û";
            break;
        case 2:
            cout << "·¡°Û";
            break;
        case 1:
            cout << "Ò¼°Û";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //Ç°ÃæÈ«Îª0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    cout << "Áã";
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    cout << "Áã";
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    cout << "Áã";
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
            else {             //*Ç°Ãæ²»È«Îª0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    cout << "Áã";
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    cout << "Áã";
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    cout << "Áã";
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
    switch (i) {       //Ê®Î»
        case 9:
            cout << "¾ÁÊ°";
            break;
        case 8:
            cout << "°ÆÊ°";
            break;
        case 7:
            cout << "ÆâÊ°";
            break;
        case 6:
            cout << "Â½Ê°";
            break;
        case 5:
            cout << "ÎéÊ°";
            break;
        case 4:
            cout << "ËÁÊ°";
            break;
        case 3:
            cout << "ÈþÊ°";
            break;
        case 2:
            cout << "·¡Ê°";
            break;
        case 1:
            cout << "Ò¼Ê°";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //Ç°ÃæÈ«Îª0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    cout << "Áã";
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
                    cout << "Áã";
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
            else {             //*Ç°Ãæ²»È«Îª0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    cout << "Áã";
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
                    cout << "Áã";
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
    switch (j) {       //¸öÎ»
        case 9:
            cout << "¾ÁÔ²";
            break;
        case 8:
            cout << "°ÆÔ²";
            break;
        case 7:
            cout << "ÆâÔ²";
            break;
        case 6:
            cout << "Â½Ô²";
            break;
        case 5:
            cout << "ÎéÔ²";
            break;
        case 4:
            cout << "ËÁÔ²";
            break;
        case 3:
            cout << "ÈþÔ²";
            break;
        case 2:
            cout << "·¡Ô²";
            break;
        case 1:
            cout << "Ò¼Ô²";
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //Ç°ÃæÈ«Îª0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    cout << "Ô²";
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k > 0 || l > 0)) {
                    cout;
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k == 0) && (l == 0)) {
                    cout << "Ô²Õû";
                }
            }
            else {             //*Ç°Ãæ²»È«Îª0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    cout << "Ô²";
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    cout << "Ô²";
                }
                if ((g == 0) && (h == 0) && (i == 0)) {
                    cout << "Ô²";
                }
            }
            break;
    }
    if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0) && (g == 0) && (h == 0) && (i == 0) && (j == 0)) {     //Ç°ÃæÈ«Îª0
        if (l == 0) {
            switch (k) {
                case 9:
                    cout << "¾Á½ÇÕû";
                    break;
                case 8:
                    cout << "°Æ½ÇÕû";
                    break;
                case 7:
                    cout << "Æâ½ÇÕû";
                    break;
                case 6:
                    cout << "Â½½ÇÕû";
                    break;
                case 5:
                    cout << "Îé½ÇÕû";
                    break;
                case 4:
                    cout << "ËÁ½ÇÕû";
                    break;
                case 3:
                    cout << "Èþ½ÇÕû";
                    break;
                case 2:
                    cout << "·¡½ÇÕû";
                    break;
                case 1:
                    cout << "Ò¼½ÇÕû";
                    break;
                case 0:
                    cout;
                    break;
            }
        }
        else {                      //ÕûÊýÎª0£¬·ÖÎ»²»Îª0
            switch (k) {
                case 9:
                    cout << "¾Á½Ç";
                    break;
                case 8:
                    cout << "°Æ½Ç";
                    break;
                case 7:
                    cout << "Æâ½Ç";
                    break;
                case 6:
                    cout << "Â½½Ç";
                    break;
                case 5:
                    cout << "Îé½Ç";
                    break;
                case 4:
                    cout << "ËÁ½Ç";
                    break;
                case 3:
                    cout << "Èþ½Ç";
                    break;
                case 2:
                    cout << "·¡½Ç";
                    break;
                case 1:
                    cout << "Ò¼½Ç";
                    break;
                case 0:
                    cout;
                    break;
            }
        }
    }
    else {
        if (l == 0) {                //ÕûÊý²»Îª0£¬·ÖÎ»Îª0
            switch (k) {
                case 9:
                    cout << "¾Á½ÇÕû";
                    break;
                case 8:
                    cout << "°Æ½ÇÕû";
                    break;
                case 7:
                    cout << "Æâ½ÇÕû";
                    break;
                case 6:
                    cout << "Â½½ÇÕû";
                    break;
                case 5:
                    cout << "Îé½ÇÕû";
                    break;
                case 4:
                    cout << "ËÁ½ÇÕû";
                    break;
                case 3:
                    cout << "Èþ½ÇÕû";
                    break;
                case 2:
                    cout << "·¡½ÇÕû";
                    break;
                case 1:
                    cout << "Ò¼½ÇÕû";
                    break;
                case 0:
                    cout << "Õû";
                    break;
            }
        }
        else {                 //ÕûÊý²»Îª0£¬·ÖÎ»²»Îª0
            switch (k) {
                case 9:
                    cout << "¾Á½Ç";
                    break;
                case 8:
                    cout << "°Æ½Ç";
                    break;
                case 7:
                    cout << "Æâ½Ç";
                    break;
                case 6:
                    cout << "Â½½Ç";
                    break;
                case 5:
                    cout << "Îé½Ç";
                    break;
                case 4:
                    cout << "ËÁ½Ç";
                    break;
                case 3:
                    cout << "Èþ½Ç";
                    break;
                case 2:
                    cout << "·¡½Ç";
                    break;
                case 1:
                    cout << "Ò¼½Ç";
                    break;
                case 0:
                    cout << "Áã";
                    break;
            }
        }
    }
    switch (l) {
        case 9:
            cout << "¾Á·Ö";
            break;
        case 8:
            cout << "°Æ·Ö";
            break;
        case 7:
            cout << "Æâ·Ö";
            break;
        case 6:
            cout << "Â½·Ö";
            break;
        case 5:
            cout << "Îé·Ö";
            break;
        case 4:
            cout << "ËÁ·Ö";
            break;
        case 3:
            cout << "Èþ·Ö";
            break;
        case 2:
            cout << "·¡·Ö";
            break;
        case 1:
            cout << "Ò¼·Ö";
            break;
        case 0:
            cout;
            break;
    }
    cout << endl;
    return 0;
}