/* 2151928 唐芊竹 信12 */
#include <iostream>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、整个程序不允许出现任何形式的循环
   --------------------------------------------------------------------- */

   /***************************************************************************
	 函数名称：
	 功    能：将整数n分解后输出
	 输入参数：
	 返 回 值：
	 说    明：1、函数名、形参、返回类型均不准动
			   2、不允许使用64位整数
   ***************************************************************************/
void convert(int n)
{
	if (n == -2147483648) {
		n = -214748364;
		convert(n);
		cout << char('8') << char(' ');
		return;
	}
	else{
		if (n < 0) {
			n = -n;
			cout << char('-') << char(' ');
			convert(n);
			return;
		}
		if (n >= 0) {
			if (n > 9) {
				convert(n / 10);
				cout << char(n % 10 + 48) << char(' ');
			}
			else {
				cout << char(n + 48) << char(' ');
			}
			return;
		}
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
***************************************************************************/
int main()
{
	int n;
	cout << "请输入一个整数" << endl;
	cin >> n;

	convert(n);
	cout << endl;

	return 0;
}