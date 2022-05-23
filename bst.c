#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *left,*right;
};

struct node *root=NULL;

struct node* insert(struct node *temp,int d)
{
  struct node *new;
  new=malloc(sizeof(struct node));
  new->data=d;
  new->left=NULL;
  new->right=NULL;
  
  if(temp==NULL)
  {
    return new;
  }
  if(d<temp->data)
  {
    temp->left=insert(temp->left,d); 
  }
  else
  {
    temp->right=insert(temp->right,d);
  }
  return temp;
}



void preorder(struct node *root)
{
  if(root==NULL)
  {
    return;
  }
  printf("%d \t",root->data);
  preorder(root->left);
  preorder(root->right);
}

void inorder(struct node *root)
{
   if(root==NULL)
   {
     return;
   }
   inorder(root->left);
   printf("%d \t",root->data);
   inorder(root->right);
}    

void postorder(struct node *root)
{
   if(root==NULL)
   {
     return;
   }
   inorder(root->left);
   inorder(root->right);
   printf("%d \t",root->data);
   
}    
int main()
{
  root=insert(root,100);
  root=insert(root,20);
  root=insert(root,11);
  root=insert(root,40);
  root=insert(root,44);
  
  printf("\n");
  inorder(root);
  /*printf("\n");
  postorder(root);
  printf("\n");
  printf("\n");*/
}


  
