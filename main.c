#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack* stack)
{

    return stack->top == stack->capacity-1;
}

int isEmpty (struct Stack* stack)
{

    return stack->top == -1;
}

void push(struct Stack* stack, int item)
{
    if(isFull(stack))
        return;
    return stack->array[stack->top] == item;
}

int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

int peek(struct Stack* stack)
    {
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
    }

void Display(struct Stack* stack)
{

    if(isEmpty(stack))
        return;
    return stack->capacity;
}
int main()
{
    struct Stack* stack = createStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
}
