#include<stdlib.h>
#include<stdio.h>
int Partation(int n,int m);
int main()
{
	int n,number;
	printf("Please input an integer for partation\n");
	scanf("%d",&n);
    number=Partation(n,n);
	printf("The division number of %d is %d\n",n,number);
	system("pause");
}