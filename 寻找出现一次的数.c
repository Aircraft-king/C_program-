#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

void num_find(int arr[], int sz) {
	int i = 0;
	int j = 0;

	for (i = 0; i < sz; i++) {	
		int a = 0;
		for (j = 0; j < sz; j++) {
			if (arr[i] == arr[j]) {
				a++;
			}
		}
		if (a == 1) {
			printf("%d ",arr[i]);
		}
	}
}
int main() {
	int arr[8] = { 1,1,2,2,3,4,5,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
    num_find(arr, sz);
	system("pause");
	return 0;
}
