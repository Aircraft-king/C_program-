//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include<stdio.h>

int digit_sum(unsigned a) {
	int sum = 0;
	int m = 0;
	if(a != 0) {
		m = a % 10;
		a = a / 10;
	    sum = digit_sum(a)+m;
	}
	return sum;
}
int main() {
	unsigned a = 0;
	int b = 0;
	scanf("%d", &a);
	b = digit_sum(a);
	printf("%d", b);
	system("pause");
	return 0;
}
