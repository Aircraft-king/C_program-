//����һ���ַ���chas[], ����ֻ������ĸ�ַ��͡�*���ַ�
//������������С�*��ȫ��Ų��chas����ߣ���ĸ�ַ���
//��chas���ұߡ���ɵ���������
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* adjust_str(char* arr) {
	char tmp = 0;
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	assert(arr);
	while (left < right) {
		if (*left == '*') {
			left++;
		}
		if (*right != '*') {
			right--;	
		}
		if (*left != '*') {
			tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
	return arr;
}
int main() {
	char arr[10] = "qjkk**23";
	char*str = adjust_str(arr);
	printf("%s", str);
	return 0;
}
