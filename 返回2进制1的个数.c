#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
// ���� 1��λ�� 
//}

int count_one_bits(unsigned int value) {
	int count = 0;
	while (value) {
		if (value % 2 == 1) {
			count++;
		}
		value /= 2;
	}
	return count;
}
int main() {
   unsigned int value = 0;
	scanf("%d", &value);
	printf("%d��1",count_one_bits(value));
	system("pause");
	return 0;
}
