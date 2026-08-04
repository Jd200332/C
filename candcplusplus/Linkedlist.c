//creating a linkedlist 

#include<stdio.h>
#include<conio.h>

//typedef struct node
//{
//	int data; 
//	struct node *next;
//} node;
//
//
//int main()
//{
//	node *Head, *p;
//
//	int n, x;
//	//no of items to be inserted
//	printf("\n no of items");
//	scanf("%d", &n);
//	//get the first node with its address in the head
//	Head = (node*)malloc(sizeof(node));		
//	//read the data in firstnode 
//	scanf("%d", &Head->data);
//	Head->next = NULL;
//	//head points to the first node while p points to last node 
//	p = Head;
//	//incase of single node 1st and last node are same 
//	//insert the remaining nodes 
//
//	for (int i = 1; i < n; i++)
//	{
//		p->next = (node*)malloc(sizeof(node));
//		//new nnode is inserted as the nwxt node after p
//		p = p->next;
//		p->next = NULL;
//		scanf("%d", &p->data);
//	}
//}


//program to create a linked list through create function 
typedef struct node
{
	int data;
	struct node* next;
} node;

node * create(int);

int main()
{
	node *Head;
	int n;
	Head = NULL; //link list is empty
	printf("\n no of items");	
	scanf("%d", &n);
	Head = create(n);
	//create function returns the address of first node 
}

node* create(int n)
{
	node *Head, *p;
	Head = (node*)malloc(sizeof(node));
	Head->next = NULL;
	scanf("%d", &(Head->data));
	p = Head;
	//insert the remaining nodes
	for (int i = 1; i < n; i++)
	{
		p->next = (node*)malloc(sizeof(node));
		//new node is inserted as the next node after p
		p = p->next;
		scanf("%d", &(p->data));
		p->next = NULL;
	}
	return Head;
}