//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
