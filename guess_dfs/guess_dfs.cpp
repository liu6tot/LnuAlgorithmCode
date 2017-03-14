#include<stdio.h>
#include<time.h>// including the time lib
#include<windows.h>
int a[10],book[10],totl=0;//global variables for both main and dfs

void guess_dfs(int step)
{
	int i;
    if(step==10)// Facing the n+1th box,that means prior n boxes are filled
	{    //Judging the condition
		if(a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]
		   ==a[7]*100+a[8]*10+a[9])
		{ totl++;
		  printf("%d%d%d+%d%d%d=%d%d%d\n",
			  a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		 //Output one of the results
		}
		  return;// return the last point that call guess_dfs()
		
	}

	for(i=1;i<=9;i++)
	{
		if(book[i]==0)
		{
			//Dropping the number
			a[step]=i;
			book[i]=1;
			guess_dfs(step+1);
            book[i]=0;
		}
	}
	return;
}

int main()
{    clock_t start,end;// time type declaration
     double duration;
     start = clock();
	 Sleep(1);//balancing the time err
     guess_dfs(1);//in the 1st square
	 end = clock();
	 duration = (double)(end - start)/CLOCKS_PER_SEC;
	 printf("total=%d and processing time is:%f\n",
		 totl/2,duration);
     getchar();
	 return 0;
}