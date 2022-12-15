#include<stdio.h>
void main()
{
int a[50],b[50],c[100],i,m,n,j,k=0;
printf("\n enter the size array 1");
scanf("%d",&n);
printf("\n Enter the elements ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the size of array 2");
scanf("%d",&m);
printf("\n Enter the elemnts ");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
while(i<m && i<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
}
if(j>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
printf("\n after merging \n");
for(i=0;i<m+n;i++)
{
printf("\n %d",c[i]);
}
}

