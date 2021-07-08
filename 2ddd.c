#include<stdio.h>
int main()
{
	int arr[3][3];// ={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,r;
	printf("Enter the number:");
	scanf("%d",&r);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("arr[%d][%d] =  %d\n",i,j,arr[i][j]);
		printf("\n");
	}
	
}
