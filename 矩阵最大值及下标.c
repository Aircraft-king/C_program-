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
	printf("max=%d\n此数在第%d行%d列",max,c+1,d+1);
 } 
