#include<stdio.h>


//working with pointers
//int main()
//{
//	int x = 42;
//
//	int* ptr = &x;
//
//	printf("Value of x %d\n", x);
//	printf("Address of x %p\n", &x);
//	printf("value of ptr %p \n", ptr);
//
//	printf("Dereferencing ptr %d\n", *ptr);
//
//	*ptr = 99;
//
//	printf("x after *ptr = 99 %d\n", x);
//
//	return 0;
//}

//pointer to pointer to pointer

//int main()
//{
//	//int i = 10; 
//
//	//int* j = &i;
//
//	//*j = 12;
//
//	//int** k = &j;
//
//	//k = 20;
//
//	//int*** l = &k;
//
//	//
//	//printf("%d\n", **l);
//
//
//	//return 0;
//}
//

//call by reference done in c++
//void Increment(int *p)
//{
//	p = (*p) + 1;
//}
//
//int main()
//{
//	int a;
//	a = 10;
//
//	Increment(&a);
//	print("a = %d", a);
//}

//int main()
//{
//	int a = 10;
//
//	int* p = &a;
//
//	p = 1;
//
//	int** j = &p;
//
//	printf("Value is %d", *j);
//}

//****
//****
//****
//****
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				for (int i = 0; i < 5; i++)
//				{
//
//				}
//			}
//		}
//
//		printf("\n *");
//
//		printf("*");
//
//		printf("*");	
//	}
//}

//****
//*  *
//*  *
//****

//int main()
//{
//	for (int i = 0; i < 5; i++) //rows
//	{
//		for(int j = 0; j < 5; j++) //columns
//			if(i == 0|| i == 4 || j == 0 || j == 4)
//				printf("*");
//			else
//			{
//				printf(" ");
//			}
//
//		printf("\n");
//	}
//}


//****
// ****
//  ****
//   ****

//int main()
//{
	/*for (int rows = 0; rows < 4; rows++)
	{
		for (int spaces = 0; spaces < rows; spaces++)
		{
			printf(" ");
		}

		for (int columns = 0; columns < 4; columns++)
		{
			printf("*");		
		}

		printf("\n");
	}*/




	
//}

//******
//******
//******
//******

//int main()
//{
//	for (int rows = 0; rows < 5; rows++)
//	{
//		for (int columns = 0; columns < 6; columns++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//}


//******
//*    *
//*    *
//******
//int main()
//{
//	for (int rows = 0; rows < 5; rows++)
//	{
//		for (int columns = 0; columns < 6; columns++)
//		{
//			if (rows == 0 || rows == 4 || columns == 0 || columns == 5)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//
//		printf("\n");
//	}
//}


//   ****
//  ****
// ****
//****

int main()
{
	for (int row = 0; row < 4; row++)
	{

		for (int spaces = 4; spaces > row ; spaces--)
		{

			printf(" ");
		}

		for (int columns = 0; columns < 4; columns++)
		{
			printf("*");
		}

		printf("\n");
	}
}



