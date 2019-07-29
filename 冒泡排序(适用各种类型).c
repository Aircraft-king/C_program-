#include<stdio.h>
#include<stdlib.h>
void Swap(void*p1, void*p2, int winth) {
	int i = 0;
	for (i = 0; i < winth; i++) {
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}

int compare(const void * a, const void * b)
{
	return (*(char*)a - *(char*)b);
}

void bul_sort(void* a, int sz, int winth,int(*p)(void* ,void* )) {
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
        int j = 0;
	    for (j = 0; j < sz - i - 1; j++) {
			if (compare((char*)a+j*winth,(char*)a+(j+1)*winth) < 0) {
				Swap((char*)a + j * winth, (char*)a + (j + 1)*winth,winth);
			}
	     }
	}
}
void test() {
	char arr[] = "hduihauisczxjk";
	int sz = sizeof(arr) / sizeof(arr[0]);
	bul_sort(arr, sz, sizeof(arr[0]),compare);
	printf("%s", arr);
}

int main() {
	test();
	return 0;
}
