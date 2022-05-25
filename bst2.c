#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *left,*right;
};

struct node *root=NULL;

void insert(int value)
{
  struct node *temp,*parent;
  int flag=0;
  temp=root;
  while(temp!=NULL && flag==0);
  {
    if(value<temp->data)
    {
      parent=temp;
      temp=temp->data;
    }
    else if(value>temp->data)
    {
      parent=temp;
      temp=temp->right;
    }
    else
    {
      flag=1;
      printf("\n Value already exists\n");
      exit(1);
    }
  }
  if(temp == NULL)
  {
    new=malloc(sizeof(struct node));
    new->data=value;
    new->


int main()
{
  insert(50);
  insert(50);
  insert(50);
  insert(50);
  insert(50);
  insert(50);
  insert(50);
}
