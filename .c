#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head,*temp,*n;
void create()
{
head=(struct node *)malloc(sizeof(struct node));
head->data=10;
head->next=NULL;
}
void insert()
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter the value to be added:\n");
scanf("%d",&temp->data);
temp->next=NULL;
n=head;
while(n->next!=NULL)
{
n=n->next;

}n->next=temp;
}
void display()
{
n=head;
while(n!=NULL)
{
 printf("-->%d",n->data);
 n=n->next;
}
printf("-->NULL");
}
void main()
{
create();
insert();
insert();
insert();
display();
}
