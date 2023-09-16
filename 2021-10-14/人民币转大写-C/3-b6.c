/* 2151928 信12 唐芊竹 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double z, x, y, w;
    int a, b, c, d, e, f, g, h, i, j, k, l, u;
    printf("请输入[0-100亿)之间的数字:\n");
    scanf("%lf", &z);
    x = ((z / 10) - (int)(z / 10)) * 10;
    y = x - (int)x;
    w = y * 100;
    w += 0.5;
    u = (int)w;
    printf("大写结果是:\n");
    a = (int)(z / 10) / 100000000;//十亿
    b = ((int)(z / 10) / 10000000) % 10;
    c = (((int)(z / 10) / 1000000) % 100) % 10;
    d = ((((int)(z / 10) / 100000) % 1000) % 100) % 10;
    e = (((((int)(z / 10) / 10000) % 10000) % 1000) % 100) % 10;
    f = ((((((int)(z / 10) / 1000) % 100000) % 10000) % 1000) % 100) % 10;
    g = (((((((int)(z / 10) / 100) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;
    h = ((((((((int)(z / 10) / 10) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;
    i = (((((((((int)(z / 10) / 1) % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10;//十
    j = (int)((z / 10 - (int)(z / 10) + 0.001) * 10);//圆
    k = u / 10 % 10;
    l = u % 10;
    /*
    k = ((int)((z / 10 - (int)(z / 10)) * 100) % 10);
    l = (((int)((z / 10 + 0.0001 - (int)(z / 10)) * 1000) % 100) % 10);*/
    switch (a) {
        case 9:
            printf("玖拾");
            break;
        case 8:
            printf("捌拾");
            break;
        case 7:
            printf("柒拾");
            break;
        case 6:
            printf("陆拾");
            break;
        case 5:
            printf("伍拾");
            break;
        case 4:
            printf("肆拾");
            break;
        case 3:
            printf("叁拾");
            break;
        case 2:
            printf("贰拾");
            break;
        case 1:
            printf("壹拾");
            break;
        case 0:
            break;
    }
    switch (b) {
        case 9:
            printf("玖亿");
            break;
        case 8:
            printf("捌亿");
            break;
        case 7:
            printf("柒亿");
            break;
        case 6:
            printf("陆亿");
            break;
        case 5:
            printf("伍亿");
            break;
        case 4:
            printf("肆亿");
            break;
        case 3:
            printf("叁亿");
            break;
        case 2:
            printf("贰亿");
            break;
        case 1:
            printf("壹亿");
            break;
        case 0:
            if (a == 0) {
                printf;
                //cout;
            }
            else {
                printf("亿");
            }
            break;
    }
    switch (c) {
        case 9:
            printf("玖仟");
            break;
        case 8:
            printf("捌仟");
            break;
        case 7:
            printf("柒仟");
            break;
        case 6:
            printf("陆仟");
            break;
        case 5:
            printf("伍仟");
            break;
        case 4:
            printf("肆仟");
            break;
        case 3:
            printf("叁仟");
            break;
        case 2:
            printf("贰仟");
            break;
        case 1:
            printf("壹仟");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //亿位为0
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
            else {             //*亿位不为0
                if ((d > 0) && (e > 0) && (f > 0)) {
                    printf("零");
                }
                if ((d > 0) && (e > 0) && (f == 0)) {
                    printf("零");
                }
                if ((d > 0) && (e == 0) && (f > 0)) {
                    printf("零");
                }
                if ((d > 0) && (e == 0) && (f == 0)) {
                    printf("零");
                }
                if ((d == 0) && (e > 0) && (f > 0)) {
                    printf("零");
                }
                if ((d == 0) && (e > 0) && (f == 0)) {
                    printf("零");
                }
                if ((d == 0) && (e == 0) && (f > 0)) {
                    printf("零");
                }
                if ((d == 0) && (e == 0) && (f == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (d) {
        case 9:
            printf("玖佰");
            break;
        case 8:
            printf("捌佰");
            break;
        case 7:
            printf("柒佰");
            break;
        case 6:
            printf("陆佰");
            break;
        case 5:
            printf("伍佰");
            break;
        case 4:
            printf("肆佰");
            break;
        case 3:
            printf("叁佰");
            break;
        case 2:
            printf("贰佰");
            break;
        case 1:
            printf("壹佰");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {     //亿位为0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    printf("零");
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    printf("零");
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    printf("零");
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
            else {             //*亿位不为0
                if ((c > 0) && (e > 0) && (f > 0)) {
                    printf("零");
                }
                if ((c > 0) && (e > 0) && (f == 0)) {
                    printf("零");
                }
                if ((c > 0) && (e == 0) && (f > 0)) {
                    printf("零");
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
    switch (e) {       //十万位
        case 9:
            printf("玖拾");
            break;
        case 8:
            printf("捌拾");
            break;
        case 7:
            printf("柒拾");
            break;
        case 6:
            printf("陆拾");
            break;
        case 5:
            printf("伍拾");
            break;
        case 4:
            printf("肆拾");
            break;
        case 3:
            printf("叁拾");
            break;
        case 2:
            printf("贰拾");
            break;
        case 1:
            printf("壹拾");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //亿位为0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    printf("零");
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
                    printf("零");
                }
                if ((c == 0) && (d > 0) && (f == 0)) {
                    printf;
                }
                if ((c == 0) && (d == 0) && (f > 0)) {
                    printf;
                }
            }
            else {                      //亿位不为0
                if ((c > 0) && (d > 0) && (f > 0)) {
                    printf("零");
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
                    printf("零");
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
    switch (f) {       //万位
        case 9:
            printf("玖万");
            break;
        case 8:
            printf("捌万");
            break;
        case 7:
            printf("柒万");
            break;
        case 6:
            printf("陆万");
            break;
        case 5:
            printf("伍万");
            break;
        case 4:
            printf("肆万");
            break;
        case 3:
            printf("叁万");
            break;
        case 2:
            printf("贰万");
            break;
        case 1:
            printf("壹万");
            break;
        case 0:
            if ((a == 0) && (b == 0)) {   //亿位为0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    printf("万");
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    printf("万");
                }
                if ((c > 0) && (d == 0) && (e > 0)) {   //00 *0
                    printf("万");
                }
                if ((c > 0) && (d == 0) && (e == 0)) {   //00 *0
                    printf("万");
                }
                if ((c == 0) && (d > 0) && (e > 0)) {   //00 0*
                    printf("万");
                }
                if ((c == 0) && (d > 0) && (e == 0)) {   //00 0*
                    printf("万");
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    printf("万");
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    printf;
                }
            }
            else {                      //亿位不为0
                if ((c > 0) && (d > 0) && (e > 0)) {
                    printf("万");
                }
                if ((c > 0) && (d > 0) && (e == 0)) {
                    printf("万");
                }
                if ((c > 0) && (d == 0) && (e > 0)) {
                    printf("万");
                }
                if ((c > 0) && (d == 0) && (e == 0)) {
                    printf("万");
                }
                if ((c == 0) && (d > 0) && (e > 0)) {
                    printf("万");
                }
                if ((c == 0) && (d > 0) && (e == 0)) {
                    printf("万");
                }
                if ((c == 0) && (d == 0) && (e > 0)) {
                    printf("万");
                }
                if ((c == 0) && (d == 0) && (e == 0)) {
                    printf;
                }
            }
            break;
    }
    switch (g) {
        case 9:
            printf("玖仟");
            break;
        case 8:
            printf("捌仟");
            break;
        case 7:
            printf("柒仟");
            break;
        case 6:
            printf("陆仟");
            break;
        case 5:
            printf("伍仟");
            break;
        case 4:
            printf("肆仟");
            break;
        case 3:
            printf("叁仟");
            break;
        case 2:
            printf("贰仟");
            break;
        case 1:
            printf("壹仟");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //前面全为0
                if ((h == 0) && (i == 0) && (j == 0)) {
                    if ((k == 0) && (l == 0)) {
                        printf("零");
                    }
                    if ((k > 0 || l > 0)) {
                        printf;
                    }
                }
                else {
                    printf;
                }
            }
            else {                                                      //前面有数
                if ((h == 0) && (i == 0) && (j == 0)) {
                    printf;
                }
                else {                                             //前面有数，hij不全为0
                    printf("零");
                }
            }
            break;
    }
    switch (h) {
        case 9:
            printf("玖佰");
            break;
        case 8:
            printf("捌佰");
            break;
        case 7:
            printf("柒佰");
            break;
        case 6:
            printf("陆佰");
            break;
        case 5:
            printf("伍佰");
            break;
        case 4:
            printf("肆佰");
            break;
        case 3:
            printf("叁佰");
            break;
        case 2:
            printf("贰佰");
            break;
        case 1:
            printf("壹佰");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //前面全为0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    printf("零");
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    printf("零");
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    printf("零");
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
            else {             //*前面不全为0
                if ((g > 0) && (i > 0) && (j > 0)) {
                    printf("零");
                }
                if ((g > 0) && (i > 0) && (j == 0)) {
                    printf("零");
                }
                if ((g > 0) && (i == 0) && (j > 0)) {
                    printf("零");
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
    switch (i) {       //十位
        case 9:
            printf("玖拾");
            break;
        case 8:
            printf("捌拾");
            break;
        case 7:
            printf("柒拾");
            break;
        case 6:
            printf("陆拾");
            break;
        case 5:
            printf("伍拾");
            break;
        case 4:
            printf("肆拾");
            break;
        case 3:
            printf("叁拾");
            break;
        case 2:
            printf("贰拾");
            break;
        case 1:
            printf("壹拾");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //前面全为0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    printf("零");
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
                    printf("零");
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
            else {             //*前面不全为0
                if ((g > 0) && (h > 0) && (j > 0)) {
                    printf("零");
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
                    printf("零");
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
    switch (j) {       //个位
        case 9:
            printf("玖圆");
            break;
        case 8:
            printf("捌圆");
            break;
        case 7:
            printf("柒圆");
            break;
        case 6:
            printf("陆圆");
            break;
        case 5:
            printf("伍圆");
            break;
        case 4:
            printf("肆圆");
            break;
        case 3:
            printf("叁圆");
            break;
        case 2:
            printf("贰圆");
            break;
        case 1:
            printf("壹圆");
            break;
        case 0:
            if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0)) {     //前面全为0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    printf("圆");
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k > 0 || l > 0)) {
                    printf;
                }
                if ((g == 0) && (h == 0) && (i == 0) && (k == 0) && (l == 0)) {
                    printf("圆整");
                }
            }
            else {             //*前面不全为0
                if ((g > 0) && (h > 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g > 0) && (h > 0) && (i == 0)) {
                    printf("圆");
                }
                if ((g > 0) && (h == 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g > 0) && (h == 0) && (i == 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h > 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h > 0) && (i == 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h == 0) && (i > 0)) {
                    printf("圆");
                }
                if ((g == 0) && (h == 0) && (i == 0)) {
                    printf("圆");
                }
            }
            break;
    }
    if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0) && (g == 0) && (h == 0) && (i == 0) && (j == 0)) {     //前面全为0
        if (l == 0) {
            switch (k) {
                case 9:
                    printf("玖角整");
                    break;
                case 8:
                    printf("捌角整");
                    break;
                case 7:
                    printf("柒角整");
                    break;
                case 6:
                    printf("陆角整");
                    break;
                case 5:
                    printf("伍角整");
                    break;
                case 4:
                    printf("肆角整");
                    break;
                case 3:
                    printf("叁角整");
                    break;
                case 2:
                    printf("贰角整");
                    break;
                case 1:
                    printf("壹角整");
                    break;
                case 0:
                    printf;
                    break;
            }
        }
        else {                      //整数为0，分位不为0
            switch (k) {
                case 9:
                    printf("玖角");
                    break;
                case 8:
                    printf("捌角");
                    break;
                case 7:
                    printf("柒角");
                    break;
                case 6:
                    printf("陆角");
                    break;
                case 5:
                    printf("伍角");
                    break;
                case 4:
                    printf("肆角");
                    break;
                case 3:
                    printf("叁角");
                    break;
                case 2:
                    printf("贰角");
                    break;
                case 1:
                    printf("壹角");
                    break;
                case 0:
                    printf;
                    break;
            }
        }
    }
    else {
        if (l == 0) {                //整数不为0，分位为0
            switch (k) {
                case 9:
                    printf("玖角整");
                    break;
                case 8:
                    printf("捌角整");
                    break;
                case 7:
                    printf("柒角整");
                    break;
                case 6:
                    printf("陆角整");
                    break;
                case 5:
                    printf("伍角整");
                    break;
                case 4:
                    printf("肆角整");
                    break;
                case 3:
                    printf("叁角整");
                    break;
                case 2:
                    printf("贰角整");
                    break;
                case 1:
                    printf("壹角整");
                    break;
                case 0:
                    printf("整");
                    break;
            }
        }
        else {                 //整数不为0，分位不为0
            switch (k) {
                case 9:
                    printf("玖角");
                    break;
                case 8:
                    printf("捌角");
                    break;
                case 7:
                    printf("柒角");
                    break;
                case 6:
                    printf("陆角");
                    break;
                case 5:
                    printf("伍角");
                    break;
                case 4:
                    printf("肆角");
                    break;
                case 3:
                    printf("叁角");
                    break;
                case 2:
                    printf("贰角");
                    break;
                case 1:
                    printf("壹角");
                    break;
                case 0:
                    printf("零");
                    break;
            }
        }
    }
    switch (l) {
        case 9:
            printf("玖分");
            break;
        case 8:
            printf("捌分");
            break;
        case 7:
            printf("柒分");
            break;
        case 6:
            printf("陆分");
            break;
        case 5:
            printf("伍分");
            break;
        case 4:
            printf("肆分");
            break;
        case 3:
            printf("叁分");
            break;
        case 2:
            printf("贰分");
            break;
        case 1:
            printf("壹分");
            break;
        case 0:
            printf;
            break;
    }
    printf("\n");
    return 0;
}