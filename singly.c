#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void insertbegin();
void insertlast();
void insertpos();
void deletebegin();
void deletelast();
void deletepos();
int choice,key;
struct node
{
  int data;
  struct node *LINK;
};
struct node *head=NULL;
void insertbegin()
{
  struct node *ptr;
  ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
  printf("\n No space");
}  
else
{
 printf("\n Enter the element to be inserted:");
 scanf("%d",&ptr->data);
 ptr->LINK=NULL;
 if(head==NULL)
 {
 head=ptr;
 }
 else
 {
 ptr->LINK=head;
 head=ptr;
 }
printf("%d inserted into the list",ptr->data);
}
}
void insertlast()
{
 struct node *ptr,*temp;
 ptr=(struct node*)malloc(sizeof(struct node*));
 ptr->LINK=NULL;
 temp=head;
if(ptr==NULL)
{
 printf("No Space\n");
}
else
{
 while(temp->LINK!=NULL)
 {
 temp=temp->LINK;
 }
 printf("\nEnter the item to be inserted");
 scanf("%d",&ptr->data);
 temp->LINK=ptr;
 printf("%d inserted",ptr->data);
}
}
void insertpos()
{
 int key;
 struct node *temp, *ptr;
 ptr=(struct node*)malloc(sizeof(struct node*));
 ptr->LINK=NULL;
 printf("Enter the value of the node after when the new node inserted");
 scanf("%d",&key);
 temp=head;
while(temp->data!=key)
{
temp=temp->LINK;
if(temp==NULL)
{
break;
}
}
if(temp==NULL)
{
 printf("The %d value not exsit",key);
}
if(temp->data==key)
{
 if(ptr==NULL)
{
printf("\nNo space");
}
else
{
 printf("Enter the element to be inserted");
 scanf("%d",&ptr->data);
 ptr->LINK=temp->LINK;
 temp->LINK=ptr;
 printf("%d Inserted after %d",ptr->data,key);
}
}
}
void deletebegin()
 {
 struct node *temp;
 temp=head;
 head=temp->LINK;
 printf("%d Node deleted",temp->data);
 free(temp);
 }
 void deletelast()
 {
 struct node *temp,*p;
 temp=head;
 while(temp->LINK!=NULL)
 {
 p=temp;
 temp=temp->LINK;
 }
 printf("%d Node deleted",temp->data);
 free(temp);
 p->LINK=NULL;
 }
 void deletepos()
 {
   struct node *temp,*p;
   int key;
   printf("\n Enter the value of the node to be deleted");
   scanf("%d",&key);
   temp=head;
 while(temp->data!=key)
 {
   p=temp;
   temp=temp->LINK;
   if(temp==NULL)
 {
    printf("%d Node deleted",temp->data);
 break;
 }
 }
 if(temp->data==key)
 {
   printf("The deleted node is %d",temp->data);
 if(temp==head)
 {
   p=head;
   head=temp->LINK;
   free(p);
 }
 else
 {
   p->LINK=temp->LINK;
  free(temp);
 }
 }
}
 void search()
 {
 struct node *temp;
 int key,pos=0;
 temp=head;
 printf("\n Enter the element to be searched");
 scanf("%d",&key);
 while(temp->data!=key)
 {
 temp=temp->LINK;
 pos++;
 if(temp==NULL)
 {
 printf("\n The %d value not exist",key);
 break;
 }}
 if(temp->data==key)
 {
 printf("\n %d Is avilable in the location %d",key,pos+1);
 }}
 void display()
 {
 struct node *p;
 if(head==NULL)
 {
 printf("List is empty");
 }
 else
 {
 printf("\n Elements in link list are:");
 p=head;
 }
 while(p!=NULL)
 {
 printf("\t%d",p->data);
 p=p->LINK;
 }
 }
void main()
{
int choice;
printf("\n 1.insertbeg\n2.insertlast\n3.insertposition\n4.deletebegin\n5.deletelast\n6.deletepos\n7.search\n8.display");
do
{
printf("\n Enter your choice");
scanf("%d",&choice);
switch(choice)
{
  case 1:
  insertbegin();
   break;
  case 2: 
  insertlast();
  break;
   case 3:
   insertpos();
   break;
    case 4:
    deletebegin();
    break;
case 5:
    deletelast();
    break;
case 6:
    deletepos();
    break;
case 7:
    search();
    break;
case 8:
    display();
    break;                    
default:
printf("\n enter the valid choice?");
}
}
while(choice!=9);  
} 
 



