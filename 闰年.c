#include<stdio.h>
#include<stdlib.h>
void is_year(int a) 
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		printf("%d��������", a);
	}
	else {
		printf("%d�겻������", a);
	}
}
int main() {
	int year = 0;
	scanf("%d", &year);
	is_year(year);
	system("pause");
	return 0;
}
