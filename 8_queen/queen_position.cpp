#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
  void main()
  {int a,i,j,k,s,t,x,y,f[9],g[9];
  clock_t start,finish;
  double duration;
  start = clock();
  Sleep(1);
  s=0;
  printf("  ��˹�˻ʺ�����Ľ�Ϊ��\n");
  for(a=12345678;a<=87654321;a=a+9)  // ����Ϊ9ö��8λ�� 
    {
		y=a;
        for(i=1;i<=8;i++) f[i]=0;//Initial array f
        for(k=1;k<=8;k++)
            { 
				x=y%10;//Separating the digit of a
				f[x]++;
                g[k]=x;//store the separated number in g[k]
			    y=y/10;    //  paodiaogewei  
            }
        for(t=0,i=1;i<=8;i++)
          if(f[i]!=1) {t=1;break;}      //  ����1--8���ֲ�Ϊ1�Σ�����  
          if(t==1) continue;
     for(k=1;k<=7;k++)                 
       for(j=k+1;j<=8;j++)
        if(abs(g[j]-g[k])==j-k)      //  ͬ����45��б���ϣ�����
              {t=1;k=7;break;}
        if(t==1) continue;
        s++;                        	//  ���8�ʺ�����Ľ� 
     printf("%d  ",a);
     if(s%6==0) printf("\n");
     }
  finish = clock();
  duration = (double)(finish - start)/CLOCKS_PER_SEC;
  printf("the elapsed time is %f",duration);
  printf("\n ��˹�˻ʺ����⹲������%d���⡣\n",s);
  }
