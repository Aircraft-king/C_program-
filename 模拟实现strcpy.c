#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//3.Ä£ÄâÊµÏÖstrcpy
char* my_strcpy(char* a1, const char* a2) {
	char* ret = a1;
	assert(a1 != NULL);
	assert(a2 != NULL);
	while (*a1++ = *a2++) {
		;
	}
	return ret;
}

int main() {
	char arr1[11] = "\0";
	char arr2[11] = "abcdefghij";
	char* a = my_strcpy(arr1, arr2);
	printf("%s", a);
	system("pause");
	return 0;
}
