#include<stdio.h>
void main()
{
int i,a[50],n,j,temp;
printf("\n Enter the limit");
scanf("%d",&n);
printf("\n Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

