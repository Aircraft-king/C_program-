//给你一个长度固定的整数数组 arr，请你将该数组中出现的每个零都复写一遍，并将其余的元素向右平移。
//
//注意：请不要在超过该数组长度的位置写入元素。
//
//要求：请对输入的数组 就地 进行上述修改，不要从函数返回任何东西。

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