#include<stdio.h>
#include"linklistds.c"
int main()
{
  struct node *p;
  p=NULL;
  append(&p,11);
  append(&p,22);
  append(&p,33);
  append(&p,44);
  append(&p,55);
}

