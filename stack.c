#include <stdio.h>
#include <stdlib.h>

// Max capacity of stack
#define SIZE 4

int top = -1; // Initialize top to -1 (empty stack)
int inp_array[SIZE]; // Array to hold stack elements

// Stack functions
void push();
void pop();
void show();

int main() {
    int choice;

    while (1) {
        printf("\n\nPracticing stack functions:");
        printf("\nPress 1 to push the element");
        printf("\nPress 2 to pop element");
        printf("\nPress 3 to show elements");
        printf("\nPress 4 to exit");
        printf("\n\nEnter choice: ");

        // Input validation for choice
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input! Please enter a valid number.");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }

        // Validate range of choice
        if (choice < 1 || choice > 4) {
            printf("\nInvalid choice! Please select a number between 1 and 4.");
            continue;
        }

        // Cases for all functions
        switch (choice) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("\nExiting program. Goodbye!\n");
            exit(0);
        default:
            printf("\nInvalid input.");
        }
    }
}

// Push operation
void push() {
    int x;

    if (top == SIZE - 1) {
        printf("\nOverflow! Stack is full.");
    } else {
        printf("\nEnter element to add: ");
        if (scanf("%d", &x) != 1) {
            printf("\nInvalid input! Please enter a number.");
            while (getchar() != '\n'); // Clear buffer
            return;
        }
        top = top + 1; // Increment top
        inp_array[top] = x; // Add element to stack
        printf("\nElement %d added to stack.", x);
    }
}

// Pop operation
void pop() {
    if (top == -1) { // Check for underflow
        printf("\nUnderflow! Stack is empty.");
    } else {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1; // Decrement top
    }
}

// Show operation
void show() {
    if (top == -1) { // Check for empty stack
        printf("\nUnderflow! Stack is empty.");
    } else {
        printf("\nElements in the stack (top to bottom):");
        for (int i = top; i >= 0; --i) {
            printf("\nElement: %d", inp_array[i]);
        }
    }
}
