/* 2151928 唐芊竹 信12 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、整个程序不允许出现任何形式的循环
   --------------------------------------------------------------------- */

   /***************************************************************************
	 函数名称：
	 功    能：返回n的阶乘
	 输入参数：
	 返 回 值：
	 说    明：函数名、形参、返回类型均不准动
   ***************************************************************************/
int fac(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	else
		return fac(n - 1) * n;
}


/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：完成输入、调用递归函数、输出
***************************************************************************/
int main()
{
	int a, b, c, m;
	printf("计算a!+b!+c!，请输入a,b,c的值(非负整数)\n");
	scanf("%d %d %d", &a, &b, &c);
	m = fac(a) + fac(b) + fac(c);
	if(a>0&&b>0&&c>0){
		printf("%d!+%d!+%d!=%d", a, b, c, m);
	}
	printf("\n");
	return 0;

}
