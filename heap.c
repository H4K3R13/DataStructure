#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int heap[SIZE];
int N=0;


void insert(int item)
{
	int temp,i,p;
	if(N>=SIZE-1)
	{
		printf("Heap full");
		exit(1);
	}
	N=N+1;
	heap[N]=item;
	i=N;
	p=(i-1)/2;
	while(p>=0 && heap[p] < heap[i])
	{
		temp=heap[i];
		heap[i]=heap[p];
		heap[p]=temp;
		i=p;
		p=(p-1)/2;
	}
}

void traverse()
{
	int i;
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",heap[i]);
	}
	printf("\n");
}
int main()
{
	insert(4);
	traverse();
	insert(2);
	traverse();
	insert(1);
	traverse();
	insert(1);
	traverse();
	insert(5);
	traverse();
	
}
