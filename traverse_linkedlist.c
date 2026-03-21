#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;  // pointer to next variable
 };
struct node* createnode (int data)
{
    struct node*a;
    struct node*b;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
   a->data=20;
   a->next=b;
   b->data=30;
   b->next=NULL;
   return a;
}
void traverse(struct node*head)
{
   struct node* temp;
   temp=head;
   while(temp!=NULL)
   {
      printf("%d ->",temp->data);
      temp=temp->next;
   }

}
int main()
{
   int data=20;
  struct node* head=createnode(data);
   traverse(head);
}