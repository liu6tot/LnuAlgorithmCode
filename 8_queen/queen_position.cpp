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
  printf("  高斯八皇后问题的解为：\n");
  for(a=12345678;a<=87654321;a=a+9)  // 步长为9枚举8位数 
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
          if(f[i]!=1) {t=1;break;}      //  数字1--8出现不为1次，返回  
          if(t==1) continue;
     for(k=1;k<=7;k++)                 
       for(j=k+1;j<=8;j++)
        if(abs(g[j]-g[k])==j-k)      //  同处在45度斜线上，返回
              {t=1;k=7;break;}
        if(t==1) continue;
        s++;                        	//  输出8皇后问题的解 
     printf("%d  ",a);
     if(s%6==0) printf("\n");
     }
  finish = clock();
  duration = (double)(finish - start)/CLOCKS_PER_SEC;
  printf("the elapsed time is %f",duration);
  printf("\n 高斯八皇后问题共有以上%d个解。\n",s);
  }
