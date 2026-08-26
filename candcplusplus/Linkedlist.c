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
//typedef struct node
//{
//	int data;
//	struct node* next;
//} node;
//
//node * create(int);
//
//int main()
//{
//	node *Head;
//	int n;
//	Head = NULL; //link list is empty
//	printf("\n no of items");	
//	scanf("%d", &n);
//	Head = create(n);
//	//create function returns the address of first node 
//}
//
//node* create(int n)
//{
//	node *Head, *p;
//	Head = (node*)malloc(sizeof(node));
//	Head->next = NULL;
//	scanf("%d", &(Head->data));
//	p = Head;
//	//insert the remaining nodes
//	for (int i = 1; i < n; i++)
//	{
//		p->next = (node*)malloc(sizeof(node));
//		//new node is inserted as the next node after p
//		p = p->next;
//		scanf("%d", &(p->data));
//		p->next = NULL;
//	}
//	return Head;
//}

//struct Node
//{
//	int data; 
//	struct Node* next;
//};
//
//int main()
//{
//	struct Node* head = NULL;
//	struct Node* second = NULL;
//	struct Node* third = NULL;
//
//	head = (struct Node*)malloc(sizeof(struct Node));
//	second = (struct Node*)malloc(sizeof(struct Node));
//	third = (struct Node*)malloc(sizeof(struct Node));
//
//
//	if (!head || !second || !third)
//	{
//		printf("Memory allocation failed\n");
//		return 1;
//	}
//
//	head->data = 1;
//	head->next = second;
//
//	second->data = 2;
//	second->next = third;
//
//	third->data = 3;
//	third->next = NULL;
//
//	//print linkedlist 
//	struct Node *temp = head;
//	while (temp != NULL)
//	{
//		struct Node *next = temp->next;
//		free(temp);
//		temp = next;
//	}
//
//	return 0;
//
//}


//struct Node
//{
//	int data;
//	struct Node* next;
//};


//struct Node* createnode(int data)
//{
//	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void inserthead(struct Node** head, int data)
//{
//	struct Node* newnode = createnode(data);
//	newnode->next = *head;
//	*head = newnode;
//}
//
//void inserttail(struct Node** head, int data)
//{
//	struct Node* newnode = createnode(data);
//	if (*head == NULL)
//	{
//		*head = newnode;
//		return;
//	}
//
//	struct Node* temp = *head;
//	while (temp->next != NULL)
//	{
//		temp = temp->next;
//	}
//
//	temp->next = newnode;
//}
//
//
//void insertatposition(struct Node** head, int data, int position)
//{
//	struct Node* newnode = createnode(data);
//
//	if (position == 0)
//	{
//		inserthead(head, data);
//		return;
//	}
//
//	struct Node* temp = *head;
//	for (int i = 0; temp != NULL && i < position - 1; i++)
//	{
//		temp = temp->next;
//	}
//
//	if (temp == NULL)
//	{
//		printf("Position is out of range\n");
//		free(newnode);
//		return;
//	}
//	newnode->next = temp->next;
//	temp->next = newnode;
//
//
//}
	

// // C Program for Implementation of Singly Linked List
//#include <stdio.h>
//#include <stdlib.h>
//
//// Define the Node structure
//struct Node {
//    int data;
//    struct Node* next;
//};
//
//// Function to create a new node 
//struct Node* createnode(int data) {
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    newnode->data = data;
//    newnode->next = NULL;
//    return newnode;
//}
//
//// Function to insert a new element at the beginning of the singly linked list
//void inserthead(struct Node** head, int data) {
//    struct Node* newnode = createnode(data);
//    newnode->next = *head;
//    *head = newnode;
//}
//
//// Function to insert a new element at the end of the singly linked list
//void inserttail(struct Node** head, int data) {
//    struct Node* newnode = createnode(data);
//    if (*head == NULL) {
//        *head = newnode;
//        return;
//    }
//    struct Node* temp = *head;
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//    temp->next = newnode;
//}
//
//// Function to insert a new element at a specific position in the singly linked list
//void insertAtPosition(struct Node** head, int data, int position) {
//    struct Node* newnode = createnode(data);
//    if (position == 0) {
//        inserthead(head, data);
//        return;
//    }
//    struct Node* temp = *head;
//    for (int i = 0; temp != NULL && i < position - 1; i++) {
//        temp = temp->next;
//    }
//    if (temp == NULL) {
//        printf("Position out of range\n");
//        free(newnode);
//        return;
//    }
//    newnode->next = temp->next;
//    temp->next = newnode;
//}
//
//// Function to delete the first node of the singly linked list
//void deleteFromFirst(struct Node** head) {
//    if (*head == NULL) {
//        printf("List is empty\n");
//        return;
//    }
//    struct Node* temp = *head;
//    *head = temp->next;
//    free(temp);
//}
//
//// Function to delete the last node of the singly linked list
//void deleteFromEnd(struct Node** head) {
//    if (*head == NULL) {
//        printf("List is empty\n");
//        return;
//    }
//    struct Node* temp = *head;
//    if (temp->next == NULL) {
//        free(temp);
//        *head = NULL;
//        return;
//    }
//    while (temp->next->next != NULL) {
//        temp = temp->next;
//    }
//    free(temp->next);
//    temp->next = NULL;
//}
//
//// Function to delete a node at a specific position in the singly linked list
//void deleteAtPosition(struct Node** head, int position) {
//    if (*head == NULL) {
//        printf("List is empty\n");
//        return;
//    }
//    struct Node* temp = *head;
//    if (position == 0) {
//        deleteFromFirst(head);
//        return;
//    }
//    for (int i = 0; temp != NULL && i < position - 1; i++) {
//        temp = temp->next;
//    }
//    if (temp == NULL || temp->next == NULL) {
//        printf("Position out of range\n");
//        return;
//    }
//    struct Node* next = temp->next->next;
//    free(temp->next);
//    temp->next = next;
//}
//
//// Function to print the LinkedList
//void print(struct Node* head) {
//    struct Node* temp = head;
//    while (temp != NULL) {
//        printf("%d -> ", temp->data);
//        temp = temp->next;
//    }
//    printf("NULL\n");
//}
//
//// Driver Code
//int main() {
//    struct Node* head = NULL;
//
//    inserthead(&head, 10);
//    printf("Linked list after inserting the node:10 at the beginning \n");
//    print(head);
//
//    printf("Linked list after inserting the node:20 at the end \n");
//    inserttail(&head, 20);
//    print(head);
//
//    printf("Linked list after inserting the node:5 at the end \n");
//    inserttail(&head, 5);
//    print(head);
//
//    printf("Linked list after inserting the node:30 at the end \n");
//    inserttail(&head, 30);
//    print(head);
//
//    printf("Linked list after inserting the node:15 at position 2 \n");
//    insertAtPosition(&head, 15, 2);
//    print(head);
//
//    printf("Linked list after deleting the first node: \n");
//    deleteFromFirst(&head);
//    print(head);
//
//    printf("Linked list after deleting the last node: \n");
//    deleteFromEnd(&head);
//    print(head);
//
//    printf("Linked list after deleting the node at position 1: \n");
//    deleteAtPosition(&head, 1);
//    print(head);
//
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//struct Node* createnode(int data)
//{
//	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void insertfirst(struct Node** head, int data)
//{
//	struct Node* newnode = createnode(data);
//	newnode->next = *head;
//	*head = newnode;
//}
//
//void print(struct Node* head)
//{
//	struct Node* temp = head;
//	while (temp != NULL)
//	{
//		printf("%d ->", temp->data);
//		temp = temp->next;
//	}
//
//	printf("NULL\n");
//}
//
//
//int main()
//{
//	struct Node* head = NULL;
//
//	insertfirst(&head, 10);
//	printf("Linkedlist after inserting node\n");
//	print(head);
//}


// // C Program for Implementation of Singly Linked List
#include <stdio.h>
#include <stdlib.h>

//// Define the Node structure
//struct Node {
//    int data;
//    struct Node* next;
//};
//
//// Function to create a new node  	
//struct Node* createnode(int data) {
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    newnode->data = data;
//    newnode->next = NULL;
//    return newnode;
//}
//
//// Function to insert a new element at the beginning of the singly linked list
//void inserthead(struct Node** head, int data) {
//    struct Node* newnode = createnode(data);
//    newnode->next = *head;
//    *head = newnode;
//}
//
//// Function to insert a new element at the end of the singly linked list
//void inserttail(struct Node** head, int data) {
//    struct Node* newnode = createnode(data);
//    if (*head == NULL) {
//        *head = newnode;
//        return;
//    }
//    struct Node* temp = *head;
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//    temp->next = newnode;
//}
//
//
//
//// Function to print the LinkedList
//void print(struct Node* head) {
//    struct Node* temp = head;
//    while (temp != NULL) {
//        printf("%d -> ", temp->data);
//        temp = temp->next;
//    }
//    printf("NULL\n");
//}
//
//// Driver Code
//int main() {
//    struct Node* head = NULL;
//
//    inserthead(&head, 10);
//    printf("Linked list after inserting the node:10 at the beginning \n");
//    print(head);
//
//    printf("Linked list after inserting the node:20 at the end \n");
//    inserttail(&head, 20);
//    print(head);
//
//    printf("Linked list after inserting the node:5 at the end \n");
//    inserttail(&head, 5);
//    print(head);
//
//    return 0;
//}