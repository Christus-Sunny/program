#include<stdio.h>
void main()
{
int i,n,search,l,r,mid,a[100],c=0;
c=c+1;
printf("Enter the no. of elements");
c++;
scanf("%d",&n);
c++;
printf("enter elements in order");
c++;
c++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c++;
c++;
}
printf("Enter the number to be searched");
c++;
scanf("%d",&search);
c++;
l=0;
c++;
r=n-1;
c++;
c++;
while(l<=r)
{
mid=(l+r)/2;
c++;
c++;
 if(a[mid]<search)
 {
 l=mid+1;
 c++;
 }
 else if(a[mid]==search)
 {
c++;
 printf("The number is found at %d", mid);
 break;
 }
 else if(a[mid]>search)
 r=mid-1;
c++;
}
c++;
if(l>r)
{
c++;
printf("The no is not found");
c++;
}
printf("\nspace comlexity=%d",(5*4)+(n*4));
c++;
c++;
printf("time complexity=%d\n",c++);
}
