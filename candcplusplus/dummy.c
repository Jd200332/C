#include<stdio.h>
#include<stdlib.h>	
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
//void inserthead(struct Node** head, int data)
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
//		printf("%d->", temp->data);
//		temp = temp->next;
//	}
//
//	printf("NULL\n");
//}
//
//int main()
//{
//	struct Node* head = NULL;
//
//	inserthead(&head, 10);
//	inserthead(&head, 20);
//	printf("Linkedlist after inserting node\n");
//	print(head);
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int search(int arr[], int n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			return i;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 2, 3, 4, 10, 40 };
//	int x = 10;
//	int n = 5;
//
//	int result = search(arr, n, x);
//
//	if (result == -1)
//	{
//		printf("Element is not present in array");
//	}
//	else
//	{
//		printf("Element is present %d\n", result);
//	}
//	return 0;
//}



//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int x = 49;
//	int y = 585;
//
//	swap(&x, &y);	
//	printf("Value is x=%d, y=%d", x, y);
//
//	return 0;
//}


struct Node
{
	int data;
	struct Node* next;
};

struct Node* createnode(int data)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = data;
	newnode->next = NULL;

	return newnode;
}


void inserthead(struct Node** head, int data)
{
	struct Node* newnode = createnode(data);
	newnode->next = *head;
	*head = newnode;
	
}

void deletehead(struct Node** head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
		return;
	}

	struct Node* temp = *head;
	*head = temp->next;
	free(temp);
}

void insertheadagain(struct Node** head, int data)
{
	struct Node* newnode = createnode(data);

	newnode->next = *head;
	*head = newnode;
}


void inserttail(struct Node** head, int data)
{
	struct Node* newnode = createnode(data);
	if (*head == NULL)
	{
		*head = newnode;
		return;
	}

	struct Node* temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
}

void deletetail(struct Node** head)
{
	if (*head == NULL)
	{
		printf("List is empty\n");
		return;
	}

	struct Node* temp = *head;
	if (temp->next == NULL)
	{
		free(temp);
		*head = NULL;
		return;
	}
	while (temp->next->next != NULL)
	{
		temp = temp->next;
	}

	free(temp->next);
	temp->next = NULL;
}

void inserttail2(struct Node** head, int data)
{
	struct Node* newnode = createnode(data);

	if (*head == NULL)
	{
		*head = newnode;
		return;
	}
	struct Node* temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

}

void print(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL)
	{
		printf("%d -> ", temp->data);
		temp = temp->next;

	}
	printf("NULL\n");
}



int main()
{
	struct Node* head = NULL;

	inserthead(&head, 10);
	printf("Linkedlist after inserting\n");
	print(head);


	deletehead(&head);
	print(head);

	insertheadagain(&head, 20);
	printf("Linked list after delete new head\n");
	print(head);

	inserttail(&head, 30);
	printf("Linkedlist after tail \n");
	print(head);


	deletetail(&head);
	print(head);

	inserttail2(&head, 40);
	printf("Linkedlist after tail \n");
	print(head);

	return 0;
}