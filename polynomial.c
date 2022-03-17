#include<stdio.h>
#include<stdlib.h>
struct node
{
  float coeff;
  int exp;
  struct node *next;
};

void insert(struct node **h,float c,int e)
{
  struct node *temp,*new;
  temp=*h;
  new=malloc(sizeof(struct node));
  new->exp=e;
  new->coeff=c;
  if(temp==NULL)
  {
    new->next==NULL;
    *h=new;
  }
  else
  {
    while(temp->next!=NULL && e < temp->next->exp)
    {
      temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
  }
}

void display(struct node *h)
{
  struct node *temp=h;
  while(temp!=NULL)
  { 
    if(temp->exp!=0)
    {
      printf("%.1fx^%d",temp->coeff,temp->exp);
    }
    else
    {
      printf("%.1f",temp->coeff);
    }
    
    if(temp->next!=NULL)
    {
      printf(" + ");
    }
    temp=temp->next;
  } 
  printf("\n");  

}      



