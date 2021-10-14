/**********
time:20211014
name:九九乘法表
By LFSW元立
**********




#include<stdio.h>
#include<stdlib.h>//调用system的头文件
main()
{int i,j,result;
for(i=1;i<10;i++)

{for(j=1;j<10;j++)

{result=i*j;
printf("%d*%d=%-3d",i,j,result);//-3用于对齐
}
printf("\n");
}
system("pause"); } //暂停
