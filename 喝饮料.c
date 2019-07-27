//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main() {
	int money = 20;
	int count1 = money;
	int count = 0;
	int bott = count1;
	while (bott >1) {
		count1 += bott/ 2;
		if (bott % 2 == 0) {
			bott /= 2;
		}
		else {
			bott=bott / 2 + 1;
		}
	}
	//规律：喝的数量等于2*money-1；
	count= 2 * money - 1;
	printf("%d\n", count1);
	printf("%d\n", count);
	system("pause");
	return 0;
}
