//给定一个字符串chas[], 其中只含有字母字符和“*”字符
//，现在想把所有“*”全部挪到chas的左边，字母字符移
//到chas的右边。完成调整函数。
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
