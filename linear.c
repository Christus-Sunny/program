#include<stdio.h>
void main()
{
int n,i,count=0,x,a[100],time=0;
time=time+2;
printf("enter no of elements in array:");
time++;
scanf("%d",&n);
time++;
printf("enter the elements:");
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
}
time++;
printf("enter element to be searched:");
time++;
scanf("%d",&x);
time++;
for(i=0;i<n;i++)
{
time++;
time++;
if (a[i]==x)
{
count++;
printf("element is found at %d\n:",i+1);
}
}
if(count>0)
printf("\n the element is found %d times\n",count);
else 
printf("element is not found:");
time++;
printf("space comlexity=%d\n",(5*4)+(n*4));
time++;
printf("time complexity=%d\n",time+1);
}
