//#include <stdio.h>
//
//int main() {
//    int a = 1025; // Binary: 00000000 00000000 00000100 00000001
//    int* p = &a;
//
//    printf("--- Strong Types & Sizes ---\n");
//    printf("Size of int: %zu bytes\n", sizeof(int));
//    printf("Address p: %p, Value: %d\n", (void*)p, *p);
//
//    // Pointer Arithmetic & Typecasting
//    char* p0 = (char*)p; // Typecast to 1-byte pointer
//    printf("\n--- Pointer Arithmetic (char*) ---\n");
//    printf("Size of char: %zu byte\n", sizeof(char));
//    printf("Address p0: %p, Value: %d\n", (void*)p0, *p0); // Prints 1 (first byte)
//    printf("Address p0+1: %p, Value: %d\n", (void*)(p0 + 1), *(p0 + 1)); // Prints 4 (second byte)
//
//    // Void Pointer (Generic pointer type)
//    void* p1 = p;
//    printf("\n--- Void Pointer ---\n");
//    printf("Void pointer address: %p\n", p1);
//    // Note: You cannot directly dereference (*p1) or do math (p1 + 1) without typecasting it first!
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int x = 5;
//    int* p = &x;    // Stores address of x
//    int** q = &p;   // Stores address of p (Pointer to Pointer)
//    int*** r = &q;  // Stores address of q (Pointer to Pointer to Pointer)
//
//    printf("--- Chained Dereferencing ---\n");
//    printf("Value via *p:   %d\n", *p);
//    printf("Value via **q:  %d\n", **q);
//    printf("Value via ***r: %d\n", ***r);
//
//    // Modifying the base value through the chain
//    ***r = 10;
//    printf("New value of x: %d\n", x);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//// Call by Value: Modifies a local copy inside the stack frame
//void incrementValue(int a) {
//    a = a + 1;
//}
//
//// Call by Reference: Safely modifies the original memory address
//void incrementReference(int* p) {
//    *p = (*p) + 1;
//}
//
//int main() {
//    int a = 10;
//
//    incrementValue(a);
//    printf("Value after Call by Value: %d\n", a); // Output: 10
//
//    incrementReference(&a);
//    printf("Value after Call by Reference: %d\n", a); // Output: 11
//
//    return 0;
//}


//#include <stdio.h>
//
//// When passed to a function, 'int a[]' is implicitly downgraded to 'int *a'
//void doubleElements(int* a, int size) {
//    for (int i = 0; i < size; i++) {
//        // structural notation for a[i] is identical to *(a + i)
//        *(a + i) = 2 * *(a + i);
//    }
//}
//
//int main() {
//    int a[] = { 1, 2, 3, 4, 5 };
//    int size = sizeof(a) / sizeof(a[0]);
//
//    printf("Base address via array name 'a': %p\n", (void*)a);
//    printf("Base address via '&a[0]':         %p\n", (void*)&a[0]);
//
//    // Navigating via pointer arithmetic
//    printf("\n--- Element Mapping ---\n");
//    for (int i = 0; i < size; i++) {
//        printf("Index %d | Address: %p | Value: %d\n", i, (void*)(a + i), *(a + i));
//    }
//
//    doubleElements(a, size);
//
//    printf("\nModified Array: ");
//    for (int i = 0; i < size; i++) printf("%d ", a[i]);
//    printf("\n");
//
//    return 0;
//}


//#include <stdio.h>
//
//// 'const' enforces read-only safety so the loop won't accidentally corrupt data
//void printString(const char* c) {
//    while (*c != '\0') { // Loop runs up until the implicit null-terminator
//        printf("%c", *c);
//        c++; // Move pointer forward by 1 byte
//    }
//    printf("\n");
//}
//
//int main() {
//    // Stored inside the local stack frame as a mutable array
//    char string1[20] = "Hello";
//    string1[0] = 'h'; // Valid syntax
//    printString(string1);
//
//    // Stored as a strict string constant in the Read-Only text segment
//    char* string2 = "World";
//    // string2[0] = 'w'; // CRITICAL WARNING: This will cause a segmentation fault crash!
//    printString(string2);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    // 2D Array Mapping
//    int b[2][3] = { {2, 3, 6}, {4, 5, 8} };
//    int (*p)[3] = b; // Pointer to an entire 1D subarray of 3 elements
//
//    printf("--- 2D Array Pointer Mechanics ---\n");
//    printf("b       = %p\n", (void*)b);
//    printf("*b      = %p\n", (void*)*b);          // Evaluates down to integer pointer block step
//    printf("b + 1   = %p\n", (void*)(b + 1));      // Shifts over by 12 bytes (3 ints * 4 bytes)
//    printf("Value at b[1][2]: %d\n", *(*(b + 1) + 2));
//
//    // 3D Array Dereferencing Chain
//    int c[2][2][2] = {
//        {{1, 2}, {3, 4}},
//        {{5, 6}, {7, 8}}
//    };
//
//    printf("\n--- 3D Array Parsing ---\n");
//    // Matrix formula representation: c[i][j][k] == *(*(*(c + i) + j) + k)
//    printf("Value at c[1][0][1]: %d\n", *(*(*(c + 1) + 0) + 1)); // Outputs 6
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h> // Required for dynamic memory helper allocation methods
//
//int main() {
//    int n = 3;
//
//    // 1. MALLOC: Reserves block footprint. Bits are left untouched containing raw garbage data.
//    int* arr_m = (int*)malloc(n * sizeof(int));
//
//    // 2. CALLOC: Allocates memory and automatically initializes every bit to zero.
//    int* arr_c = (int*)calloc(n, sizeof(int));
//
//    printf("--- Calloc Initialization (Guaranteed Zeroes) ---\n");
//    for (int i = 0; i < n; i++) printf("%d ", arr_c[i]);
//    printf("\n");
//
//    // Assigning values to allocated space
//    for (int i = 0; i < n; i++) arr_m[i] = i + 1;
//
//    // 3. REALLOC: Resizes an active heap cluster safely.
//    int* arr_new = (int*)realloc(arr_m, 2 * n * sizeof(int)); // Double the allocation size
//    if (arr_new != NULL) {
//        arr_m = arr_new; // Update tracker reference pointer safely
//    }
//
//    // 4. FREE: Deallocates heap blocks manually back to system memory pool to prevent corruption.
//    free(arr_m);
//    free(arr_c);
//
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//// DANGEROUS ERROR: Never do this!
//int* badStackReturn() {
//    int local_var = 50;
//    return &local_var; // Returns the address of a local variable that dies when the stack frame pops!
//}
//
//// SAFE PRACTICE: Allocate memory dynamically on the heap so it outlives the function execution block
//int* safeHeapReturn() {
//    int* heap_ptr = (int*)malloc(sizeof(int));
//    *heap_ptr = 100;
//    return heap_ptr; // Safe to pass downstream
//}
//
//int main() {
//    int* ptr_garbage = badStackReturn();
//    // printf("%d\n", *ptr_garbage); // Running this line will output random garbage or trigger undefined system state.
//
//    int* ptr_safe = safeHeapReturn();
//    printf("Safely captured heap allocation return value: %d\n", *ptr_safe);
//
//    free(ptr_safe); // Clean up the returned allocation tracking address
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void executeMemoryLeak() {
//    // Requesting space on the heap
//    int* leak_ptr = (int*)malloc(1000 * sizeof(int));
//
//    // Changing scope or dropping tracking handle without freeing the allocation creates a leak.
//    // The memory stays booked and inaccessible to the OS until the process stops entirely.
//    leak_ptr = NULL;
//}
//
//void cleanMemoryExecution() {
//    int* good_ptr = (int*)malloc(1000 * sizeof(int));
//
//    // Explicit deallocation before shifting pointer scope prevents accumulation leaks.
//    free(good_ptr);
//    good_ptr = NULL;
//}
//
//int main() {
//    executeMemoryLeak();
//    cleanMemoryExecution();
//    printf("Memory safety execution patterns successfully evaluated.\n");
//    return 0;
//}


//#include <stdio.h>
//
//int add(int a, int b) {
//    return a + b;
//}
//
//int multiply(int a, int b) {
//    return a * b;
//}
//
//// Higher-order execution block accepts a raw function tracking pointer shortcut as a Callback argument
//void executeOperation(int (*operationFunc)(int, int), int x, int y) {
//    int result = operationFunc(x, y); // Callback trigger invocation step
//    printf("Callback Operation Result Processing Event: %d\n", result);
//}
//
//int main() {
//    // Function Pointer Declaration: Type blueprint matches function layout signatures exactly
//    int (*ptrFunc)(int, int);
//
//    ptrFunc = add; // Point to structural definition entry logic address
//    printf("Direct invocation via pointer: %d\n", ptrFunc(4, 5));
//
//    printf("\n--- Higher Order Callback Architectures ---\n");
//    executeOperation(add, 10, 2);      // Passing 'add' as reference callback logic block
//    executeOperation(multiply, 10, 2); // Passing 'multiply' dynamically instead
//
//    return 0;
//}