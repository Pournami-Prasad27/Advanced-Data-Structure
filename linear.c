#include<stdio.h>
void main()
{
int a[50],i,n,item,f=0;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements to be inserted");
scanf("%d",&item);
for(i=0;i<n;i++)
if(a[i]==item)
{
f=1;
break;
}
if(f==1)
{
printf("The elment is found");
}
else
{
printf("Not found");
}
}
