//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
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
	//���ɣ��ȵ���������2*money-1��
	count= 2 * money - 1;
	printf("%d\n", count1);
	printf("%d\n", count);
	system("pause");
	return 0;
}
