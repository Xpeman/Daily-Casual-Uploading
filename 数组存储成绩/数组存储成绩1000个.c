#include<stdio.h>
int main()
{
	int score[10];
	int i=0;
	char ch;
	
	for(i=0;i<=9;i++)
	{
		printf("成绩%d：",i+1);
		scanf("%d",&score[i]);
		if(scanf("%c",&ch)=='y')
		{
			printf("\n所有成绩为："); 
			for(i=0;i<=9;i++)
			{
				printf("%d\t",score[i]);
			}
	
		}
		
	}
	printf("\n所有成绩为："); 
	for(i=0;i<=9;i++)
	{
		printf("%d\t",score[i]);
	}
	
	return 0;
}
