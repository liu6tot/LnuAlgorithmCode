#include <stdio.h>
#include <stdlib.h>
int check(int i,int j,int (*Q)[4]);

void queen(int j,int (*Q)[4])//Dropping Function queen
{
	int i,k;
	if(j==4)   //judging the solution end
	{
		for(i=0;i<4;i++)//Output the proper result
		{
			for(k=0;k<4;k++) printf("%d ",Q[i][k]);
			printf("\n");
			//getchar();
			//return;
		}
	}
	for(i=0;i<4;i++)
	{
		if(check(i,j,Q))
		{
			Q[i][j]=1;// Dropping Mark
			queen(j+1,Q);
			Q[i][j]=0;// Cutting Branch
		}
	}
}

int check(int i,int j,int (*Q)[4])
{
	int s,t;
	for(s=i,t=0;t<4;t++)
		if(Q[s][t]==1 && t!=j) return 0;//Juding line position

	for(t=j,s=0;s<4;s++)
		if(Q[s][t]==1 && s!=i) return 0;//Juding column position

	for(s=i-1,t=j-1;s>=0 && t>=0;s--,t--)
		if(Q[s][t]==1) return 0;//Judging left-up pos

	for(s=i+1,t=j+1;s<4 && t<4; s++,t++)
		if(Q[s][t]==1) return 0;//Juding right-down 

	for(s=i-1,t=j+1;s>=0 && t<4;s--,t++)
		if(Q[s][t]==1) return 0;

	for(s=i+1,t=j-1;s<4 && t>=0;s++,t--)
		if(Q[s][t]==1) return 0;

	return 1;
}

void main()
{
	int Q[4][4];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			Q[i][j]=0;  
	} //Initialization
	queen(0,Q);
	getchar();
}
