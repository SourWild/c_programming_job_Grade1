/* 2151928 信12 唐芊竹 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float q, x;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, z = 0, p = 0, J = 0, F = 0;         //J是角位,F是分位。
	printf("请输入找零值：\n");
	scanf("%f", &q);
	z = (int)q;     //整数部分
	x = q - z;      //小数部分
	if ((z / 50) == 0) {
		a = 0;
		if ((z / 20) == 0) {
			b = 0;
			if ((z / 10) == 0) {
				c = 0;
				if ((z / 5) == 0) {
					d = 0, e = z;
				}
				else if ((z / 5) == 1) {
					d = 1, e = z - 5;
				}
			}
			else if ((z / 10) == 1) {
				c = 1;
				if ((z - 10) / 5 == 0) {
					d = 0, e = z - 10;
				}
				else if ((z - 10) / 5 == 1) {
					d = 1, e = z - 15;
				}
			}
		}
		else {
			if ((z / 20) == 1) {
				b = 1;
				if ((z - 20) / 10 == 0) {
					c = 0;
					if ((z - 20) / 5 == 1) {
						d = 1, e = z - 25;
					}
					else if ((z - 20) / 5 == 0) {
						d = 0, e = z - 20;
					}
				}
				if ((z - 20) / 10 == 1) {
					c = 1;
					if ((z - 30) / 5 == 1) {
						d = 1, e = z - 35;
					}
					else if ((z - 30) / 5 == 0) {
						d = 0, e = z - 30;
					}
				}
			}
			if ((z / 20) == 2) {
				b = 2;
				if ((z - 40) / 5 == 0) {
					d = 0, e = z - 40;
				}
				if ((z - 40) / 5 == 1) {
					d = 1, e = z - 45;
				}
			}
		}
	}
	else if ((z / 50) == 1) {
		a = 1;
		if ((z - 50) / 20 == 0) {
			b = 0;
			if ((z - 50) / 10 == 0) {
				c = 0;
				if ((z - 50) / 5 == 0) {
					d = 0, e = z - 50;
				}
				else if ((z - 50) / 5 == 1) {
					d = 1, e = z - 55;
				}
			}
			else if ((z - 50) / 10 == 1) {
				c = 1;
				if ((z - 60) / 5 == 1) {
					d = 1, e = z - 65;
				}
				else if ((z - 60) / 5 == 0) {
					d = 0, e = z - 60;
				}
			}
		}
		else if ((z - 50) / 20 == 1) {
			b = 1;
			if ((z - 70) / 10 == 0) {
				c = 0;
				if ((z - 70) / 5 == 0) {
					d = 0, e = z - 70;
				}
				if ((z - 70) / 5 == 1) {
					d = 1, e = z - 75;
				}
			}
			else {
				if ((z - 70) / 10 == 1) {
					c = 1;
					if ((z - 80) / 5 == 1) {
						d = 1, e = z - 85;
					}
					else if ((z - 80) / 5 == 0) {
						d = 0, e = z - 80;
					}
				}
				if ((z - 70) / 10 == 2) {
					c = 2;
					if ((z - 90) / 5 == 0) {
						d = 0, e = z - 90;
					}
					else if ((z - 90) / 5 == 1) {
						d = 1, e = z - 95;
					}
				}
			}
		}
	}
	J = (int)(x * 10);//角位
	F = (int)((x + 0.0001) * 100) % 10;//分位
	if ((J / 5) == 0) {
		f = 0, g = J;
	}
	else if ((J / 5) == 1) {
		f = 1, g = J - 5;
	}
	if ((F / 5) == 0) {
		h = 0;
		if ((F / 2) == 0) {
			i = 0, j = F;
		}
		else {
			if ((F / 2) == 1) {
				i = 1, j = F - 2;
			}
			if ((F / 2) == 2) {
				i = 2, j = F - 4;
			}
		}
	}
	else if ((F / 5) == 1) {
		h = 1;
		if ((F - 5) / 2 == 0) {
			i = 0, j = F - 5;
		}
		else {
			if ((F - 5) / 2 == 1) {
				i = 1, j = F - 7;
			}
			if ((F - 5) / 2 == 2) {
				i = 2, j = F - 9;
			}
		}
	}
	p = a + b + c + d + e + f + g + h + i + j;
	printf("共%d张找零，具体如下：\n", p);
	if (a > 0) {
		printf("50元 : %d张\n", a);
	}
	if (b > 0) {
		printf("20元 : %d张\n", b);
	}
	if (c > 0) {
		printf("10元 : %d张\n", c);
	}
	if (d > 0) {
		printf("5元  : %d张\n", d);
	}
	if (e > 0) {
		printf("1元  : %d张\n", e);
	}
	if (f > 0) {
		printf("5角  : %d张\n", f);
	}
	if (g > 0) {
		printf("1角  : %d张\n", g);
	}
	if (h > 0) {
		printf("5分  : %d张\n", h);
	}
	if (i > 0) {
		printf("2分  : %d张\n", i);
	}
	if (j > 0) {
		printf("1分  : %d张\n", j);
	}
	return 0;
}