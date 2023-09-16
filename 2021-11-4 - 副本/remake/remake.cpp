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

void kongge(char start_ch, char end_ch)
{
	int kongge;
	kongge = end_ch - start_ch;
	cout <<setw(kongge) << " ";
	//cout << setw(1 * (long long int)(kongge)) << ' ';
}

void zimu(char start_ch, char end_ch)
{
	cout <<end_ch;
	if (end_ch - start_ch > 0) {
		zimu(start_ch, char(end_ch - 1));
		cout << end_ch;
	}

}

   /***************************************************************************
	 函数名称：
	 功    能：打印菱形
	 输入参数：
	 返 回 值：
	 说    明：
   ***************************************************************************/
void print_diamond(char start_ch, char end_ch)
{

	char zhongzhi = start_ch;
	//kongge(start_ch, start_ch);
	if (zhongzhi == start_ch) {
		zimu(start_ch, zhongzhi);
		zhongzhi++;
	}
	zimu(start_ch, zhongzhi);
	if (zhongzhi < end_ch&&zhongzhi>start_ch) {
		zimu(start_ch, zhongzhi++);
	}
	/*if (start_ch < end_ch)
		print_diamond(start_ch, start_ch + 1);
	cout<<endl;
	/* 按需实现，函数中不允许任何形式的循环，但允许定义静态局部变量 */
}

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
	
	cout << "菱形(" << end_ch << "->A)" << endl;
	print_diamond('A', end_ch);
	cout << endl;

	return 0;
}