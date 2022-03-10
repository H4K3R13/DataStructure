#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void traverse(struct node *p);
void append(struct node **q,int k)
{
  struct node *temp,*r;
  if(*q==NULL)
  {
    temp=malloc(sizeof(struct node));
    temp->data=k;
    temp->next=NULL;
    *q=temp;
  }
  else
  {
    temp=*q;
    while(temp!=NULL)
    {
      temp=temp->next;
    }
    r=malloc(sizeof(struct node));
    r->data=k;
    r->next=NULL;
    temp->next=r;
  }
void traverse(struct node *p)
{
  while(p!=NULL)
  {
    printf("%d",p->data);
    p=p->next;
  }
}

}



