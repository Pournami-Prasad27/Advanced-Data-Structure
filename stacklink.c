#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int choice =0,val,item;
void push();
void pop();
void display();
struct node
{
  int data;
  struct node *next;
};
struct node *top=NULL;

void main()
{
  int choice,val;
  printf("\n STACK OPERATION USING LINKED LIST");
do
{

  printf("\n1.PUSH\n 2.POP\n 3.DISPLAY\n4.EXIT");
  
  printf("\n Enter your choice:\n");
  scanf("%d",&choice);
switch(choice)
{
case 1: 
       printf("\n Entered the value to be insetered");
       scanf("%d",&val);
       push(val);
       break;
case 2:
       pop();
       break;
case 3:
       display();
       break;
case 4:
      exit(0);
      break;
default:
  printf("\n Enter the valid choice");
  }
}while(choice!=4);
}
void push(int val)
{
 int data;
 struct node *newnode;
 newnode = (struct node*)malloc(sizeof(struct node));
 newnode->data=val;
  newnode->next=NULL;
if(top==NULL)
{
top= newnode;
}
else
{
 newnode->next=top;
 top=newnode;
 printf("\nInserted successflly");
}
}
 void pop()
 {

 if(top==NULL)
 {
 printf("\n Stack is empty");
 }
 else
 { 
  struct node *temp=top;
  printf("%d Deleted element:",temp->data);
  {
  top=temp->next;
  free(temp);
  }
 }
  if(top==NULL)
  {
  printf("Stack is empty");
  }
  else
  {
  struct node *temp=top;
  while(temp->next!=NULL)
  {
  printf("%d",temp->data);
  temp=temp->next;
  }
  if("%d--->NULL",temp->data);
  }
  }
  void display()
  {
  int temp;
  
  if(top==NULL)
  {
  printf("\n Stack is Empty");
  }
  else
  {
  struct node *temp=top;
  printf("Elements in the stack:");
  while(temp->next!=NULL)
  {
  printf("%d-->",temp->data);
  temp=temp->next;
  }
  
  printf("%d-->NULL",temp->data);
  }
  }     
