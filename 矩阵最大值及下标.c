#include<stdio.h>
int main()
{
	int a[3][4],i,j,max=0,c,d;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
		if(a[i][j]>max){
			max=a[i][j];
			c=i;
			d=j;
		}
		}
	}
	printf("max=%d\n�����ڵ�%d��%d��",max,c+1,d+1);
 } 
