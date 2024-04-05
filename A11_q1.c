#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top= -1;
void push(char data)
{
    if(top==MAX_SIZE -1)
    {
        printf("overflow ");
        return;
    }
    top++;
    stack[top]=data;
}
char pop(){
    if(top== -1)
    {
        printf("empty stack\n");
        return '\0';

    }
    char data= stack[top];
    top--;
    return data;
}
void reverse_string(char*str)
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        push(str[i]);
    }
    for(int i=0;i<len;i++)
    {
        str[i]=pop();
    }
}

int main()
{
    char text[MAX_SIZE];
    printf("enter a string");
    fgets(text,MAX_SIZE,stdin);
    text[strcspn(text,"\n")]='\0';
    reverse_string(text);
    printf("reversed string : %s\n",text);
    return 0;
}