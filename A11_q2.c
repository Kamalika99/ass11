#include <stdio.h>
#include <string.h>
int top = -1;
char stack[100];
void push(char x)
{
    if (top == 100)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
char pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        stack[top] = '\0';
        top--;
    }
}
int main()
{
    char K[100];
    printf("Enter a string in all lower case letters:-\n");
    gets(K);
    for (int i = 0; i < strlen(K); i++)
    {

        if (stack[top] == K[i])
        {
            pop();
        }
        else
        {
            push(K[i]);
        }
    }
    for (int i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }
}