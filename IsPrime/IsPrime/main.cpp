#include<stdio.h>
#include<stdlib.h>//header file
int Prime(int n);
void FindPrime(int low,int high);//function def
int main()
{
	int low,high;
    printf("Please input the boundary of the number:");
    scanf("%d,%d",&low,&high);
    printf("The whole prime between the domain:\n");
    FindPrime(low,high);
	system("pause");
}