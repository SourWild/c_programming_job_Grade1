/* 2151928 ÐÅ12 ÌÆÜ·Öñ */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int j, s, m;
	for (s = 2; s <= 1000; s += 1) {
		for (j = 1, m = 0; j < s; j++) {
			if (s % j == 0) {
				m += j;
			}
		}
		if (s == m) {
			printf("%d,its factors are ", s);
			for (j = 1; j < s; j += 1) {
				if (s % j == 0) {
					if (j < s / 2) {
						printf("%d,", j);
					}
					else {
						printf("%d\n", j);
					}
				}
			}
		}
	}
	return 0;
}
