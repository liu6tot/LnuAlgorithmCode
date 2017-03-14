int Partation(int n,int m)
{
	if(m==1||n==1) return 1;
	if(m>n) return Partation(n,n);
	if(m==n) return Partation(n,n-1)+1;
	return Partation(n,m-1)+Partation(n-m,m);
}