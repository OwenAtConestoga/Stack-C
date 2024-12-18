#include <stdio.h>
#include <stdlib.h>

// max capacity of stack
#define SIZE 4

int top = -1;
int inp_array[SIZE];
void push();
void pop();
void show();

int main (){

}


void push(){
    // stores variable to be pushed onto the stack
    int x;
    
    // top represents index of current top of stack
    if (top == SIZE -1){
        printf("\nOverflow!\n");
    // if there is room, ask user for what to add
    } else{
        printf("\nEnter elements to add: ");
        scanf("%d", &x);
        // increment top to add 1 for the element added
        top = top + 1;
        //store new element in array loop indexed by top
        inp_array[top] = x;
    }
}
// push
// pop
// top: returns top element of the stack
// isEmpty:returns true if stack is empty else false
// isFull: returns true if the stack is full else false
    // if(top == capacity-1) stack overflows
    // else (top = top+1)