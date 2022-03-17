#include<stdio.h>
#include"ploynomial.c"
int main()
{
  struct node *p=NULL;
  insert(&p,5,5);
  insert(&p,4,4);
  insert(&p,3,2);
  insert(&p,10,0);
  insert(&p,6,8);
  insert(&p,5,7);
  display(p);
}
