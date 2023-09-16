/* 信12 2151928 唐芊竹 */
#include <iostream>
#include <iomanip>
#include "hanoi.h"
#include "cmd_console_tools.h"
#include <windows.h>
#include <conio.h>
#define qs 11
#define zhu_1_leftpoint 1
#define zhu_2_leftpoint 33
#define zhu_3_leftpoint 65
#define zhu_leftpoint_start 1 + 32 * (int)(src - 65)
#define zhu_leftpoint_end 1 + 32 * (int)(dst - 65)
#define zhu_1_middlepoint 12
#define zhu_2_middlepoint 44
#define zhu_3_middlepoint 76
#define zhu_line 15
#define zhu_length 23
using namespace std;
int cnt = 1, v;
int abc[3][10];
int top[3] = { 0,0,0 };
void shuchu(int n, char src, char tmp, char dst, int chushi)
{
    if (chushi == 49) 
        cout << setfill(' ') << setw(2) << n << "# " << src << "-->" << dst << endl;
    if (chushi == 50) {
        if (n == 1) {
            cout << setfill(' ') << setw(5) << cnt << ": " << " 1# " << src << "-->" << dst << endl;
        }
        else {
            cnt++;
            cout << setfill(' ') << setw(5) << cnt << ": " << setfill(' ') << setw(2) << n << "# " << src << "-->" << dst << endl;
            cnt++;
        }
    }
    if (chushi == 51) 
        shuchu_hengxiang(n, src, tmp, dst, chushi);
    if (chushi == 52) {
        shuchu_hengxiang(n, src, tmp, dst, chushi);
        shuchu_zongxiang(n, src, tmp, dst, chushi);
    }
    if (chushi == 56) {
        shuchu_hengxiang(n, src, tmp, dst, chushi);
        shuchu_zongxiang(n, src, tmp, dst, chushi);
        yidong(src, dst, chushi,v);
    }
}
void shuchu_hengxiang(int n, char src, char tmp, char dst, int chushi)
{
    int m,store = 0;
    cct_setcolor(0, 7);
    if (n == 1) {
        if (chushi == 52) 
            cct_gotoxy(0, 17);
        if (chushi == 56||chushi==57) 
            cct_gotoxy(0, 32);
        if (chushi == 56||chushi==57) {
            cout << "第" << setw(4) << setfill(' ') << cnt << " 步(" << setw(2) << setfill(' ') << n << "#: " << src << "-->" << dst << ") ";
        }
        else {
            cout << "第" << setw(4) << setfill(' ') << cnt << " 步(" << setw(2) << setfill(' ') << n << "): " << src << "-->" << dst << " ";
        }
        if (src == 'A' || src == 'B' || src == 'C') {
            store = abc[(int)(src - 65)][--top[(int)(src - 65)]];
            abc[(int)(src - 65)][top[(int)(src - 65)]] = 0;
        }
        if (dst == 'A' || dst == 'B' || dst == 'C') 
            abc[(int)(dst-65)][top[(int)(dst - 65)]++] = store;
        if (chushi == 52) 
            cct_gotoxy(21, 17);
        if (chushi == 56||chushi==57) 
            cct_gotoxy(21, 32);
        cout << "A:";
        cout_chushi_line();
        if (chushi == 51) 
            cout << endl;
    }
    else {
        if (chushi == 51 || chushi == 52||chushi==56)
            cnt++;
        if (chushi == 52) 
            cct_gotoxy(0, 17);
        if (chushi == 56||chushi==57) 
            cct_gotoxy(0, 32);
        if (chushi == 56 || chushi == 57) {
            cout << "第" << setw(4) << setfill(' ') << cnt << " 步(" << setw(2) << setfill(' ') << n << "#: " << src << "-->" << dst << ") ";
        }
        else {
            cout << "第" << setw(4) << setfill(' ') << cnt << " 步(" << setw(2) << setfill(' ') << n << "): " << src << "-->" << dst << " ";
        }
        if (src == 'A' || src == 'B' || src == 'C') {
            store = abc[(int)(src - 65)][--top[(int)(src - 65)]];
            abc[(int)(src - 65)][top[(int)(src - 65)]] = 0;
        }
        if (dst == 'A' || dst == 'B' || dst == 'C') 
            abc[(int)(dst - 65)][top[(int)(dst - 65)]++] = store;
        if (chushi == 52) 
            cct_gotoxy(21, 17);
        if (chushi == 56||chushi==57) 
            cct_gotoxy(21, 32);
        cout << "A:";
        cout_chushi_line();
        if (chushi == 51) {
            cout << endl;
            cnt++;
        }
    }
}
void shuchu_zongxiang(int n, char src, char tmp, char dst, int chushi)
{
    cct_setcolor(0, 7);
    if (n == 1) {
        if (src == 'A'|| src == 'B' || src == 'C') {
            if (chushi == 52) 
                cct_gotoxy((int)(10 * (src - 64)), qs - top[(int)(src - 65)]);
            if (chushi == 56||chushi==57) 
                cct_gotoxy((int)(10 * (src - 64)), 15 + qs - top[(int)(src - 65)]);
            cout << "  ";
        }
        if (dst == 'A'|| dst == 'B'|| dst == 'C') {
            if (chushi == 52) 
                cct_gotoxy((int)(10 * (dst - 64)), qs - top[(int)(dst - 65)] + 1);
            if (chushi == 56||chushi==57) 
                cct_gotoxy((int)(10 * (dst - 64)), 15+qs - top[(int)(dst - 65)] + 1);
            cout << setw(2) << setfill(' ') << abc[(int)(dst-65)][top[(int)(dst - 65)] - 1] << " ";
        }
        if (chushi == 52) {
            if (v == 0) {
                while (_getch() != '\r')
                    ;
            }
            else if (v == 1 || v == 2 || v == 3 || v == 4 || v == 5) {
                Sleep(1255 - 250 * v);
            }
        }
        if(chushi==56) {
            if (v == 0) {
                Sleep(500);
            }
            else if (v == 1 || v == 2 || v == 3 || v == 4 || v == 5) {
                Sleep(1255 - 250 * v);
            }
        }
    }
    else {
        if (src == 'A' || src == 'B' || src == 'C') {
            if (chushi == 52) 
                cct_gotoxy((int)(10 * (src - 64)), qs - top[(int)(src - 65)]);
            if (chushi == 56||chushi==57) 
                cct_gotoxy((int)(10 * (src - 64)), 15 + qs - top[(int)(src - 65)]);
            cout << "  ";
        }
        if (dst == 'A' || dst == 'B' || dst == 'C') {
            if (chushi == 52) 
                cct_gotoxy((int)(10 * (dst - 64)), qs - top[(int)(dst - 65)] + 1);
            if (chushi == 56||chushi==57) 
                cct_gotoxy((int)(10 * (dst - 64)), 15 + qs - top[(int)(dst - 65)] + 1);
            cout << setw(2) << setfill(' ') << abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1] << " ";
        }
        if (chushi == 52) {
            if (v == 0) {
                while (_getch() != '\r')
                    ;
            }
            else if (v == 1 || v == 2 || v == 3 || v == 4 || v == 5) {
                Sleep(1255 - 250 * v);
            }
        }
        if (chushi == 56) {
            if (v == 0) {
                Sleep(500);
            }
            else if (v == 1 || v == 2 || v == 3 || v == 4 || v == 5) {
                Sleep(1255 - 250 * v);
            }
        }
        if (chushi == 52||chushi==56) 
            cnt++;
    }
}
void hanoi(int n, char src, char tmp, char dst,int chushi)
{
    if (n == 1) {
        shuchu(n,src,tmp,dst,chushi);
    }
    else {
        hanoi(n - 1, src, dst, tmp,chushi);
        shuchu(n, src, tmp, dst, chushi);
        hanoi(n - 1, tmp, src, dst,chushi);
    }
}
void _solution1(int chushi)
{
    char src, tmp, dst;
    int n;
    cnt = 1;
    shuru(&src,&tmp,&dst, &n);
    cout << "移动步骤为;\n";
    hanoi(n, src, tmp, dst,chushi);
    gameover(chushi);
}
void _solution2(int chushi)
{
    char src, tmp, dst;
    int n;
    cnt = 1;
    shuru(&src, &tmp, &dst, &n);
    cout << "移动步骤为;\n";
    hanoi(n, src, tmp, dst,chushi);
    gameover(chushi);
}
void _solution3(int chushi)
{
    char src, tmp, dst;
    int n, o = 0;
    shuru(&src, &tmp, &dst, &n);
    int m = n;
    cnt = 1;
    shuzu_chushihua();
    fupan_src(src, o, m);
    cout << "初始:                A:";
    cout_chushi_line();
    cout << endl;
    hanoi(n, src, tmp, dst, chushi);
    gameover(chushi);
}
void _solution4(int chushi)
{
    char src, tmp, dst;
    int n, o = 0;
    shuru(&src, &tmp, &dst, &n);
    int m = n;
    cnt = 1;
    while (1) {
        cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)\n";
        cin >> v;
        if (cin.good() == 0) {
            cin.clear();
            cin.ignore(65535,'\n');
            continue;
        }
        else {
            if (v >= 0 && v <= 5) {
                break;
            }
            else {
                continue;
            }
        }
    }
    cct_cls();
    cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << v ;
    int hs = 11, g = n;  //hs为行数
    shuzu_src_zongxiang_dayin(src, g, hs);
    cct_gotoxy(0, 12);
    cout << "         =========================";
    cct_gotoxy(0, 13);
    cout << "           A         B         C";
    shuzu_chushihua();
    fupan_src(src, o, m);
    cct_gotoxy(0, 17);
    cout << "初始:                A:";
    cout_chushi_line();
    cout << endl;
    if (v == 0) {
        while (_getch() != '\r')
            ;
    }
    else if (v == 1||v==2||v==3||v==4||v==5) {
        Sleep(1255 - 250 * v);
    }
    hanoi(n, src, tmp, dst, chushi);
    cct_gotoxy(0, 20);
    gameover(chushi);
}
void _solution5(int chushi)
{
    huazhuzi('A', 'B', 0, chushi);
    gameover(chushi);
}
void _solution6(int chushi)
{
    int x=0, y=0, n;
    char src, tmp, dst;
    shuru(&src, &tmp, &dst, &n);
    int m = n, o = 0, i = 0, j=0;
    y = 0, j = 0, x = 0;
    shuzu_chushihua();
    fupan_src(src, o, m);
    cct_cls();
    huazhuzi(src, dst,n,chushi);
    huapanzi_src(src, i);
    cct_gotoxy(0, 20);
    cct_setcolor(0, 7);
    gameover(chushi);
}
void _solution7(int chushi)
{
    cct_setcursor(CURSOR_INVISIBLE);
    int  x, y;
    int n;
    char src, tmp, dst;
    shuru(&src, &tmp, &dst, &n);
    int m = n, o = 0, i = 0, j = 0;
    x = 0, y = 0, j = 0;
    shuzu_chushihua();
    fupan_src(src, o, m);
    cct_cls();
    huazhuzi(src,dst,n,chushi);
    huapanzi_src(src, i);
    while (_getch() != '\r')
        ;
    yidong(src, dst, chushi,v);
    cct_setcolor(0, 7);
    cct_gotoxy(0, 17);
    gameover(chushi);
}
void _solution8(int chushi)
{
    cct_setcursor(CURSOR_INVISIBLE);
    int n;
    char src, tmp, dst;
    shuru(&src, &tmp, &dst, &n);
    int m = n, o = 0, i = 0, j=0;
    j = 0;
    while (1) {
        cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)\n";
        cin >> v;
        if (cin.good() == 0) {
            cin.clear();
            cin.ignore();
            continue;
        }
        else {
            if (v >= 0 && v <= 5) {
                break;
            }
            else {
                continue;
            }
        }
    }
    shuzu_chushihua();
    fupan_src(src, o, m);
    cct_cls();
    huazhuzi(src, dst, n,chushi);
    cct_setcolor(0, 7);
    cct_gotoxy(0, 12 + 15);
    cout << "         =========================";
    cct_gotoxy(0, 13 + 15);
    cout << "           A         B         C";
    int hs = 11 + 15, g = n;  //hs为行数
    cct_setcolor(0, 7);
    shuzu_src_zongxiang_dayin(src, g, hs);
    huapanzi_src(src, i);
    cct_gotoxy(0, 32);
    cct_setcolor(0, 7);
    cout << "初始:                A:";
    cout_chushi_line();
    if (v == 0) {
        while (_getch() != '\r')
            ;
    }
    hanoi(n, src, tmp, dst, chushi);
    cct_setcolor(0, 7);
    cct_gotoxy(0,34);
    gameover(chushi);
}
void _solution9(int chushi)
{
    cct_setcursor(CURSOR_INVISIBLE);
    int n, store=0;
    char src, tmp, dst;
    shuru(&src, &tmp, &dst, &n);
    int m = n, o = 0 , i=0, j=0;
    store = 0, j = 0;
    shuzu_chushihua();
    fupan_src(src, o, m);
    cct_cls();
    huazhuzi(src, dst, n, chushi);
    cct_setcolor(0, 7);
    cct_gotoxy(0, 12 + 15);
    cout << "         =========================";
    cct_gotoxy(0, 13 + 15);
    cout << "           A         B         C";
    int hs = 11 + 15, g = n;  //hs为行数
    cct_setcolor(0, 7);
    shuzu_src_zongxiang_dayin(src, g, hs);
    huapanzi_src(src, i);
    cct_gotoxy(0, 32);
    cct_setcolor(0, 7);
    cout << "初始:                A:";
    cout_chushi_line();
    cct_gotoxy(0, 34);
    cct_setcolor(0, 7);
    cout << "请输入移动的柱号(命令形式：AC=A顶端的盘子移动到C，Q=退出) ：";
    char s[20];
    while (1) {
        int ii;
        /*数组s赋初值'\0'*/
        for (ii = 0; ii < 20; ii++) {
            s[ii] = '\0';
        }
        cct_gotoxy(60, 34);
        for (ii = 0; ii < 20; ii++) {
            s[ii] = _getch();
            if (s[ii] == ' ') {
                ii--;
                continue;
            }
            if (s[ii] == '\r') {
                s[ii] = '\0';
                break;
            }
            else {
                cout << s[ii];
            }
        }
        if (ii == 2) {
            if (ii == 2 && ((s[0] >= 65 && s[0] <= 67) || (s[0] >= 97 && s[0] <= 99)) && ((s[1] >= 65 && s[1] <= 67) || (s[1] >= 97 && s[1] <= 99))) {
                if (s[0] >= 97 && s[0] <= 99) {
                    s[0] = s[0] - 32;
                }//小写转大写
                if (s[1] >= 97 && s[1] <= 99) {
                    s[1] = s[1] - 32;
                }//小写转大写
                if (s[0] == s[1]) {
                    cct_gotoxy(60, 34);
                    cct_setcolor(0, 7);
                    cout << "                      ";
                    cct_gotoxy(60, 34);
                    continue;
                }
                if (top[s[0] - 65] == 0) {
                    cct_gotoxy(0, 35);
                    cct_setcolor(0, 7);
                    cout << "源柱为空!";
                    Sleep(800);
                    cct_gotoxy(60, 34);
                    cout << "                      ";
                    cct_gotoxy(0, 35);
                    cout << "                      ";
                    cct_gotoxy(60, 34);
                    continue;
                }
                if (top[s[1] - 65] != 0) {
                    if (abc[s[0] - 65][top[s[0] - 65] - 1] > abc[s[1] - 65][top[s[1] - 65] - 1]) {
                        cct_gotoxy(0, 35);
                        cct_setcolor(0, 7);
                        cout << "大盘压小盘，非法移动!";
                        Sleep(800);
                        cct_gotoxy(60, 34);
                        cout << "                      ";
                        cct_gotoxy(0, 35);
                        cout << "                      ";
                        cct_gotoxy(60, 34);
                        continue;
                    }
                }
                shuchu_hengxiang(abc[s[0] - 65][top[s[0] - 65] - 1], s[0], (198 - s[0] - s[1]), s[1], chushi);
                shuchu_zongxiang(abc[s[0] - 65][top[s[0] - 65] - 1], s[0], (198 - s[0] - s[1]), s[1], chushi);
                yidong(s[0], s[1], chushi, 5);
                cnt++;
                cct_setcolor(0, 7);
                cct_gotoxy(60, 34);
                cout << "                      ";
                cct_gotoxy(60, 34);
                if (top[dst - 65] == n) {
                    cct_setcolor(0, 7);
                    cct_gotoxy(60, 34);
                    cout << "                      ";
                    cct_gotoxy(0, 35);
                    cout << "游戏结束!!!!!";
                    gameover(chushi);
                }
            }
        }
        if (ii == 1 && ((s[ii - 1] == 'q') || (s[ii - 1] == 'Q'))) {
            cct_setcolor(0, 7);
            cct_gotoxy(60, 34);
            cout << "                      ";
            cct_gotoxy(0, 35);
            cout << "游戏结束!!!!!";
            gameover(chushi);
        }
        else {
            cct_setcolor(0, 7);
            cct_gotoxy(60, 34);
            cout << "                      ";
            cct_gotoxy(0, 35);
            cout << "                      ";
            cct_gotoxy(60, 34);
            continue;
        }
    }
    cct_gotoxy(0, 37);
}
void shuru(char *x,char *y,char *z,int *cengshu)
{
    char src, tmp, dst;
    int n;
    while (1) {
        cout << "请输入汉诺塔的层数(1-10)\n";
        cin >> n;
        if (cin.good()) {
            if (n >= 1 && n <= 10) {
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
        cout << "请输入起始柱(A-C)\n";
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
        cout << "请输入目标柱(A-C)\n";
        cin >> dst;
        cin.ignore(65536, '\n');
        if (dst == 'a' || dst == 'b' || dst == 'c' || dst == 'A' || dst == 'B' || dst == 'C') {    //在范围内
            if (dst == src || fabs((int)src - (int)dst) == 32) {       //重合
                if (src == 'a' || src == 'A') {
                    cout << "目标柱(A)不能与起始柱(A)相同\n";
                    continue;
                }
                if (src == 'b' || src == 'B') {
                    cout << "目标柱(B)不能与起始柱(B)相同\n";
                    continue;
                }
                if (src == 'c' || src == 'C') {
                    cout << "目标柱(C)不能与起始柱(C)相同\n";
                    continue;
                }
            }
            else {              //不重合
                break;
            }
        }
        else {                 //输入的目标柱不在范围
            continue;
        }
    }
    if ((src == 'a') || (src == 'b') || (src == 'c')) 
        src = (char)(src - 32);
    if ((dst == 'a') || (dst == 'b') || (dst == 'c')) 
        dst = (char)(dst - 32);
    tmp = (char)(198 - src - dst);
    *x = src;
    *y = tmp;
    *z = dst;
    *cengshu = n;
}
void huazhuzi(char src,char dst,int n,int chushi)
{
    int y;
    cct_cls();
    cct_gotoxy(0, 0);
    if (chushi == 55) 
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层";
    if (chushi == 56) 
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << v ;
    cct_showch(zhu_1_leftpoint, zhu_line, ' ', COLOR_HYELLOW, COLOR_HYELLOW, zhu_length);
    cct_showch(zhu_2_leftpoint, zhu_line, ' ', COLOR_HYELLOW, COLOR_HYELLOW, zhu_length);
    cct_showch(zhu_3_leftpoint, zhu_line, ' ', COLOR_HYELLOW, COLOR_HYELLOW, zhu_length);
    for (y = 14; y > 2; y--)
    {
        cct_showch(zhu_1_middlepoint, y, ' ', COLOR_HYELLOW, COLOR_HYELLOW, 1);
        cct_showch(zhu_2_middlepoint, y, ' ', COLOR_HYELLOW, COLOR_HYELLOW, 1);
        cct_showch(zhu_3_middlepoint, y, ' ', COLOR_HYELLOW, COLOR_HYELLOW, 1);
        Sleep(100);
    }
    cct_setcolor(0, 7);
    cct_gotoxy(0, 20);
}
void yidong(char src, char dst, int chushi,int v)
{
    int x, y, store=0;
    store = 0;
    if (chushi == 55) {
             /* 将一串字符从下向上移动 */
        for (y = zhu_line - (top[(int)(src - 65)]); y > 0; y--) {
            cct_showstr(zhu_leftpoint_start + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, " ", abc[(int)(src - 65)][top[(int)(src - 65)] - 1], abc[(int)(src - 65)][top[(int)(src - 65)] - 1], 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
            Sleep(300);
            if (y > 1 && y <= 2) 
                cct_showch(zhu_leftpoint_start + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
            if (y > 2 && y <= zhu_line - (top[(int)(src - 65)])) {
                cct_showch(zhu_leftpoint_start + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(src - 65)][top[(int)src - 65] - 1]);
                cct_showch(zhu_leftpoint_start + abc[(int)(src - 65)][top[(int)src - 65] - 1] + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, ' ', COLOR_HYELLOW, COLOR_HYELLOW, 1);
                cct_showch(zhu_leftpoint_start + abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1 + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(src - 65)][top[(int)src - 65] - 1]);
            }
        } 
        if (dst > src) {
            /* 将一串字符从左向右移动 */
            for (x = zhu_leftpoint_start + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]); x <= zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]); x++) {
                cct_showch(x, 1, ' ', abc[(int)(src - 65)][top[(int)(src - 65)] - 1], abc[(int)(src - 65)][top[(int)(src - 65)] - 1], 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
                Sleep(100);
                if (x < zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1])) 
                    cct_showch(x, 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
            } //end of for
        }
        if (dst < src) {
            /* 将一串字符从右向左移动 */
            for (x = zhu_leftpoint_start + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]); x >= zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]); x--) {
                cct_showch(x, 1, ' ', abc[(int)(src - 65)][top[(int)(src - 65)] - 1], abc[(int)(src - 65)][top[(int)(src - 65)] - 1], 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
                Sleep(100);
                if (x > zhu_leftpoint_end + (1 + (top[(int)(dst - 65)])) - 1) 
                    cct_showch(x, 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
            } //end of for
        }
        /* 将一串字符从上向下移动 */
        for (y = 1; y <= zhu_line - ( 1+(top[(int)(dst - 65)])); y++) {
            cct_showstr(zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, " ", abc[(int)(src - 65)][top[(int)(src - 65)] - 1], abc[(int)(src - 65)][top[(int)(src - 65)] - 1], 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
            Sleep(300);
            if (y > 2 && y < zhu_line - (1 + (top[(int)(dst - 65)]))) {
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(src - 65)][top[(int)src - 65] - 1]);
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]) + abc[(int)(src - 65)][top[(int)src - 65] - 1], y, ' ', COLOR_HYELLOW, COLOR_HYELLOW, 1);
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]) + abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1, y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(src - 65)][top[(int)src - 65] - 1]);
            }
            if (y >= 1 && y <= 2) 
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(src - 65)][top[(int)(src - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(src - 65)][top[(int)src - 65] - 1] + 1);
        } 
    }
    if (chushi == 56||chushi==57) {
        for (y = zhu_line - (top[(int)(src - 65)] + 1); y > 0; y--) {
            cct_showstr(zhu_leftpoint_start + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, " ", abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
            if (v == 0 || v == 1) {
                Sleep(300);
            }
            else if (v == 2 || v == 3 || v == 4 || v == 5) {
                Sleep(305 - 60 * v);
            }
            if (y > 1 && y <= 2) 
                cct_showch(zhu_leftpoint_start + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
            if (y > 2 && y <= zhu_line - (top[(int)(src - 65)]+1)) {
                cct_showch(zhu_leftpoint_start + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(dst - 65)][top[(int)dst - 65] - 1]);
                cct_showch(zhu_leftpoint_start + abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, ' ', COLOR_HYELLOW, COLOR_HYELLOW, 1);
                cct_showch(zhu_leftpoint_start + abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1 + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(dst - 65)][top[(int)dst - 65] - 1]);
            }
        }
        if (dst > src) {
            /* 将一串字符从左向右移动 */
            for (x = zhu_leftpoint_start + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]); x <= zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]); x++) {
                cct_showch(x, 1, ' ', abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
                if (v == 0 || v == 1) {
                    Sleep(100);
                }
                else if (v == 2 || v == 3 || v == 4 || v == 5) {
                    Sleep(155 - 30 * v);
                }
                if (x < zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]))
                    cct_showch(x, 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
            } //end of for
        }
        if (dst < src) {
            /* 将一串字符从右向左移动 */
            for (x = zhu_leftpoint_start + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]); x >= zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]); x--) {
                cct_showch(x, 1, ' ', abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
                if (v == 0||v==1)
                    Sleep(100);
                else if (v == 2 || v == 3 || v == 4 || v == 5) {
                    Sleep(155 - 30 * v);
                }
                if (x > zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1])) 
                    cct_showch(x, 1, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
            } //end of for
        }
        /* 将一串字符从上向下移动 */
        for (y = 1; y <= zhu_line - ((top[(int)(dst - 65)])); y++) {
            cct_showstr(zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, " ", abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1], 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
            if(v==0||v==1)
                Sleep(300);
            if (v == 2||v==3||v==4||v==5)
                Sleep(305-60*v);
            if (y > 2 && y < zhu_line - ((top[(int)(dst - 65)]))) {
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(dst - 65)][top[(int)dst - 65] - 1]);
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]) + abc[(int)(dst - 65)][top[(int)dst - 65] - 1], y, ' ', COLOR_HYELLOW, COLOR_HYELLOW, 1);
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]) + abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1, y, ' ', COLOR_BLACK, COLOR_WHITE, abc[(int)(dst - 65)][top[(int)dst - 65] - 1]);
            }
            if (y >= 1 && y <= 2) 
                cct_showch(zhu_leftpoint_end + (11 - abc[(int)(dst - 65)][top[(int)(dst - 65)] - 1]), y, ' ', COLOR_BLACK, COLOR_WHITE, 2 * abc[(int)(dst - 65)][top[(int)dst - 65] - 1] + 1);
        } 
        if (v == 0) {
            while (_getch() != '\r')
                ;
        }
    }
}
void gameover(int chushi) {
    cct_setcolor(0, 7);
    if (chushi == 57 || chushi == 56) {
        cct_gotoxy(0, 38);
        cout << "按回车键继续";
    }
    else {
        cout << "\n按回车键继续";
    }
    while (_getch() != '\r')
        ;
    cnt = 1;
    fakemain();
}
void fakemain()
{
    int chushi;
    chushi = my_menu();
    cout << "\n\n\n";
    if (chushi == 49) 
        _solution1(chushi);
    if (chushi == 50) 
        _solution2(chushi);
    if (chushi == 51) 
        _solution3(chushi);
    if (chushi == 52) 
        _solution4(chushi);
    if (chushi == 53) 
        _solution5(chushi);
    if (chushi == 54) 
        _solution6(chushi);
    if (chushi == 55) 
        _solution7(chushi);
    if (chushi == 56) 
        _solution8(chushi);
    if (chushi == 57) 
        _solution9(chushi);
}
void shuzu_chushihua()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            abc[i][j] = 0;
        }
    }
    for (int j = 0; j < 3; j++) {
        top[j] = 0;
    }
}
void cout_chushi_line()
{
    int m;
    for (m = 0; m < 10; m++) {
        if (abc[0][m] > 0) {     //这一层有值
            if (m == 0) {
                cout << setw(2) << setfill(' ') << abc[0][m] << " ";
            }
            else {
                cout << abc[0][m] << " ";
            }
        }
        else {        //这一层没值
            if (m == 0) {
                cout << "   ";
            }
            else {
                cout << "  ";
            }
        }
    }
    cout << "B:";
    for (m = 0; m < 10; m++) {
        if (abc[1][m] > 0) {     //这一层有值
            if (m == 0) {
                cout << setw(2) << setfill(' ') << abc[1][m] << " ";
            }
            else {
                cout << abc[1][m] << " ";
            }
        }
        else {        //这一层没值
            if (m == 0) {
                cout << "   ";
            }
            else {
                cout << "  ";
            }
        }
    }
    cout << "C:";
    for (m = 0; m < 10; m++) {
        if (abc[2][m] > 0) {     //这一层有值
            if (m == 0) {
                cout << setw(2) << setfill(' ') << abc[2][m] << " ";
            }
            else {
                cout << abc[2][m] << " ";
            }
        }
        else {        //这一层没值
            if (m == 0) {
                cout << "   ";
            }
            else {
                cout << "  ";
            }
        }
    }
}
void fupan_src(char src,int o,int m)
{
    if (src == 'A' || src == 'B' || src == 'C') {
        for (o = 0; m > 0; o++) {
            abc[(int)(src - 65)][o] = m;
            m--;
        }
        top[(int)(src - 65)] = o;
    }
}
void shuzu_src_zongxiang_dayin(char src,int g,int hs)
{
    for (g; g >= 1; hs--) {
        if (src == 'A' || src == 'B' || src == 'C') {
            cct_gotoxy((int)(10 * (src - 64)), hs);
            cout << setw(2) << setfill(' ') << g;
            g--;
        }
    }
}
void huapanzi_src(char src,int i)
{
    if (src == 'A' || src == 'B' || src == 'C') {
        for (i = top[(int)(src - 65)]; i > 0; i--) {
            cct_showch(zhu_leftpoint_start + 11 - abc[(int)(src - 65)][i - 1], zhu_line - i, ' ', abc[(int)(src - 65)][i - 1], abc[(int)(src - 65)][i - 1], 2 * abc[(int)(src - 65)][i - 1] + 1);
            Sleep(100);
        }
    }
}