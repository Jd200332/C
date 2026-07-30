//#include<stdio.h>
//
//
////working with pointers
////int main()
////{
////	int x = 42;
////
////	int* ptr = &x;
////
////	printf("Value of x %d\n", x);
////	printf("Address of x %p\n", &x);
////	printf("value of ptr %p \n", ptr);
////
////	printf("Dereferencing ptr %d\n", *ptr);
////
////	*ptr = 99;
////
////	printf("x after *ptr = 99 %d\n", x);
////
////	return 0;
////}
//
////pointer to pointer to pointer
//
////int main()
////{
////	//int i = 10; 
////
////	//int* j = &i;
////
////	//*j = 12;
////
////	//int** k = &j;
////
////	//k = 20;
////
////	//int*** l = &k;
////
////	//
////	//printf("%d\n", **l);
////
////
////	//return 0;
////}
////
//
////call by reference done in c++
////void Increment(int *p)
////{
////	p = (*p) + 1;
////}
////
////int main()
////{
////	int a;
////	a = 10;
////
////	Increment(&a);
////	print("a = %d", a);
////}
//
////int main()
////{
////	int a = 10;
////
////	int* p = &a;
////
////	p = 1;
////
////	int** j = &p;
////
////	printf("Value is %d", *j);
////}
//
////****
////****
////****
////****
////int main()
////{
////	for (int i = 0; i < 5; i++)
////	{
////		
////		{
////			for (int i = 0; i < 5; i++)
////			{
////				for (int i = 0; i < 5; i++)
////				{
////
////				}
////			}
////		}
////
////		printf("\n *");
////
////		printf("*");
////
////		printf("*");	
////	}
////}
//
////****
////*  *
////*  *
////****
//
////int main()
////{
////	for (int i = 0; i < 5; i++) //rows
////	{
////		for(int j = 0; j < 5; j++) //columns
////			if(i == 0|| i == 4 || j == 0 || j == 4)
////				printf("*");
////			else
////			{
////				printf(" ");
////			}
////
////		printf("\n");
////	}
////}
//
//
////****
//// ****
////  ****
////   ****
//
////int main()
////{
//	/*for (int rows = 0; rows < 4; rows++)
//	{
//		for (int spaces = 0; spaces < rows; spaces++)
//		{
//			printf(" ");
//		}
//
//		for (int columns = 0; columns < 4; columns++)
//		{
//			printf("*");		
//		}
//
//		printf("\n");
//	}*/
//
//
//
//
//	
////}
//
////******
////******
////******
////******
//
////int main()
////{
////	for (int rows = 0; rows < 5; rows++)
////	{
////		for (int columns = 0; columns < 6; columns++)
////		{
////			printf("*");
////		}
////
////		printf("\n");
////	}
////}
//
//
////******
////*    *
////*    *
////******
////int main()
////{
////	for (int rows = 0; rows < 5; rows++)
////	{
////		for (int columns = 0; columns < 6; columns++)
////		{
////			if (rows == 0 || rows == 4 || columns == 0 || columns == 5)
////			{
////				printf("*");
////			}
////			else
////			{
////				printf(" ");
////			}
////		}
////
////		printf("\n");
////	}
////}
//
//
////   ****
////  ****
//// ****
////****
//
////int main()
////{
////	for (int row = 0; row < 4; row++)
////	{
////
////		for (int spaces = 4; spaces > row ; spaces--)
////		{
////			printf(" ");
////		}
////
////		for (int columns = 0; columns < 4; columns++)
////		{
////			printf("*");
////		}
////
////		printf("\n");
////	}
////}
//
////*
////**
////***
////****
//
////int main()
////{
////	int num = 5;
////	for (int row = 0; row < num; row++)
////	{
////		for (int column = 0; column < row + 1; column++)
////		{
////			printf("*");
////		}
////
////		printf("\n");	
////	}
////}
//
//
//
//
////#include <stdio.h>
////#include <stdlib.h>
////
////// Node structure
////struct Node {
////    int data;
////    struct Node* next;
////};
////
////// Insert at beginning
////void insertAtBeginning(struct Node** head, int value) {
////    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
////    newNode->data = value;
////    newNode->next = *head;
////    *head = newNode;
////    printf("Inserted %d at beginning\n", value);
////}
////
////// Insert at end
////void insertAtEnd(struct Node** head, int value) {
////    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
////    newNode->data = value;
////    newNode->next = NULL;
////
////    if (*head == NULL) {
////        *head = newNode;
////        printf("Inserted %d at end (first node)\n", value);
////        return;
////    }
////
////    struct Node* temp = *head;
////    while (temp->next != NULL) {
////        temp = temp->next;
////    }
////    temp->next = newNode;
////    printf("Inserted %d at end\n", value);
////}
////
////// Insert at specific position (0-based index)
////void insertAtPosition(struct Node** head, int pos, int value) {
////    // Check if position is valid
////    if (pos < 0) {
////        printf("Invalid position! Position cannot be negative.\n");
////        return;
////    }
////
////    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
////    newNode->data = value;
////
////    // Insert at beginning (pos = 0)
////    if (pos == 0) {
////        newNode->next = *head;
////        *head = newNode;
////        printf("Inserted %d at position %d (beginning)\n", value, pos);
////        return;
////    }
////
////    // Traverse to node before position
////    struct Node* temp = *head;
////    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
////        temp = temp->next;
////    }
////
////    // If position is out of bounds
////    if (temp == NULL) {
////        printf("Position %d is out of bounds! List has fewer elements.\n", pos);
////        free(newNode);
////        return;
////    }
////
////    // Insert in middle or end
////    newNode->next = temp->next;
////    temp->next = newNode;
////    printf("Inserted %d at position %d\n", value, pos);
////}
////
////// Print the list
////void printList(struct Node* head) {
////    if (head == NULL) {
////        printf("List is empty!\n");
////        return;
////    }
////
////    struct Node* temp = head;
////    printf("List: ");
////    while (temp != NULL) {
////        printf("%d ", temp->data);
////        temp = temp->next;
////    }
////    printf("\n");
////}
////
////// Main function
////int main() {
////    struct Node* head = NULL;
////
////    printf("========== SINGLY LINKED LIST INSERTION ==========\n\n");
////
////    // Insert at beginning
////    insertAtBeginning(&head, 10);
////    printList(head);
////
////    insertAtBeginning(&head, 20);
////    printList(head);
////
////    // Insert at end
////    insertAtEnd(&head, 30);
////    printList(head);
////
////    insertAtEnd(&head, 40);
////    printList(head);
////
////    // Insert at specific positions
////    insertAtPosition(&head, 2, 99);   // Insert at index 2
////    printList(head);
////
////    insertAtPosition(&head, 0, 5);    // Insert at beginning
////    printList(head);
////
////    insertAtPosition(&head, 4, 77);   // Insert in middle
////    printList(head);
////
////    insertAtPosition(&head, 10, 100); // Out of bounds (should fail)
////    printList(head);
////
////    printf("\n========== FINAL LIST ==========\n");
////    printList(head);
////
////    return 0;
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//// Define a Node structure
//// Each node has two parts:
////   1. data: the actual value (integer)
////   2. next: a pointer to the next node in the list
//struct Node {
//    int data;
//    struct Node* next;
//};
//
//// Function to insert a new node at any position
//// Parameters:
////   - head: pointer to the head pointer (so we can modify it)
////   - pos: position where to insert (0-based index)
////   - value: the value to insert
//void insertAtPosition(struct Node** head, int pos, int value) {
//
//    // Step 1: Create a new node in memory using malloc
//    // malloc returns a pointer to the newly allocated memory
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//
//    // Step 2: Put the value into the new node's data field
//    newNode->data = value;
//
//    // Step 3: Check if inserting at the beginning (position 0)
//    if (pos == 0) {
//        // New node's next should point to the current head
//        newNode->next = *head;
//        // Update head to point to the new node
//        *head = newNode;
//        printf("Inserted %d at position %d\n", value, pos);
//        return;  // Done, exit the function
//    }
//
//    // Step 4: For inserting at middle or end
//    // Create a temporary pointer to traverse the list
//    // Start from head and move to the node BEFORE the insertion position
//    struct Node* temp = *head;
//
//    // Loop to reach the node at (pos - 1)
//    // i = 0; while i < pos-1 AND temp is not NULL, keep moving
//    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
//        temp = temp->next;  // Move to next node
//    }
//
//    // Step 5: Check if position is out of bounds
//    // If temp is NULL, that means pos is greater than list length
//    if (temp == NULL) {
//        printf("Position %d out of bounds!\n", pos);
//        free(newNode);  // Free the memory we allocated (avoid memory leak)
//        return;
//    }
//
//    // Step 6: Insert the new node
//    // First: new node's next points to whatever temp was pointing to
//    newNode->next = temp->next;
//    // Then: temp's next now points to the new node
//    temp->next = newNode;
//    printf("Inserted %d at position %d\n", value, pos);
//}
//
//// Function to print the entire list
//void printList(struct Node* head) {
//    struct Node* temp = head;  // Start from head
//
//    printf("List: ");
//    while (temp != NULL) {      // Keep going until we hit NULL
//        printf("%d ", temp->data);  // Print current node's data
//        temp = temp->next;          // Move to next node
//    }
//    printf("\n");
//}
//
//int main() {
//    // Step 1: Create an empty list
//    // head starts as NULL (no nodes exist yet)
//    struct Node* head = NULL;
//
//    printf("=== Creating Linked List ===\n\n");
//
//    // Step 2: Insert first node (10 at position 0)
//    // Before: head = NULL
//    // After:  head → [10 | NULL]
//    insertAtPosition(&head, 0, 10);
//    printList(head);
//
//    // Step 3: Insert second node (20 at position 1)
//    // Before: head → [10 | NULL]
//    // After:  head → [10 | *] → [20 | NULL]
//    insertAtPosition(&head, 1, 20);
//    printList(head);
//
//    // Step 4: Insert third node (30 at position 2)
//    // Before: head → [10 | *] → [20 | NULL]
//    // After:  head → [10 | *] → [20 | *] → [30 | NULL]
//    insertAtPosition(&head, 2, 30);
//    printList(head);
//
//    printf("\n=== Final List ===\n");
//    printList(head);
//
//    return 0;
//}