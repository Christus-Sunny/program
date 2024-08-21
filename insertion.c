#include<stdio.h>
void main()
{
int temp,n,i,j,a[100],min,time=0;
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
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
time++;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
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

