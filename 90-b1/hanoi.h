/* ��12 2151928 ��ܷ�� */
#pragma once

/* ------------------------------------------------------------------------------------------------------

     ���ļ����ܣ�
	1��Ϊ�˱�֤ hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp ���໥���ʺ����ĺ�������
	2��һ�����ϵ�cpp���õ��ĺ궨�壨#define����ȫ��ֻ����const����������������
	3�����Բο� cmd_console_tools.h ��д���������Ķ�����ᣩ
   ------------------------------------------------------------------------------------------------------ */
int my_menu();
void _solution1(int chushi);
void _solution2(int chushi);
void _solution3(int chushi);
void _solution4(int chushi);
void _solution5(int chushi);
void _solution6(int chushi);
void _solution7(int chushi);
void _solution8(int chushi);
void _solution9(int chushi);
void gameover(int chushi);
void fakemain();
void shuzu_chushihua();
void cout_chushi_line();
void fupan_src(char src, int o, int m);
void shuzu_src_zongxiang_dayin(char src, int g, int hs);
void huapanzi_src(char src, int i);
void hanoi(int n, char src, char tmp, char dst,int chushi);//�ݹ麯��
void shuru(char* x, char* y, char* z,int *cengshu);
void shuchu(int n, char src, char tmp, char dst, int chushi);
void shuchu_hengxiang(int n, char src, char tmp, char dst, int chushi);
void shuchu_zongxiang(int n, char src, char tmp, char dst, int chushi);
void huazhuzi(char src, char dst, int n, int chushi);
void yidong(char src, char dst, int chushi,int v);
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
