#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k;
	int icount=0;
	printf("Distributing the books:\n");

	for(i=1;i<=3;i++)
		for(j=i+1;j<=5;j++)
			for(k=j+1;k<=5;k++)
				{
					icount=icount+6;
					printf("(%d,%d,%d)",i,j,k);
					printf("(%d,%d,%d)",i,k,j);
				}
				printf("\n There r %d solutions \n",icount);
system("pause");
}