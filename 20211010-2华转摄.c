/**********
time:20211010-2
name:华转摄
By LFSW元立
**********/



#include<stdio.h>
int main(void)
{
int F=0;//定义华氏度F
printf("现在温度F");
scanf("%d",&F);
int C=5*(F-32)/9;//定义摄氏度C
printf("F=%d,C=%d\n",F,C);
return 0;
}