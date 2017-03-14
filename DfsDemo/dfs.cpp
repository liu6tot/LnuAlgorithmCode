#include<stdio.h>
int a[10],book[10],n,num;//Global Varaibles
void dfs(int step)
{  
	int i;
	if(step==n+1)// Facing the n+1th box,that 
		//means prior n boxes are filled
	{//Output an arrangement
		for(i=1;i<=n;i++)
		{
			printf("%d",a[i]);
		 
		}
		    printf("\n");
			num++;
		    return;// return the last point that call dfs()
		
	}
	for(i=1;i<=n;i++)
	{//judging the card in hand
		if(book[i]==0)
		{ 
			a[step]=i;
			book[i]=1;
			dfs(step+1);//calling dfs() in step+1th
			book[i]=0;// card[i] in hand again
		}
	
	}
	return;
}
int main()
{
	printf("please input the number for the boxes and cards:(1 to 9)");
	scanf("%d",&n);//n is from 1 to 9
	dfs(1);//in 1 box first
	printf("There r %d soluntions",num);
	getchar();getchar();
	return 0;
}
