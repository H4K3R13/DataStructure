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
  struct node *temp,*parent,*new;
  int flag=0;
  temp=root;
  while(temp!=NULL && flag==0)
  {
    if(value<temp->data)
    {
      parent=temp;
      temp=temp->left;
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
    new->left = NULL;
    new->right = NULL;
    if(root==NULL)
    {
  		root = new;
  	    return;
    }
	if(parent->data<value)
	{
		parent->right=new;
	}
	else
	{
		parent->left = new;
	}
  }
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
	
}
void search(int key)
{	
	struct node *temp = root;
	int flag=0;
	while(temp!=NULL && flag==0)
  {
    if(key<temp->data)
    {
      temp=temp->left;
    }
    else if(key>temp->data)
    {
      temp=temp->right;
    }
    else
    {
      flag=1;
    }
  }
  if(flag == 1)
  {
  	printf("\nKey %d found\n",key);
  }
  else
  {
  	printf("\nKey %d is not found\n",key);
  }
}

void delete(int key)
{
	struct node *temp,*parent,*succesor;
	int flag = 0,delete_data;
	temp = root;
	while(temp!=NULL && flag==0)
    {
     	if(key<temp->data)
    	{
     	 parent=temp;
     	 temp=temp->left;
    	}
    	else if(key>temp->data)
   	 	{
    	  parent=temp;
    	  temp=temp->right;
    	}
    	else
   	    {
      		flag=1;
   	    }
    }
    if(flag == 0)
    {
    	printf("\nKey does not exist\n");
    	return;
    }
    if(temp->left == NULL && temp->right == NULL)
    {
    	if(parent->left == temp)
    	{
    		parent->left==NULL;
    	}
    	else
    	{
    		parent->right==NULL;
    	}
    	free(temp);
    }
    
    else if(temp->left!=NULL && temp->right!=NULL)
    {
    	successor = succ(temp);
    	delete_data = successor->data;
    	delete(delete_data);
    	temp->data=delete_data;
    }
    else
    {
    	if(parent->left==temp)
    	{
    		if(temp->left!=NULL)
    		{
    			parent->left = temp->left;
    		}
    		else
    		{
    			parent->left = temp->right;
    		}
    	}
    	else if(parent->right==temp)
    	{
    		if(temp->left != NULL)
    		{
    			parent -> right =temp->left;
    		}
    		else
    		{
    			parent->rigt=temp->right;
    		}
    	}
    	free(temp);
    }
  
}

struct node *succ(struct node *t)
{
	struct node *temp;
	temp = t->right;
	if(temp != NULL)
	{
		while(temp->left !=NULL)
		{
			temp = temp->left;
		}
	} 
	return temp;
}
int main()
{
  insert(50);
  insert(30);
  insert(10);
  insert(90);
  insert(70);
  insert(60);
  inorder(root);
  search(60);
  search(99);
  delete(50);
  inorder(root);
}

