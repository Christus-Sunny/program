#include<stdio.h>
void main()
{
int temp,n,i,j,a[100],min,time=0;
time++;
printf("enter no of elements:");
time++;
scanf("%d",&n);
time++;
printf("enter the elements:");
time++;
time++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
time++;
}
time++;
for(i=0;i<n-1;i++)
{
min=i;
time++;
for(j=i+1;j<n;j++)
{
time++;
if(a[j]<a[min])
{
min=j;
}
}
time++;
if(min!=i)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("Sorted List\n");
time++;
time++;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
time++;
}
printf("space comlexity=%d\n",(6*4)+(n*4));
time++;
printf("time complexity=%d\n",time+1);
time++;
}


