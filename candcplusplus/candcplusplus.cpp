//#include <iostream>
//#include <stdlib.h>
//#include <conio.h>
//
//using namespace std;
//
//int main()
//{
//	//int a = 15; 
//	//int b = 20;
//
//	//int* pointer = &b;
//
//	//int* node = &a;
//
//	//cout << "address of a variable" << endl;
//	//cout <<  node << endl;
//
//	//cout << "address of b variable" << endl;
//	//cout <<  pointer << endl;
//
//	//
//
//	//for (int i = 0; i < a; i++)
//	//{
//	//	cout << node << endl;
//	//}
//
//	//for (int i = 0; i < b; i++)
//	//{
//	//	cout << pointer << endl;
//	//		 
//	//}
//
//	//return 0;
//
//}
//

//void Logic(int *a)
//{
//	*a = (*a) + 1;
//}
//
//int main()
//{
//	int b; 
//	b = 11;
//	Logic(&b);
//	printf("b = %d", b);
//}

//int main()
//{
	//int arr[] = { 10, 20, 30, 40 };

	//int* ptr = arr;

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d", *(ptr + 1));
	//}

	//int s = 10;

	//int* p = &s; // reference 

	//*p = 11;

	//int** j = &p;

	//**j = 13;

	//std::cout << s << "\n";
	//std::cout << &p << "\n";
	//std::cout << **j << "\n";

	//return 0;

//	int i = 10;
//
//	int* p = &i;
//
//	*p = 11;
//
//	std::cout << i << "\n"; // this will now be 11 because the pointer changed the value 
//	std::cout << *p << "\n"; // this is 11
//	std::cout << p << "\n"; // this will show the address
//}

//struct Person
//{
//	char Name;
//	float Salary;
//	char Emailid;
//
//};

//address and value of arrays 
//int main()
//{
//	int a[2] = { 10, 20};
//
//	std::cout << a[0] << "\n";
//
//	std::cout << &a[0];
//
//	std::cout << a[1] << "\n";
//
//	std::cout << &a[1];
//
//
//}


/// <summary>
/// program to read and display the elements of array
/// along with the total , number of even and off number
/// </summary>
/// <returns></returns>


#include<stdio.h>
#include<stdlib.h>	
#include <iostream>

//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int space = 5; space > i; space--)
//		{
//			std::cout << " ";
//		}
//
//		for (int j = 0; j < 5; j++)
//		{
//			std::cout << "*";
//		}
//
//		std::cout << "\n";
//	}
// }


//*
//**
//***
//****
//int main()
//{
//	for (int r = 0; r < 5; r++)
//	{
//		for (int c = 0; c < r; c++)
//		{
//			std::cout << "*";
//		}
//
//		std::cout << "\n";
//	}
//}


//   *
//  ***
// *****
//*******

//*
//***
//***
//*



//int main()
//{
//	int r ;
//	for (int i = 0; i < r; i++)    //outer loop for number of rows
//	{
//		for (int k = r; k > i + 1; k--)     //nested loop for number of spaces
//		{
//			std::cout << " ";     //printing spaces
//		}
//		for (int j = 0; j <= i * 2; j++)     //nested loop for printing stars
//		{
//			std::cout << "*";     //printing stars
//		}
//		std::cout << "\n"; //printing newline
//	}
//}


#include <stdio.h>
#include<iostream>
#include<cstdio>
#include<cstdlib>

//int main() {
//	char arr[10] = { 'A', 'B', 'C', 'D', 'E' };
//	int size = 5; 
//	int p = 3;
//	int value = 'F';
//
//	for (int i = p; i < size - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//
//	arr[p] = value;
//	size++;
//
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//
//	return 0;
//}


#include <cstdio>
#include <cstdlib>
#include <iostream>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}


//linkedlist
int main() {
    struct Node* head = NULL;

    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    first->data = 10;
    first->next = NULL;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 20;
    second->next = NULL;

    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    third->data = 30;
    third->next = NULL;

    head = first;
    first->next = second;
    second->next = third;

    printList(head);  // Output: 10 20 30

    return 0;
}


//queue
struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node* top = NULL;

    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    first->data = 10;
    first->next = NULL;
    top = first;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    first->data = 20;
    first->next = NULL;
    top = second;

    return 0;
}



