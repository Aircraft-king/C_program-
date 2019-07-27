#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//4.Ä£ÄâÊµÏÖstrcat
char* my_strcat(char* s1, char* s2) {
	char* ret = s1;
	while (*s1) {
    *(s1+strlen(s1))=*s2;
	  s1++;
	  s2++;
	}
	return ret;
}
int main() {
	char arr[80] = "hello ";
	char arr1[10] = "air";
	char*a = my_strcat(arr, arr1);
	printf("%s", a);
	system("pause");
	return 0;
}
