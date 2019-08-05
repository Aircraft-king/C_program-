#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
	int* a= NULL;
	int i = 0;	
	int j = 0;
	for (i = 0; i < numsSize-1; i++) {
		for (j = i+1 ; j < numsSize; j++) {
			if ( target == nums[i] + nums[j] ) {
				a = (int*)malloc(sizeof(int) * 2);
				a[0] = i;
				a[1] = j;
				return a;
			}
		}
	}
	return 0;
}

int main() {
	int nums[] = { 2 , 7, 11, 15 };
	int target = 17;
	int k = 0;
	int sz = sizeof(nums) / sizeof(nums[0]);
	int* p = twoSum(nums, sz, target);
	for (k = 0; k < 2; k++) {
		printf("%d ", p[k]);
	}
}