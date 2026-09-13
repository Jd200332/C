//#include <stdio.h>
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//
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
//
//}
//
//
//void tail(struct Node** head, int data)
//{
//	struct Node* newnode = createnode(data);
//	if (*head == NULL)
//	{
//		*head = newnode;
//		
//	}
//	struct Node* temp = *head;
//	while (temp->next != NULL)
//	{
//		temp = temp->next;
//	}
//	temp->next = newnode;
//
//}
//
//void insertposition(struct Node** head, int data, int position)
//{
//	struct Node* newnode = createnode(data);
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
//		std::cout << "position out of range\n";
//		free(newnode);
//		return;
//	}
//
//	newnode->next = temp->next;
//	temp->next = newnode;
//}
//
//void print(struct Node* head)
//{
//	struct Node* temp = head;
//	while (temp != NULL)
//	{
//		std::cout  << temp->data << " -> ";
//		temp = temp->next;
//	}
//
//	std::cout << "NULL\n";
//}
//
//int main()
//{
//	struct Node* head = NULL;
//
//	inserthead(&head, 10);
//	std::cout << "This is the head of linkedlist\n";
//	print(head);
//
//
//	std::cout << "This is the tail\n";
//	tail(&head, 20);
//	print(head);
//
//	tail(&head, 30);
//	print(head);
//
//
//	insertposition(&head, 25, 2);
//	print(head);
//
//	return 0;
//}