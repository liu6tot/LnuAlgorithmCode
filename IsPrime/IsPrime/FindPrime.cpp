#include<stdio.h>
int Prime(int n);
void FindPrime(int low,int high)
{
int i;
for(i=low;i<=high;i++)
if(Prime(i))
printf("%d\t",i);
}