/* 学号 班级 姓名 */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
		允许   ：1、按需增加一个或多个函数，但是所有增加的函数中不允许任何形式的循环
				 2、定义符号常量
				 3、定义const型变量

		不允许 ：1、定义全局变量
   ----------------------------------------------------------------------------------- */


   /***************************************************************************
	 函数名称：
	 功    能：打印菱形
	 输入参数：
	 返 回 值：
	 说    明：
   ***************************************************************************/
void print_char(char start_ch, int n,char end_ch)    //打印一行的字符
{
	if (n == 1) {
		cout << 'A';
	}
	cout << char(n + 64);
	print_char(start_ch, n - 1,end_ch);
	cout << char(n + 64);
}
void print_blank(char start_ch, int n, char end_ch)   //打印一行的空格
{
	int kongge;
	kongge = end_ch - n;
	cout << setw(1*(long long int)(kongge))<< ' ' << endl;

}
void print_row(char start_ch, int n ,char end_ch)     //打印一行
{
	print_blank(start_ch, n, end_ch);
	print_char(start_ch, n, end_ch);
	cout << endl;
	if (n < (int)end_ch) {
		print_row(start_ch, n+1, end_ch);
	}
}
void print_rowdown(char start_ch, int n, char end_ch)     //打印一行down
{
	print_blank(start_ch, n, end_ch);
	print_char(start_ch, n, end_ch);
	cout << endl;
	if (n < (int)end_ch && n>1)
		print_rowdown(start_ch, n-1, end_ch);
	
}

void print_diamond(char start_ch, char end_ch)
{
	int s, e, n;
	s = 1;
	n = 1;
	e = (int)end_ch - 64;
	print_row(s, n, e);
	n = e-1;
	print_rowdown(s, n - 1, e);
}
	

	/* 按需实现，函数中不允许任何形式的循环，但允许定义静态局部变量 */


/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数中两处...允许修改，其余位置不准修改
***************************************************************************/
int main()
{
	char end_ch;

	/* 键盘输入结束字符(仅大写有效) */
	cout << "请输入结束字符(A~Z)" << endl;
	end_ch = getchar();
	/* 菱形(中间为A) */
	cout << setw(2 * ((long long int)(end_ch) - 64) - 1) << setfill('=') << '=' << endl;/* 按菱形最大宽度输出=(不允许用循环) */
	cout << "菱形(" << end_ch << "->A)" << endl;
	cout << setw(2 * ((long long int)(end_ch) - 64) - 1) << setfill('=') << '=' << endl;/* 按菱形最大宽度输出=(不允许用循环) */
	print_diamond('A', end_ch);
	cout << endl;
	return 0;
}