#include<stdio.h>
int stack[50],choice,n,x,top=-1,i;
void push();
void pop();
void display();
void main()
{
printf("Enter the size osf stack[MAX=100]:");
scanf("%d",&n);
printf("\n STACK OPERATION USING ARRAY");
printf("\n1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
do
{
printf("\n Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
     push();
break;
case 2:
     pop();
break;
case 3:
     display();
break;
default:
printf("Invalid");
}
}while(choice!=4);
}
void push()
{
if(top>=n-1)
{
printf("overflow");
}
else
{
printf("\n Enter the value to be inserted \n");
scanf("%d",&x);
top++;
stack[top]=x;
}}
void pop()
{
if(top<=-1)
{
printf("\n underflow");
}
else
{
printf("\n Enter the value to be dltd %d \n",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\nthe element in stack\n");
for(i=top;i>=0;i--)
{
printf("%d \t",stack[i]);
}}
else
{
printf("\nstack is empty\n");
}
}

