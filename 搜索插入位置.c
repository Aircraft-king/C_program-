#include<stdio.h>
int searchInsert(int nums[], int numsSize, int a){
    int i = 0;
    for(i = 0; i < numsSize-1; i++ ){
    	if(a <= nums[0]){
    		return 0;
		}
		else if(a > nums[numsSize-1]){
			return numsSize;
		}
    	else if(a > nums[i-1]&&a<=nums[i+1]){
    		return i+1;
		}
	}
}

int main(){
	int arr[5] = { 1, 3, 4, 11, 30};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int a = 12;
	printf("%d ",searchInsert( arr, sz, a));
	return 0;
} 
