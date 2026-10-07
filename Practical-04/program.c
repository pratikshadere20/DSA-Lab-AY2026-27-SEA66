#include <stdio.h>
#define MAX 32
int stack[MAX];
int top = -1;
void push(int value)
{
    stack[++top] = value;
}
int pop()
{
    return stack[top--];
}
int main()
{
    int decimal, n;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    n = decimal;
    if (decimal == 0)
    {
        printf("Binary equivalent = 0");
        return 0;
    }
    while (decimal > 0)
    {
        push(decimal % 2);
decimal = decimal / 2;
}
printf("Binary equivalent of %d = ", n);
while (top != -1)
{
printf("%d", pop());
}
return 0;
}