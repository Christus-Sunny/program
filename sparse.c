#include<stdio.h>
void main()
{
int sparse[10][10],i,j,k=1,r,c,b[10][10];
printf("enter no of rows and coloumns:\n");
scanf("%d%d",&r,&c);
printf("enter matrix elements:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&sparse[i][j]);
}
}
printf("entered matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",sparse[i][j]);
}
printf("\n");
}
k=1;
b[0][0]=r;
b[0][1]=c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(sparse[i][j]!=0)
{
b[k][0]=i;
b[k][1]=j;
b[k][2]=sparse[i][j];
k++;
}
}
}
b[0][2]=k-1;
printf("sparse matrix representation:\n");
for(i=0;i<k;i++)
{
printf("%d\t %d\t %d\t   \n",b[i][0],b[i][1],b[i][2]);
}
}
