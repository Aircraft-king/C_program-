//����һ�����ȹ̶����������� arr�����㽫�������г��ֵ�ÿ���㶼��дһ�飬���������Ԫ������ƽ�ơ�
//
//ע�⣺�벻Ҫ�ڳ��������鳤�ȵ�λ��д��Ԫ�ء�
//
//Ҫ�������������� �͵� ���������޸ģ���Ҫ�Ӻ��������κζ�����

#include<stdio.h>

int* repeat_zero(int* arr,int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		if (arr[i] == 0) {
			int num = sz - i;
			int tmp = sz - 1;
			while (num--) {
				arr[tmp] = arr[tmp - 1];
				tmp = tmp - 1;
			}
			arr[i] = 0;
			break;
		}
	}
	return arr;
}

int main() {
	int arr[5] = { 1,2,0,3,4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *p = repeat_zero(arr, sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", p[i]);
	}	
	return 0;
}