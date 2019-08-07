#include<stdio.h>
#include<assert.h>
char* my_strstr(char* str1, char* str2){
	assert(str1);
	assert(str2);
	if (*str2 == '\0'){
		return NULL;
	}
	char* cp = str1;
	while (*cp){
		char* s1 = cp;
		char* s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2)){
			s1++;
			s2++;
		}
		if (*s2 == '\0'){
			return cp;
		}
		cp++;
	}
}
int main(){
	char a[1024] = "abcABCfyt";
	char b[1024] = "cABC";
	printf("%s", my_strstr(a, b));
	return 0;
}
